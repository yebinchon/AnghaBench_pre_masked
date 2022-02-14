
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_13__ {scalar_t__ trueColor; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int,int,int) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_0 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int,int) ;

void FUNC_16 (gdImagePtr VAR_1, gdImagePtr VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18[VAR_0];

 int *VAR_19, *VAR_20;

 if (FUNC_15(sizeof(int), VAR_9)) {
  return;
 }
 if (FUNC_15(sizeof(int), VAR_10)) {
  return;
 }

 VAR_19 = (int *) FUNC_10 (sizeof (int) * VAR_9);
 VAR_20 = (int *) FUNC_10 (sizeof (int) * VAR_10);


 for (VAR_17 = 0; (VAR_17 < VAR_9); VAR_17++) {
  VAR_19[VAR_17] = VAR_7 * (VAR_17+1) / VAR_9 - VAR_7 * VAR_17 / VAR_9 ;
 }
 for (VAR_17 = 0; (VAR_17 < VAR_10); VAR_17++) {
  VAR_20[VAR_17] = VAR_8 * (VAR_17+1) / VAR_10 - VAR_8 * VAR_17 / VAR_10 ;
 }
 for (VAR_17 = 0; (VAR_17 < VAR_0); VAR_17++) {
  VAR_18[VAR_17] = (-1);
 }
 VAR_15 = VAR_4;
 for (VAR_13 = VAR_6; (VAR_13 < (VAR_6 + VAR_10)); VAR_13++) {
  for (VAR_16 = 0; (VAR_16 < VAR_20[VAR_13 - VAR_6]); VAR_16++) {
   VAR_14 = VAR_3;
   for (VAR_12 = VAR_5; (VAR_12 < (VAR_5 + VAR_9)); VAR_12++) {
    int VAR_21 = 0;
    int VAR_22;
    if (!VAR_19[VAR_12 - VAR_5]) {
     continue;
    }
    if (VAR_1->trueColor) {

     if (!VAR_2->trueColor) {
        int VAR_23 = FUNC_4 (VAR_2, VAR_12, VAR_13);
        VAR_22 = FUNC_6 (VAR_2, VAR_12, VAR_13);
        if (FUNC_5 (VAR_2) == VAR_23) {

       VAR_14 += VAR_19[VAR_12 - VAR_5];
         continue;
        }
     } else {

        VAR_22 = FUNC_6 (VAR_2, VAR_12, VAR_13);

      if (FUNC_5 (VAR_2) == VAR_22) {

       VAR_14 += VAR_19[VAR_12 - VAR_5];
       continue;
      }
     }
    } else {
     VAR_11 = FUNC_4 (VAR_2, VAR_12, VAR_13);

     if (FUNC_5 (VAR_2) == VAR_11) {
           VAR_14 += VAR_19[VAR_12 - VAR_5];
           continue;
     }
     if (VAR_2->trueColor) {

           VAR_22 = FUNC_3(VAR_1, FUNC_14(VAR_11),
                    FUNC_13(VAR_11),
                    FUNC_12(VAR_11),
                    FUNC_11 (VAR_11));
     } else {

      if (VAR_18[VAR_11] == (-1)) {

       if (VAR_1 == VAR_2) {
        VAR_21 = VAR_11;
       } else {


        VAR_21 = FUNC_3(VAR_1, FUNC_8(VAR_2, VAR_11),
               FUNC_7(VAR_2, VAR_11),
               FUNC_2(VAR_2, VAR_11),
               FUNC_1(VAR_2, VAR_11));
       }
       VAR_18[VAR_11] = VAR_21;
      }
      VAR_22 = VAR_18[VAR_11];
     }
    }
    for (VAR_17 = 0; (VAR_17 < VAR_19[VAR_12 - VAR_5]); VAR_17++) {
     FUNC_9 (VAR_1, VAR_14, VAR_15, VAR_22);
     VAR_14++;
    }
   }
   VAR_15++;
  }
 }
 FUNC_0 (VAR_19);
 FUNC_0 (VAR_20);
}
