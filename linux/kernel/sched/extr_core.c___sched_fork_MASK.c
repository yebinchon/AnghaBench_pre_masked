
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ on_list; scalar_t__ on_rq; int time_slice; scalar_t__ timeout; int run_list; } ;
struct TYPE_7__ {int rb_node; } ;
struct TYPE_5__ {int statistics; int * cfs_rq; int group_node; scalar_t__ vruntime; scalar_t__ nr_migrations; scalar_t__ prev_sum_exec_runtime; scalar_t__ sum_exec_runtime; scalar_t__ exec_start; scalar_t__ on_rq; } ;
struct task_struct {int * capture_control; int preempt_notifiers; TYPE_2__ rt; TYPE_3__ dl; TYPE_1__ se; scalar_t__ on_rq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (unsigned long,struct task_struct*) ;
 int FUNC_7 (int *,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_1, struct task_struct *VAR_2)
{
 VAR_2->on_rq = 0;

 VAR_2->se.on_rq = 0;
 VAR_2->se.exec_start = 0;
 VAR_2->se.sum_exec_runtime = 0;
 VAR_2->se.prev_sum_exec_runtime = 0;
 VAR_2->se.nr_migrations = 0;
 VAR_2->se.vruntime = 0;
 FUNC_1(&VAR_2->se.group_node);
 FUNC_2(&VAR_2->dl.rb_node);
 FUNC_5(&VAR_2->dl);
 FUNC_4(&VAR_2->dl);
 FUNC_3(VAR_2);

 FUNC_1(&VAR_2->rt.run_list);
 VAR_2->rt.timeout = 0;
 VAR_2->rt.time_slice = VAR_0;
 VAR_2->rt.on_rq = 0;
 VAR_2->rt.on_list = 0;
 FUNC_6(VAR_1, VAR_2);
}
