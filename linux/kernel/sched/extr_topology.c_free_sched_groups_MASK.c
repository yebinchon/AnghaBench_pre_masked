
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_group {int ref; struct sched_group* sgc; struct sched_group* next; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct sched_group*) ;

__attribute__((used)) static void FUNC_2(struct sched_group *VAR_0, int VAR_1)
{
 struct sched_group *VAR_2, *VAR_3;

 if (!VAR_0)
  return;

 VAR_3 = VAR_0;
 do {
  VAR_2 = VAR_0->next;

  if (VAR_1 && FUNC_0(&VAR_0->sgc->ref))
   FUNC_1(VAR_0->sgc);

  if (FUNC_0(&VAR_0->ref))
   FUNC_1(VAR_0);
  VAR_0 = VAR_2;
 } while (VAR_0 != VAR_3);
}
