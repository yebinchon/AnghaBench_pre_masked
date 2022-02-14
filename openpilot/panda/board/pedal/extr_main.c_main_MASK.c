
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* init ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int,int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 () ;
 int FUNC_16 () ;

int FUNC_17(void) {
  FUNC_6();


  FUNC_2();
  FUNC_11();
  FUNC_5();
  FUNC_4();


  VAR_3->init();







  FUNC_3();
  FUNC_1();


  bool VAR_4 = FUNC_9(VAR_0, 5000, 0, 0);
  if (!VAR_4) {
    FUNC_12("Failed to set llcan speed");
  }

  FUNC_8(VAR_0);


  FUNC_14(VAR_1, 15);
  FUNC_0(VAR_2);

  FUNC_16();

  FUNC_12("**** INTERRUPTS ON ****\n");
  FUNC_7();


  while (1) {
    FUNC_10();
  }

  return 0;
}
