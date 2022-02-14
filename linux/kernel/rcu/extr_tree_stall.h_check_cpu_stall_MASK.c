
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcu_node {int qsmask; } ;
struct rcu_data {unsigned long grpmask; struct rcu_node* mynode; } ;
struct TYPE_2__ {int jiffies_stall; int gp_seq; int gp_start; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 unsigned long FUNC_3 (int *,unsigned long,unsigned long) ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_5 ;
 int FUNC_9 () ;
 TYPE_1__ VAR_6 ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct rcu_data *VAR_7)
{
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;
 struct rcu_node *VAR_14;

 if ((VAR_4 && !VAR_5) ||
     !FUNC_7())
  return;
 FUNC_9();
 VAR_11 = VAR_2;
 VAR_8 = FUNC_0(VAR_6.gp_seq);
 FUNC_10();
 VAR_13 = FUNC_0(VAR_6.jiffies_stall);
 FUNC_10();
 VAR_10 = FUNC_0(VAR_6.gp_start);
 FUNC_10();
 VAR_9 = FUNC_0(VAR_6.gp_seq);
 if (VAR_8 != VAR_9 ||
     FUNC_2(VAR_11, VAR_13) ||
     FUNC_1(VAR_10, VAR_13))
  return;
 VAR_14 = VAR_7->mynode;
 VAR_12 = VAR_2 + 3 * FUNC_8() + 3;
 if (FUNC_7() &&
     (FUNC_0(VAR_14->qsmask) & VAR_7->grpmask) &&
     FUNC_3(&VAR_6.jiffies_stall, VAR_13, VAR_12) == VAR_13) {


  FUNC_4();
  if (VAR_3)
   FUNC_6(VAR_0);

 } else if (FUNC_7() &&
     FUNC_1(VAR_11, VAR_13 + VAR_1) &&
     FUNC_3(&VAR_6.jiffies_stall, VAR_13, VAR_12) == VAR_13) {


  FUNC_5(VAR_9);
  if (VAR_3)
   FUNC_6(VAR_0);
 }
}
