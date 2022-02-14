
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int gdImagePtr ;
typedef int gdIOCtxPtr ;
struct TYPE_5__ {int enctype; int depth; int width; int height; scalar_t__ topdown; } ;
typedef TYPE_1__ bmp_info_t ;
struct TYPE_6__ {scalar_t__ off; } ;
typedef TYPE_2__ bmp_hdr_t ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (short*,int ) ;
 int FUNC_3 (int ,int,int,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int FUNC_8(gdImagePtr VAR_0, gdIOCtxPtr VAR_1, bmp_info_t *VAR_2, bmp_hdr_t *VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 signed short int VAR_12 = 0;

 switch(VAR_2->enctype) {
 case 130:

  break;

 case 133:
  if (VAR_2->depth == 24) {
   FUNC_0(FUNC_7("Bitfield compression isn't supported for 24-bit\n"));
   return 1;
  }
  FUNC_0(FUNC_7("Currently no bitfield support\n"));
  return 1;
  break;

 case 128:
  if (VAR_2->depth != 8) {
   FUNC_0(FUNC_7("RLE is only valid for 8-bit images\n"));
   return 1;
  }
  break;
 case 129:
  if (VAR_2->depth != 4) {
   FUNC_0(FUNC_7("RLE is only valid for 4-bit images\n"));
   return 1;
  }
  break;
 case 132:
 case 131:
 default:
  FUNC_0(FUNC_7("Unsupported BMP compression format\n"));
  return 1;
 }


 if (FUNC_5(VAR_1) != VAR_3->off) {

  if (!FUNC_4(VAR_1, VAR_3->off)) {
   return 1;
  }
 }


 VAR_7 = ((int)(VAR_2->depth / 8) * VAR_2->width) % 4;
 if (VAR_7) {
  VAR_7 = 4 - VAR_7;
 }


 for (VAR_4 = 0; VAR_4 < VAR_2->height; ++VAR_4) {
  if (VAR_2->topdown) {
   VAR_6 = VAR_4;
  } else {
   VAR_6 = VAR_2->height - VAR_4 - 1;
  }

  for (VAR_5 = 0; VAR_5 < VAR_2->width; VAR_5++) {
   if (VAR_2->depth == 16) {
    if (!FUNC_2(&VAR_12, VAR_1)) {
     return 1;
    }
    FUNC_0(FUNC_7("Data: %X\n", VAR_12));
    VAR_9 = ((VAR_12 & 0x7C00) >> 10) << 3;
    VAR_10 = ((VAR_12 & 0x3E0) >> 5) << 3;
    VAR_11 = (VAR_12 & 0x1F) << 3;
    FUNC_0(FUNC_7("R: %d, G: %d, B: %d\n", VAR_9, VAR_10, VAR_11));
   } else if (VAR_2->depth == 24) {
    if (!FUNC_1(&VAR_11, VAR_1) || !FUNC_1(&VAR_10, VAR_1) || !FUNC_1(&VAR_9, VAR_1)) {
     return 1;
    }
   } else {
    if (!FUNC_1(&VAR_11, VAR_1) || !FUNC_1(&VAR_10, VAR_1) || !FUNC_1(&VAR_9, VAR_1) || !FUNC_1(&VAR_8, VAR_1)) {
     return 1;
    }
   }

   FUNC_3(VAR_0, VAR_5, VAR_6, FUNC_6(VAR_9, VAR_10, VAR_11));
  }
  for (VAR_5 = VAR_7; VAR_5 > 0; --VAR_5) {
   if (!FUNC_1(&VAR_9, VAR_1)) {
    return 1;
   }
  }
 }

 return 0;
}
