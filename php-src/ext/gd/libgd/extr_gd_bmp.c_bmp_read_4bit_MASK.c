
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
typedef int gdIOCtxPtr ;
struct TYPE_12__ {int enctype; int numcolors; scalar_t__ type; double width; int height; int topdown; } ;
typedef TYPE_2__ bmp_info_t ;
struct TYPE_13__ {scalar_t__ off; } ;
typedef TYPE_3__ bmp_hdr_t ;
struct TYPE_11__ {int colorsTotal; int * open; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (double) ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (TYPE_1__*,int,int,int) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(gdImagePtr VAR_1, gdIOCtxPtr VAR_2, bmp_info_t *VAR_3, bmp_hdr_t *VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 int VAR_9 = 0, VAR_10 = 0;

 if (VAR_3->enctype != 129 && VAR_3->enctype != 128) {
  return 1;
 }

 if (!VAR_3->numcolors) {
  VAR_3->numcolors = 16;
 } else if (VAR_3->numcolors < 0 || VAR_3->numcolors > 16) {
  return 1;
 }

 if (FUNC_0(VAR_1, VAR_2, VAR_3->numcolors, (VAR_3->type == VAR_0))) {
  return 1;
 }

 VAR_1->colorsTotal = VAR_3->numcolors;


 if (FUNC_6(VAR_2) != VAR_4->off) {

  if (!FUNC_5(VAR_2, VAR_4->off)) {
   return 1;
  }
 }


 VAR_9 = ((int)FUNC_2(0.5 * VAR_3->width)) % 4;
 if (VAR_9) {
  VAR_9 = 4 - VAR_9;
 }

 switch (VAR_3->enctype) {
 case 129:
  for (VAR_5 = 0; VAR_5 < VAR_3->height; ++VAR_5) {
   if (VAR_3->topdown) {
    VAR_7 = VAR_5;
   } else {
    VAR_7 = VAR_3->height - VAR_5 - 1;
   }

   for (VAR_6 = 0; VAR_6 < VAR_3->width; VAR_6 += 2) {
    if (!FUNC_3(&VAR_10, VAR_2)) {
     return 1;
    }

    VAR_8 = (VAR_10 >> 4) & 0x0f;
    if (VAR_1->open[VAR_8]) {
     VAR_1->open[VAR_8] = 0;
    }
    FUNC_4(VAR_1, VAR_6, VAR_7, VAR_8);


    if (VAR_6 >= VAR_3->width) {
     break;
    }

    VAR_8 = VAR_10 & 0x0f;
    if (VAR_1->open[VAR_8]) {
     VAR_1->open[VAR_8] = 0;
    }
    FUNC_4(VAR_1, VAR_6 + 1, VAR_7, VAR_8);
   }

   for (VAR_6 = VAR_9; VAR_6 > 0; --VAR_6) {
    if (!FUNC_3(&VAR_8, VAR_2)) {
     return 1;
    }
   }
  }
  break;

 case 128:
  if (FUNC_1(VAR_1, VAR_2, VAR_3)) {
   return 1;
  }
  break;

 default:
  return 1;
 }
 return 0;
}
