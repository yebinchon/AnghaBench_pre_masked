
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct rq_flags {int dummy; } ;
struct TYPE_2__ {struct task_struct* owner; int dep_map; } ;
struct rq {TYPE_1__ lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct rq*,struct rq_flags*) ;
 int FUNC_1 (int *,int,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct rq *VAR_1, struct task_struct *VAR_2, struct rq_flags *VAR_3)
{






 FUNC_0(VAR_1, VAR_3);
 FUNC_1(&VAR_1->lock.dep_map, 1, VAR_0);




}
