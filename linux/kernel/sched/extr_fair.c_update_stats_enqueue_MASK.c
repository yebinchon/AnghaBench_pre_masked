
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int dummy; } ;
struct cfs_rq {struct sched_entity* curr; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_2 (struct cfs_rq*,struct sched_entity*) ;

__attribute__((used)) static inline void
FUNC_3(struct cfs_rq *VAR_1, struct sched_entity *VAR_2, int VAR_3)
{
 if (!FUNC_0())
  return;





 if (VAR_2 != VAR_1->curr)
  FUNC_2(VAR_1, VAR_2);

 if (VAR_3 & VAR_0)
  FUNC_1(VAR_1, VAR_2);
}
