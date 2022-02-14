
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (long,struct pt_regs*) ;
 long* FUNC_1 (int *,long*) ;
 int FUNC_2 (int *,long*,long*,int ) ;
 int VAR_1 ;

int FUNC_3(struct pt_regs *VAR_2)
{
 long VAR_3 = 0;
 long VAR_4 = 1;
 long *VAR_5;




 FUNC_0(VAR_3, VAR_2);

 VAR_5 = FUNC_1(&VAR_1, &VAR_3);
 if (VAR_5)
  *VAR_5 += 1;
 else
  FUNC_2(&VAR_1, &VAR_3, &VAR_4, VAR_0);
 return 0;
}
