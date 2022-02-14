
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {scalar_t__ state; int klp_alive; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct module*,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct module *VAR_3)
{
 if (FUNC_0(VAR_3->state != VAR_1 &&
      VAR_3->state != VAR_0))
  return;

 FUNC_2(&VAR_2);





 VAR_3->klp_alive = 0;

 FUNC_1(VAR_3, ((void*)0));

 FUNC_3(&VAR_2);
}
