
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_7 ;

void FUNC_4(bool VAR_8) {

 uint32_t VAR_9 = VAR_3;


 if (VAR_7 != 0) {
  VAR_3 |= VAR_7;
  for (int VAR_10 = 0; VAR_10 <= VAR_4; VAR_10++)
   VAR_5[VAR_10] |= VAR_7;
 }


 if (VAR_3 & VAR_0) VAR_3 ^= VAR_0;



 if (VAR_8 && FUNC_0(1) == VAR_3) {
  FUNC_0(0);
  return;
 } else if (FUNC_1(1) == VAR_3) {
  FUNC_1(0);

  if (VAR_6) {
   FUNC_2();
   VAR_6 = 0;
   FUNC_4(0);
  } else {
   FUNC_3(VAR_3);
  }
  return;
 }



 uint32_t VAR_11[VAR_2];
 int VAR_12 = 0;
 uint32_t VAR_13 = 0;



 while (VAR_9 != VAR_13) {
  uint32_t VAR_14 = 0;
  uint32_t VAR_15 = 0;

  for (int VAR_16 = 0; VAR_16 <= VAR_4; VAR_16++) {
   VAR_3 = VAR_5[VAR_16] & ~VAR_13;
   if (VAR_3 == 0)
    continue;


   if (VAR_16 != 0 && VAR_14 != 0 && (VAR_3 ^ VAR_14) == VAR_1) {
    VAR_15 = VAR_14;
    break;
   }


   if (VAR_13 & VAR_1)
    VAR_3 |= VAR_1;



   if (VAR_8) {
    VAR_14 = FUNC_0(1);
   } else {
    VAR_14 = FUNC_1(1);
   }

   if (VAR_14 != 0) {
    VAR_15 = VAR_14;
   }
  }

  VAR_13 |= VAR_15;
  VAR_11[VAR_12] = VAR_15;
  VAR_12++;


  if (VAR_12 >= VAR_2) {
   return;
  }
 }


 for (int VAR_17 = 0; VAR_17 < VAR_12 ; VAR_17++) {
  VAR_3 = VAR_11[VAR_17];
  if (VAR_8) {
   FUNC_0(0);
  } else {
   FUNC_1(0);
  }
 }


 if (!VAR_6) {
  FUNC_3(VAR_9);
 }


 VAR_3 = VAR_9;

 return;
}
