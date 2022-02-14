
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcu_head {int dummy; } ;
struct rcu_data {scalar_t__ qlen_last_fqs_check; scalar_t__ n_force_qs_snap; int cblist; int blimit; int mynode; } ;
struct TYPE_2__ {scalar_t__ n_force_qs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (struct rcu_data*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,struct rcu_data*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct rcu_head* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct rcu_data *VAR_3, struct rcu_head *VAR_4,
       unsigned long VAR_5)
{




 if (!FUNC_7())
  FUNC_1();


 if (FUNC_2(VAR_5) || FUNC_0(FUNC_10()))
  return;
 if (FUNC_11(FUNC_9(&VAR_3->cblist) >
       VAR_3->qlen_last_fqs_check + VAR_1)) {


  FUNC_3(VAR_3);


  if (!FUNC_6()) {
   FUNC_4(VAR_3->mynode, VAR_3);
  } else {

   VAR_3->blimit = VAR_0;
   if (VAR_2.n_force_qs == VAR_3->n_force_qs_snap &&
       FUNC_8(&VAR_3->cblist) != VAR_4)
    FUNC_5();
   VAR_3->n_force_qs_snap = VAR_2.n_force_qs;
   VAR_3->qlen_last_fqs_check = FUNC_9(&VAR_3->cblist);
  }
 }
}
