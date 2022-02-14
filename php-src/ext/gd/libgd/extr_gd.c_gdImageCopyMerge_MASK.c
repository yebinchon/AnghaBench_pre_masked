
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gdImagePtr ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int,int,int) ;
 int FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int,int,int) ;

void FUNC_7 (gdImagePtr VAR_0, gdImagePtr VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;
 VAR_14 = VAR_3;

 for (VAR_12 = VAR_5; VAR_12 < (VAR_5 + VAR_7); VAR_12++) {
  VAR_13 = VAR_2;
  for (VAR_11 = VAR_4; VAR_11 < (VAR_4 + VAR_6); VAR_11++) {
   int VAR_18;
   VAR_9 = FUNC_2(VAR_1, VAR_11, VAR_12);

   if (FUNC_3(VAR_1) == VAR_9) {
    VAR_13++;
    continue;
   }

   if (VAR_0 == VAR_1) {
    VAR_18 = VAR_9;
   } else {
    VAR_10 = FUNC_2(VAR_0, VAR_13, VAR_14);

     VAR_15 = (int)(FUNC_5 (VAR_1, VAR_9) * (VAR_8 / 100.0) + FUNC_5 (VAR_0, VAR_10) * ((100 - VAR_8) / 100.0));
     VAR_16 = (int)(FUNC_4 (VAR_1, VAR_9) * (VAR_8 / 100.0) + FUNC_4 (VAR_0, VAR_10) * ((100 - VAR_8) / 100.0));
     VAR_17 = (int)(FUNC_0 (VAR_1, VAR_9) * (VAR_8 / 100.0) + FUNC_0 (VAR_0, VAR_10) * ((100 - VAR_8) / 100.0));


    VAR_18 = FUNC_1 (VAR_0, VAR_15, VAR_16, VAR_17);
   }
   FUNC_6 (VAR_0, VAR_13, VAR_14, VAR_18);
   VAR_13++;
  }
  VAR_14++;
 }
}
