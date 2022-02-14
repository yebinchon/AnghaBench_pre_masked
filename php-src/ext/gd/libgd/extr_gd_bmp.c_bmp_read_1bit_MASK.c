
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
typedef int gdIOCtxPtr ;
struct TYPE_10__ {scalar_t__ enctype; int numcolors; scalar_t__ type; int width; int height; scalar_t__ topdown; } ;
typedef TYPE_2__ bmp_info_t ;
struct TYPE_11__ {scalar_t__ off; } ;
typedef TYPE_3__ bmp_hdr_t ;
struct TYPE_9__ {int colorsTotal; scalar_t__* open; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(gdImagePtr VAR_2, gdIOCtxPtr VAR_3, bmp_info_t *VAR_4, bmp_hdr_t *VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 int VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;

 if (VAR_4->enctype != VAR_0) {
  return 1;
 }

 if (!VAR_4->numcolors) {
  VAR_4->numcolors = 2;
 } else if (VAR_4->numcolors < 0 || VAR_4->numcolors > 2) {
  return 1;
 }

 if (FUNC_0(VAR_2, VAR_3, VAR_4->numcolors, (VAR_4->type == VAR_1))) {
  return 1;
 }

 VAR_2->colorsTotal = VAR_4->numcolors;


 if (FUNC_4(VAR_3) != VAR_5->off) {

  if (!FUNC_3(VAR_3, VAR_5->off)) {
   return 1;
  }
 }


 VAR_10 = (VAR_4->width + 7) / 8 % 4;
 if (VAR_10) {
  VAR_10 = 4 - VAR_10;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->height; ++VAR_6) {
  if (VAR_4->topdown) {
   VAR_8 = VAR_6;
  } else {
   VAR_8 = VAR_4->height - VAR_6 - 1;
  }

  for (VAR_7 = 0; VAR_7 < VAR_4->width; VAR_7 += 8) {

   if (!FUNC_1(&VAR_11, VAR_3)) {
    return 1;
   }

   for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
    VAR_9 = ((VAR_11 & (0x80 >> VAR_12)) != 0 ? 0x01 : 0x00);
    if (VAR_2->open[VAR_9]) {
     VAR_2->open[VAR_9] = 0;
    }
    FUNC_2(VAR_2, VAR_7 + VAR_12, VAR_8, VAR_9);

    if ((VAR_7 + VAR_12) >= VAR_4->width) {
     break;
    }
   }
  }

  for (VAR_7 = VAR_10; VAR_7 > 0; --VAR_7) {
   if (!FUNC_1(&VAR_9, VAR_3)) {
    return 1;
   }
  }
 }
 return 0;
}
