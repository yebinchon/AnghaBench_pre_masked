
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {int dep_map; } ;
struct rcu_synchronize {int head; int completion; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct srcu_struct*,int *,int ,int) ;
 int FUNC_2 (struct srcu_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_10(struct srcu_struct *VAR_6, bool VAR_7)
{
 struct rcu_synchronize VAR_8;

 FUNC_0(FUNC_6(&VAR_6->dep_map) ||
    FUNC_6(&VAR_1) ||
    FUNC_6(&VAR_2) ||
    FUNC_6(&VAR_3),
    "Illegal synchronize_srcu() in same-type SRCU (or in RCU) read-side critical section");

 if (VAR_4 == VAR_0)
  return;
 FUNC_7();
 FUNC_2(VAR_6);
 FUNC_4(&VAR_8.completion);
 FUNC_5(&VAR_8.head);
 FUNC_1(VAR_6, &VAR_8.head, VAR_5, VAR_7);
 FUNC_9(&VAR_8.completion);
 FUNC_3(&VAR_8.head);
 FUNC_8();
}
