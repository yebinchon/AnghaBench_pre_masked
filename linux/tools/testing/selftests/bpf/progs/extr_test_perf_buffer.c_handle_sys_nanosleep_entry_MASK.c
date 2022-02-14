
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
typedef int cpu ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct pt_regs*,int *,int ,int*,int) ;
 int VAR_1 ;

int FUNC_2(struct pt_regs *VAR_2)
{
 int VAR_3 = FUNC_0();

 FUNC_1(VAR_2, &VAR_1, VAR_0,
         &VAR_3, sizeof(VAR_3));
 return 0;
}
