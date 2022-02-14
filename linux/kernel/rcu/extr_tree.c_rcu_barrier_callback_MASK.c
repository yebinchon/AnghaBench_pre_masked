
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcu_head {int dummy; } ;
struct TYPE_2__ {int barrier_sequence; int barrier_completion; int barrier_cpu_count; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_4(struct rcu_head *VAR_1)
{
 if (FUNC_1(&VAR_0.barrier_cpu_count)) {
  FUNC_3(FUNC_0("LastCB"), -1,
       VAR_0.barrier_sequence);
  FUNC_2(&VAR_0.barrier_completion);
 } else {
  FUNC_3(FUNC_0("CB"), -1, VAR_0.barrier_sequence);
 }
}
