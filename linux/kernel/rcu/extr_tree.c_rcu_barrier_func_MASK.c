
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int func; } ;
struct rcu_data {TYPE_2__ barrier_head; int cblist; } ;
struct TYPE_5__ {int barrier_sequence; int barrier_cpu_count; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_0 ;
 struct rcu_data* FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int ,int,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct rcu_data*,int *,int ) ;
 int FUNC_8 (struct rcu_data*) ;
 int FUNC_9 (struct rcu_data*) ;
 scalar_t__ FUNC_10 (int *,TYPE_2__*,int ) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_11(void *VAR_4)
{
 struct rcu_data *VAR_5 = FUNC_5(&VAR_2);

 FUNC_6(FUNC_0("IRQ"), -1, VAR_3.barrier_sequence);
 VAR_5->barrier_head.func = VAR_1;
 FUNC_3(&VAR_5->barrier_head);
 FUNC_8(VAR_5);
 FUNC_1(!FUNC_7(VAR_5, ((void*)0), VAR_0));
 if (FUNC_10(&VAR_5->cblist, &VAR_5->barrier_head, 0)) {
  FUNC_2(&VAR_3.barrier_cpu_count);
 } else {
  FUNC_4(&VAR_5->barrier_head);
  FUNC_6(FUNC_0("IRQNQ"), -1,
       VAR_3.barrier_sequence);
 }
 FUNC_9(VAR_5);
}
