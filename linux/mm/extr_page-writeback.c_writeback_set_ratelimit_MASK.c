
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_domain {unsigned long dirty_limit; } ;


 int FUNC_0 (unsigned long*,unsigned long*) ;
 struct wb_domain VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;

void FUNC_2(void)
{
 struct wb_domain *VAR_2 = &VAR_0;
 unsigned long VAR_3;
 unsigned long VAR_4;

 FUNC_0(&VAR_3, &VAR_4);
 VAR_2->dirty_limit = VAR_4;
 VAR_1 = VAR_4 / (FUNC_1() * 32);
 if (VAR_1 < 16)
  VAR_1 = 16;
}
