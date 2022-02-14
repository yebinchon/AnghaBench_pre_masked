
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int* palette_map; } ;
struct TYPE_6__ {scalar_t__ biCompression; int biBitCount; int biWidth; } ;
typedef int LRESULT ;
typedef TYPE_1__* LPCBITMAPINFOHEADER ;
typedef int* LPBYTE ;
typedef TYPE_2__ CodecInfo ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;

__attribute__((used)) static LRESULT FUNC_2(const CodecInfo *VAR_5, LPCBITMAPINFOHEADER VAR_6,
          const BYTE *VAR_7, LPBYTE VAR_8)
{
  int VAR_9;
  int VAR_10;
  int VAR_11 = 0;
  int VAR_12;
  BOOL VAR_13 = VAR_1;

  FUNC_1(VAR_5 != ((void*)0));
  FUNC_1(VAR_6 != ((void*)0) && VAR_6->biCompression == VAR_0);
  FUNC_1(VAR_7 != ((void*)0) && VAR_8 != ((void*)0));

  VAR_9 = (VAR_6->biBitCount + 1) / 8;
  VAR_10 = FUNC_0(*VAR_6);

  do {
    BYTE VAR_14, VAR_15;

    VAR_14 = *VAR_7++;
    VAR_15 = *VAR_7++;

    if (VAR_14 == 0) {
      int VAR_16;

      switch (VAR_15) {
      case 0:
 VAR_11 = 0;
 VAR_8 += VAR_10;
 break;
      case 1:
 VAR_13 = VAR_4;
 break;
      case 2:
 VAR_11 += *VAR_7++ * VAR_9;
 VAR_8 += *VAR_7++ * VAR_10;
 if (VAR_11 >= VAR_6->biWidth * VAR_9) {
   VAR_11 = 0;
   VAR_8 += VAR_10;
 }
 break;
      default:
 VAR_16 = (((VAR_15 + 1) & (~1)) / 2) & 0x01;

 if (VAR_11/VAR_9 + VAR_15 > VAR_6->biWidth)
   return VAR_2;

 VAR_14 = VAR_15;
 for (VAR_12 = 0; VAR_12 < VAR_14 / 2; VAR_12++) {
   if (VAR_9 == 1) {
     VAR_15 = VAR_7[VAR_12];
     VAR_8[VAR_11++] = VAR_5->palette_map[(VAR_15 >> 4)];
     if (2 * VAR_12 + 1 <= VAR_14)
       VAR_8[VAR_11++] = VAR_5->palette_map[(VAR_15 & 0x0F)];
   } else if (VAR_9 == 2) {
     VAR_15 = VAR_7[VAR_12] >> 4;
     VAR_8[VAR_11++] = VAR_5->palette_map[VAR_15 * 2 + 0];
     VAR_8[VAR_11++] = VAR_5->palette_map[VAR_15 * 2 + 1];

     if (2 * VAR_12 + 1 <= VAR_14) {
       VAR_15 = VAR_7[VAR_12] & 0x0F;
       VAR_8[VAR_11++] = VAR_5->palette_map[VAR_15 * 2 + 0];
       VAR_8[VAR_11++] = VAR_5->palette_map[VAR_15 * 2 + 1];
     }
   } else {
     VAR_15 = VAR_7[VAR_12] >> 4;
     VAR_8[VAR_11 + 0] = VAR_5->palette_map[VAR_15 * 4 + 0];
     VAR_8[VAR_11 + 1] = VAR_5->palette_map[VAR_15 * 4 + 1];
     VAR_8[VAR_11 + 2] = VAR_5->palette_map[VAR_15 * 4 + 2];
     VAR_11 += VAR_9;

     if (2 * VAR_12 + 1 <= VAR_14) {
       VAR_15 = VAR_7[VAR_12] & 0x0F;
       VAR_8[VAR_11 + 0] = VAR_5->palette_map[VAR_15 * 4 + 0];
       VAR_8[VAR_11 + 1] = VAR_5->palette_map[VAR_15 * 4 + 1];
       VAR_8[VAR_11 + 2] = VAR_5->palette_map[VAR_15 * 4 + 2];
       VAR_11 += VAR_9;
     }
   }
 }
 if (VAR_14 & 0x01) {
   if (VAR_9 == 1) {
     VAR_15 = VAR_7[VAR_12];
     VAR_8[VAR_11++] = VAR_5->palette_map[(VAR_15 >> 4)];
   } else if (VAR_9 == 2) {
     VAR_15 = VAR_7[VAR_12] >> 4;
     VAR_8[VAR_11++] = VAR_5->palette_map[VAR_15 * 2 + 0];
     VAR_8[VAR_11++] = VAR_5->palette_map[VAR_15 * 2 + 1];
   } else {
     VAR_15 = VAR_7[VAR_12] >> 4;
     VAR_8[VAR_11 + 0] = VAR_5->palette_map[VAR_15 * 4 + 0];
     VAR_8[VAR_11 + 1] = VAR_5->palette_map[VAR_15 * 4 + 1];
     VAR_8[VAR_11 + 2] = VAR_5->palette_map[VAR_15 * 4 + 2];
     VAR_11 += VAR_9;
   }
   VAR_7++;
 }
 VAR_7 += VAR_14 / 2;


 if (VAR_16)
   VAR_7++;
      };
    } else {

      if (VAR_11/VAR_9 + VAR_14 > VAR_6->biWidth)
 return VAR_2;

      if (VAR_9 == 1) {
 BYTE VAR_17 = VAR_5->palette_map[(VAR_15 >> 4)];
 BYTE VAR_18 = VAR_5->palette_map[(VAR_15 & 0x0F)];

 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
   if ((VAR_12 & 1) == 0)
     VAR_8[VAR_11++] = VAR_17;
   else
     VAR_8[VAR_11++] = VAR_18;
 }
      } else if (VAR_9 == 2) {
 BYTE VAR_19 = VAR_5->palette_map[(VAR_15 >> 4) * 2 + 0];
 BYTE VAR_20 = VAR_5->palette_map[(VAR_15 >> 4) * 2 + 1];

 BYTE VAR_21 = VAR_5->palette_map[(VAR_15 & 0x0F) * 2 + 0];
 BYTE VAR_22 = VAR_5->palette_map[(VAR_15 & 0x0F) * 2 + 1];

 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
   if ((VAR_12 & 1) == 0) {
     VAR_8[VAR_11++] = VAR_19;
     VAR_8[VAR_11++] = VAR_20;
   } else {
     VAR_8[VAR_11++] = VAR_21;
     VAR_8[VAR_11++] = VAR_22;
   }
 }
      } else {
 BYTE VAR_23 = VAR_5->palette_map[(VAR_15 >> 4) * 4 + 0];
 BYTE VAR_24 = VAR_5->palette_map[(VAR_15 >> 4) * 4 + 1];
 BYTE VAR_25 = VAR_5->palette_map[(VAR_15 >> 4) * 4 + 2];

 BYTE VAR_26 = VAR_5->palette_map[(VAR_15 & 0x0F) * 4 + 0];
 BYTE VAR_27 = VAR_5->palette_map[(VAR_15 & 0x0F) * 4 + 1];
 BYTE VAR_28 = VAR_5->palette_map[(VAR_15 & 0x0F) * 4 + 2];

 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
   if ((VAR_12 & 1) == 0) {
     VAR_8[VAR_11 + 0] = VAR_23;
     VAR_8[VAR_11 + 1] = VAR_24;
     VAR_8[VAR_11 + 2] = VAR_25;
   } else {
     VAR_8[VAR_11 + 0] = VAR_26;
     VAR_8[VAR_11 + 1] = VAR_27;
     VAR_8[VAR_11 + 2] = VAR_28;
   }
   VAR_11 += VAR_9;
 }
      }
    }
  } while (! VAR_13);

  return VAR_3;
}
