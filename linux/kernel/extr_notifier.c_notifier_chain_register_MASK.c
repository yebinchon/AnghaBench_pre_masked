
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {scalar_t__ priority; struct notifier_block* next; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct notifier_block*,struct notifier_block*) ;

__attribute__((used)) static int FUNC_2(struct notifier_block **VAR_0,
  struct notifier_block *VAR_1)
{
 while ((*VAR_0) != ((void*)0)) {
  FUNC_0(((*VAR_0) == VAR_1), "double register detected");
  if (VAR_1->priority > (*VAR_0)->priority)
   break;
  VAR_0 = &((*VAR_0)->next);
 }
 VAR_1->next = *VAR_0;
 FUNC_1(*VAR_0, VAR_1);
 return 0;
}
