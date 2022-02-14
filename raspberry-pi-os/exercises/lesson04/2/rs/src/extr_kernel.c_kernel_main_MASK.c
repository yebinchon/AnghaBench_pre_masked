
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,unsigned long,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

void FUNC_9(void) {
  FUNC_8();
  FUNC_3(0, VAR_1);
  FUNC_4();
  FUNC_7();
  FUNC_1();
  FUNC_2();

  int VAR_2 = FUNC_0((unsigned long)&VAR_0, (unsigned long)"12345", 1);
  if (VAR_2 != 0) {
    FUNC_5("error while starting process 1");
    return;
  }
  VAR_2 = FUNC_0((unsigned long)&VAR_0, (unsigned long)"abcde", 2);
  if (VAR_2 != 0) {
    FUNC_5("error while starting process 2");
    return;
  }

  while (1) {
    FUNC_6();
  }
}
