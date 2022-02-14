
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,unsigned long,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 () ;

void FUNC_9(void)
{
 FUNC_8();
 FUNC_4(0, VAR_2);
 FUNC_5();
 FUNC_3();
 FUNC_1();
 FUNC_2();

 int VAR_3 = FUNC_0(VAR_0, (unsigned long)&VAR_1, 0, 0);
 if (VAR_3 < 0) {
  FUNC_6("error while starting kernel process");
  return;
 }

 while (1){
  FUNC_7();
 }
}
