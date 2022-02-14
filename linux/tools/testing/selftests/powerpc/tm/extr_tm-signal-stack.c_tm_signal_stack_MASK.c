
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;

int FUNC_6()
{
 int VAR_3;

 FUNC_0(!FUNC_3());

 VAR_3 = FUNC_2();
 if (VAR_3 < 0)
  FUNC_1(1);

 if (VAR_3) {




  FUNC_5(((void*)0));
  return 0;
 }
 if (FUNC_4(VAR_0, VAR_2) == VAR_1)
  FUNC_1(1);
 asm volatile("li 1, 0 ;"
       "1:"
       "tbegin.;"
       "beq 1b ;"
       "tsuspend.;"
       "ld 2, 0(1) ;"
       : : : "memory");


 return 1;
}
