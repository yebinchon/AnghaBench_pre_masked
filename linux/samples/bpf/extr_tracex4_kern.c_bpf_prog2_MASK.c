
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct pair {long ip; int val; } ;


 int VAR_0 ;
 int FUNC_0 (long,struct pt_regs*) ;
 long FUNC_1 (struct pt_regs*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,long*,struct pair*,int ) ;
 int VAR_1 ;

int FUNC_4(struct pt_regs *VAR_2)
{
 long VAR_3 = FUNC_1(VAR_2);
 long VAR_4 = 0;


 FUNC_0(VAR_4, VAR_2);

 struct pair VAR_5 = {
  .val = FUNC_2(),
  .ip = VAR_4,
 };

 FUNC_3(&VAR_1, &VAR_3, &VAR_5, VAR_0);
 return 0;
}
