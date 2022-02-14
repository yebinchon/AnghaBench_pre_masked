
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int dummy; } ;
struct cfs_rq {struct sched_entity* skip; struct sched_entity* next; struct sched_entity* last; } ;


 int FUNC_0 (struct sched_entity*) ;
 int FUNC_1 (struct sched_entity*) ;
 int FUNC_2 (struct sched_entity*) ;

__attribute__((used)) static void FUNC_3(struct cfs_rq *VAR_0, struct sched_entity *VAR_1)
{
 if (VAR_0->last == VAR_1)
  FUNC_0(VAR_1);

 if (VAR_0->next == VAR_1)
  FUNC_1(VAR_1);

 if (VAR_0->skip == VAR_1)
  FUNC_2(VAR_1);
}
