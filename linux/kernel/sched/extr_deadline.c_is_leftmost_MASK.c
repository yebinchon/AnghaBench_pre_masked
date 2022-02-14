
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_dl_entity {int rb_node; } ;
struct task_struct {struct sched_dl_entity dl; } ;
struct TYPE_2__ {int * rb_leftmost; } ;
struct dl_rq {TYPE_1__ root; } ;



__attribute__((used)) static inline int FUNC_0(struct task_struct *VAR_0, struct dl_rq *VAR_1)
{
 struct sched_dl_entity *VAR_2 = &VAR_0->dl;

 return VAR_1->root.rb_leftmost == &VAR_2->rb_node;
}
