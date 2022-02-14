
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taprio_sched {int admin_sched; int oper_sched; } ;
struct sched_gate_list {int rcu; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,struct sched_gate_list*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct taprio_sched *VAR_1,
        struct sched_gate_list **VAR_2,
        struct sched_gate_list **VAR_3)
{
 FUNC_1(VAR_1->oper_sched, *VAR_2);
 FUNC_1(VAR_1->admin_sched, ((void*)0));

 if (*VAR_3)
  FUNC_0(&(*VAR_3)->rcu, VAR_0);

 *VAR_3 = *VAR_2;
 *VAR_2 = ((void*)0);
}
