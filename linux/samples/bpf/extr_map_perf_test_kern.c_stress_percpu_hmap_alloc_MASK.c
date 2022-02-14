
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 long* FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,long*,int ) ;
 int VAR_1 ;

int FUNC_4(struct pt_regs *VAR_2)
{
 u32 VAR_3 = FUNC_0();
 long VAR_4 = 1;
 long *VAR_5;

 FUNC_3(&VAR_1, &VAR_3, &VAR_4, VAR_0);
 VAR_5 = FUNC_2(&VAR_1, &VAR_3);
 if (VAR_5)
  FUNC_1(&VAR_1, &VAR_3);
 return 0;
}
