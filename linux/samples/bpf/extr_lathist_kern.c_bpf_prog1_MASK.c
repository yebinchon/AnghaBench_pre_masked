
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pt_regs {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int * FUNC_2 (int *,int*) ;
 int VAR_0 ;

int FUNC_3(struct pt_regs *VAR_1)
{
 int VAR_2 = FUNC_0();
 u64 *VAR_3 = FUNC_2(&VAR_0, &VAR_2);

 if (VAR_3)
  *VAR_3 = FUNC_1();

 return 0;
}
