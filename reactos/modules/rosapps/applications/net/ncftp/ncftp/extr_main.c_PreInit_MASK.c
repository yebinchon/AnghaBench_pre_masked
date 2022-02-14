
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FTPSigProc ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_0 ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (int ,int *) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_21 () ;
 int FUNC_22 () ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 (int ,char*) ;
 int FUNC_25 (unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_26(void)
{
 int VAR_10;
 VAR_3 = ((FUNC_23(2) != 0) && (FUNC_22() > 1)) ? 1 : 0;
 VAR_4 = ((FUNC_23(0) != 0) && (FUNC_22() > 1)) ? 1 : 0;




 FUNC_12();
 VAR_10 = FUNC_1(&VAR_5);
 if (VAR_10 < 0) {
  (void) FUNC_20(VAR_7, "ncftp: init library error %d (%s).\n", VAR_10, FUNC_2(VAR_10));
  FUNC_19(1);
 }



 FUNC_25((unsigned int) FUNC_21());

 FUNC_8(&VAR_6);
 FUNC_0();
 FUNC_9();
 FUNC_11();
 FUNC_13(0);
 FUNC_14();
 FUNC_7();
 FUNC_6();
 FUNC_10();
 FUNC_17();
 FUNC_5();
 FUNC_3();
}
