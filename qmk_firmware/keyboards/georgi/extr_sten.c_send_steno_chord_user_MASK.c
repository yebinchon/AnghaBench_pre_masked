
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int steno_mode_t ;


 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int* VAR_17 ;
 int FUNC_0 () ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int) ;
 int VAR_21 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_22 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_23 ;
 int FUNC_6 (char*) ;

bool FUNC_7(steno_mode_t VAR_24, uint8_t VAR_25[6]) {
 if (VAR_14 == (VAR_4 | VAR_3 | VAR_9 | VAR_10)) {

  FUNC_6("Fallback Toggle\n");

  VAR_5 = !VAR_5;

  goto out;
 }


 if (VAR_14 == (VAR_4 | VAR_3 | VAR_7 | VAR_8)) {

  FUNC_6("COMMAND Toggle\n");

  if (VAR_15 != VAR_2) {
   VAR_1 = 0;
   VAR_22 = VAR_15;
   VAR_15 = VAR_2;
  } else {
   VAR_15 = VAR_22;


   for (int VAR_26 = 0; VAR_26 < VAR_1; VAR_26++) {
    FUNC_5(VAR_0[VAR_26]);
   }
   FUNC_0();
  }

  goto out;
 }


 if (VAR_14 == (VAR_4 | VAR_3 | VAR_12 | VAR_11) && VAR_20 > 1) {

  FUNC_6("Switching to QMK\n");

  FUNC_1(1);
  goto out;
 }



 if (VAR_14 == VAR_3) {
  (VAR_15 == VAR_13) ? (VAR_15 = VAR_6) : (VAR_15 = VAR_13);
  goto out;
 }



 if (VAR_15 == VAR_6 && (VAR_14 & VAR_3)) {
  VAR_14 ^= VAR_3;
  goto steno;
 }


 if (VAR_15 == VAR_6 || (VAR_15 == VAR_2) || (VAR_14 & (VAR_3 | VAR_4))) {
  FUNC_4(0);
  goto out;
 }


 if (VAR_15 == VAR_13 && VAR_5) {
  FUNC_4(1);
  goto out;
 }

steno:

 VAR_18 = 0;
 VAR_16 = 0;
 VAR_14 = 0;
 return 1;

out:
 VAR_14 = 0;
 VAR_18 = 0;
 VAR_16 = 0;
 FUNC_0();
 VAR_23 = 0;
 for (int VAR_27 = 0; VAR_27 < 32; VAR_27++)
  VAR_17[VAR_27] = 0xFFFF;

 return 0;
}
