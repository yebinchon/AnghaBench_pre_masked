
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;


 long* FUNC_0 (int *,int*) ;
 int VAR_0 ;

int FUNC_1(struct pt_regs *VAR_1)
{
 u32 VAR_2 = 1, VAR_3;
 long *VAR_4;

#pragma clang loop unroll(full)
 for (VAR_3 = 0; VAR_3 < 64; ++VAR_3)
  VAR_4 = FUNC_0(&VAR_0, &VAR_2);

 return 0;
}
