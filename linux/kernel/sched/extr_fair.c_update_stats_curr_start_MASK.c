
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int exec_start; } ;
struct cfs_rq {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cfs_rq*) ;

__attribute__((used)) static inline void
FUNC_2(struct cfs_rq *VAR_0, struct sched_entity *VAR_1)
{



 VAR_1->exec_start = FUNC_0(FUNC_1(VAR_0));
}
