
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 double VAR_3 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_6)
  FUNC_1(&VAR_8, ((void*)0));

 if (VAR_5)
  VAR_3 += 0.1;






 if (VAR_7)
  VAR_2 = VAR_0 + VAR_1;

 asm volatile("# %0 %1 %2": : "r"(&VAR_8), "r"(&VAR_3), "r"(&VAR_2));
}
