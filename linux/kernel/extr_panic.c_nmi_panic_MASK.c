
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (char*,char const*) ;
 int VAR_1 ;
 int FUNC_3 () ;

void FUNC_4(struct pt_regs *VAR_2, const char *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_3();
 VAR_4 = FUNC_0(&VAR_1, VAR_0, VAR_5);

 if (VAR_4 == VAR_0)
  FUNC_2("%s", VAR_3);
 else if (VAR_4 != VAR_5)
  FUNC_1(VAR_2);
}
