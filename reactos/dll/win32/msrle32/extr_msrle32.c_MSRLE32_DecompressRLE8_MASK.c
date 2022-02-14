
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* palette_map; } ;
struct TYPE_6__ {scalar_t__ biCompression; int biBitCount; int biWidth; } ;
typedef int LRESULT ;
typedef TYPE_1__* LPCBITMAPINFOHEADER ;
typedef scalar_t__* LPBYTE ;
typedef TYPE_2__ CodecInfo ;
typedef scalar_t__ BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int,int,int,scalar_t__,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static LRESULT FUNC_3(const CodecInfo *VAR_5, LPCBITMAPINFOHEADER VAR_6,
          const BYTE *VAR_7, LPBYTE VAR_8)
{
  int VAR_9;
  int VAR_10;
  int VAR_11 = 0;
  BOOL VAR_12 = VAR_1;

  FUNC_2(VAR_5 != ((void*)0));
  FUNC_2(VAR_6 != ((void*)0) && VAR_6->biCompression == VAR_0);
  FUNC_2(VAR_7 != ((void*)0) && VAR_8 != ((void*)0));

  VAR_9 = (VAR_6->biBitCount + 1) / 8;
  VAR_10 = FUNC_0(*VAR_6);

  do {
    BYTE VAR_13, VAR_14;

    VAR_13 = *VAR_7++;
    VAR_14 = *VAR_7++;

    if (VAR_13 == 0) {
      int VAR_15;

      switch (VAR_14) {
      case 0:
 VAR_11 = 0;
 VAR_8 += VAR_10;
 break;
      case 1:
 VAR_12 = VAR_4;
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
 if (VAR_11/VAR_9 + VAR_14 > VAR_6->biWidth) {
          FUNC_1("aborted absolute: (%d=%d/%d+%d) > %d\n",VAR_11/VAR_9 + VAR_14,VAR_11,VAR_9,VAR_14,VAR_6->biWidth);
   return VAR_2;
 }
 VAR_15 = VAR_14 & 0x01;

 VAR_13 = VAR_14;
 while (VAR_13--) {
   VAR_14 = *VAR_7++;
   if (VAR_9 == 1) {
     VAR_8[VAR_11] = VAR_5->palette_map[VAR_14];
   } else if (VAR_9 == 2) {
     VAR_8[VAR_11 + 0] = VAR_5->palette_map[VAR_14 * 2 + 0];
     VAR_8[VAR_11 + 1] = VAR_5->palette_map[VAR_14 * 2 + 1];
   } else {
     VAR_8[VAR_11 + 0] = VAR_5->palette_map[VAR_14 * 4 + 0];
     VAR_8[VAR_11 + 1] = VAR_5->palette_map[VAR_14 * 4 + 1];
     VAR_8[VAR_11 + 2] = VAR_5->palette_map[VAR_14 * 4 + 2];
   }
   VAR_11 += VAR_9;
 }


 if (VAR_15)
   VAR_7++;
      };
    } else {

      if (VAR_11/VAR_9 + VAR_13 > VAR_6->biWidth) {
 FUNC_1("aborted coded: (%d=%d/%d+%d) > %d\n",VAR_11/VAR_9 + VAR_14,VAR_11,VAR_9,VAR_14,VAR_6->biWidth);
 return VAR_2;
      }

      if (VAR_9 == 1) {
 VAR_14 = VAR_5->palette_map[VAR_14];
 while (VAR_13--)
   VAR_8[VAR_11++] = VAR_14;
      } else if (VAR_9 == 2) {
 BYTE VAR_16 = VAR_5->palette_map[VAR_14 * 2 + 0];
 BYTE VAR_17 = VAR_5->palette_map[VAR_14 * 2 + 1];

 while (VAR_13--) {
   VAR_8[VAR_11 + 0] = VAR_16;
   VAR_8[VAR_11 + 1] = VAR_17;
   VAR_11 += VAR_9;
 }
      } else {
 BYTE VAR_18 = VAR_5->palette_map[VAR_14 * 4 + 2];
 BYTE VAR_19 = VAR_5->palette_map[VAR_14 * 4 + 1];
 BYTE VAR_20 = VAR_5->palette_map[VAR_14 * 4 + 0];

 while (VAR_13--) {
   VAR_8[VAR_11 + 0] = VAR_20;
   VAR_8[VAR_11 + 1] = VAR_19;
   VAR_8[VAR_11 + 2] = VAR_18;
   VAR_11 += VAR_9;
 }
      }
    }
  } while (! VAR_12);

  return VAR_3;
}
