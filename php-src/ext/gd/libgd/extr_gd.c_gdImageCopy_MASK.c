
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_9__ {int transparent; int * alpha; int * blue; int * green; int * red; scalar_t__ trueColor; } ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int,int) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

void FUNC_10 (gdImagePtr VAR_1, gdImagePtr VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;
 int VAR_15[VAR_0];

 if (VAR_1->trueColor) {





  if (VAR_2->trueColor) {
   for (VAR_11 = 0; (VAR_11 < VAR_8); VAR_11++) {
    for (VAR_10 = 0; (VAR_10 < VAR_7); VAR_10++) {
     int VAR_16 = FUNC_3 (VAR_2, VAR_5 + VAR_10, VAR_6 + VAR_11);
     if (VAR_16 != VAR_2->transparent) {
      FUNC_4 (VAR_1, VAR_3 + VAR_10, VAR_4 + VAR_11, VAR_16);
     }
    }
   }
  } else {

   for (VAR_11 = 0; (VAR_11 < VAR_8); VAR_11++) {
    for (VAR_10 = 0; (VAR_10 < VAR_7); VAR_10++) {
     int VAR_17 = FUNC_1 (VAR_2, VAR_5 + VAR_10, VAR_6 + VAR_11);
     if (VAR_17 != VAR_2->transparent) {
      FUNC_4(VAR_1, VAR_3 + VAR_10, VAR_4 + VAR_11, FUNC_5(VAR_2->red[VAR_17], VAR_2->green[VAR_17], VAR_2->blue[VAR_17], VAR_2->alpha[VAR_17]));
     }
    }
   }
  }
  return;
 }


 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  VAR_15[VAR_14] = (-1);
 }
 VAR_13 = VAR_4;
 for (VAR_11 = VAR_6; VAR_11 < (VAR_6 + VAR_8); VAR_11++) {
  VAR_12 = VAR_3;
  for (VAR_10 = VAR_5; VAR_10 < (VAR_5 + VAR_7); VAR_10++) {
   int VAR_18;
   int VAR_19;
   VAR_9 = FUNC_1 (VAR_2, VAR_10, VAR_11);

   if (FUNC_2 (VAR_2) == VAR_9) {
    VAR_12++;
    continue;
   }

   if (VAR_2->trueColor) {



    VAR_19 = FUNC_0 (VAR_1, FUNC_9 (VAR_9), FUNC_8 (VAR_9), FUNC_7 (VAR_9), FUNC_6 (VAR_9));
   } else if (VAR_15[VAR_9] == (-1)) {

    if (VAR_1 == VAR_2) {
     VAR_18 = VAR_9;
    } else {

     VAR_18 = FUNC_0 (VAR_1, VAR_2->red[VAR_9], VAR_2->green[VAR_9], VAR_2->blue[VAR_9], VAR_2->alpha[VAR_9]);
    }
    VAR_15[VAR_9] = VAR_18;
    VAR_19 = VAR_15[VAR_9];
   } else {
    VAR_19 = VAR_15[VAR_9];
   }
   FUNC_4 (VAR_1, VAR_12, VAR_13, VAR_19);
   VAR_12++;
  }
  VAR_13++;
 }
}
