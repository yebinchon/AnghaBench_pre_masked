
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int* VAR_11 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(uint8_t VAR_12)
{
 int VAR_13;
 uint8_t VAR_14, VAR_15;




 if (VAR_12 <= 13) {
  VAR_14 = VAR_12;
 } else if (VAR_12 <= 23) {
  VAR_14 = VAR_12 - 14;




 } else if (VAR_12 >= 34 && VAR_12 <= 40) {
  VAR_14 = VAR_12 - 24;

 } else {
  return 0;
 }




 VAR_15 = VAR_11[VAR_14];





 if (VAR_10) FUNC_2();






 FUNC_0();
startADC0:

 VAR_1 = VAR_15;
 VAR_7 = 1;
 FUNC_1();
 while (1) {
  FUNC_0();
  if ((VAR_1 & VAR_6)) {
   VAR_13 = VAR_0;
   VAR_7 = 0;
   FUNC_1();
   VAR_13 >>= VAR_9;
   return VAR_13;
  }



  if (!VAR_7) goto startADC0;
  FUNC_1();
  FUNC_3();
 }
}
