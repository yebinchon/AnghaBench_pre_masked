
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taprio_sched {int current_entry_lock; int admin_sched; int oper_sched; } ;
struct sched_gate_list {int dummy; } ;


 int FUNC_0 (int *) ;
 struct sched_gate_list* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct taprio_sched*,struct sched_gate_list**,struct sched_gate_list**) ;

__attribute__((used)) static void FUNC_5(struct taprio_sched *VAR_0)
{
 struct sched_gate_list *VAR_1, *VAR_2;

 FUNC_2(&VAR_0->current_entry_lock);

 VAR_1 = FUNC_1(VAR_0->oper_sched,
      FUNC_0(&VAR_0->current_entry_lock));
 VAR_2 = FUNC_1(VAR_0->admin_sched,
       FUNC_0(&VAR_0->current_entry_lock));

 FUNC_4(VAR_0, &VAR_2, &VAR_1);

 FUNC_3(&VAR_0->current_entry_lock);
}
