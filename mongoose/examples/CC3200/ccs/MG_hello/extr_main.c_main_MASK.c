
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 () ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_13 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int * VAR_14 ;
 int VAR_15 ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int *,int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;

int FUNC_16(void) {

  FUNC_6((unsigned long) &VAR_14[0]);

  FUNC_4(VAR_0);
  FUNC_5();
  FUNC_9();

  FUNC_15(VAR_17, ((void*)0), VAR_13, 0);
  FUNC_15(VAR_16, ((void*)0), VAR_13, 0);
  FUNC_12(VAR_5);
  FUNC_11(VAR_17);

  FUNC_2(VAR_5, ("Hello, world!"));



  FUNC_7(VAR_11, VAR_12);
  FUNC_8(VAR_9, VAR_10, 0);
  FUNC_3(VAR_1, 0x2, VAR_2);
  FUNC_0(VAR_3);
  FUNC_1(VAR_6);

  if (FUNC_10(8) != 0) {
    FUNC_2(VAR_4, ("Failed to create SL task"));
  }

  if (!FUNC_13(VAR_7, VAR_8, VAR_15)) {
    FUNC_2(VAR_4, ("Failed to create MG task"));
  }

  FUNC_14();

  return 0;
}
