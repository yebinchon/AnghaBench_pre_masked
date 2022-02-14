
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rm_atomic_op {struct rds_notifier* op_notifier; scalar_t__ op_notify; scalar_t__ op_active; } ;
struct rds_sock {int rs_lock; int rs_notify_queue; } ;
struct rds_notifier {int n_status; int n_list; } ;
struct rds_message {int m_rs_lock; struct rds_sock* m_rs; int m_flags; struct rm_atomic_op atomic; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct rds_sock*) ;
 int FUNC_2 (struct rds_sock*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int ,int *) ;

void FUNC_10(struct rds_message *VAR_1, int VAR_2)
{
 struct rds_sock *VAR_3 = ((void*)0);
 struct rm_atomic_op *VAR_4;
 struct rds_notifier *VAR_5;
 unsigned long VAR_6;

 FUNC_6(&VAR_1->m_rs_lock, VAR_6);

 VAR_4 = &VAR_1->atomic;
 if (FUNC_9(VAR_0, &VAR_1->m_flags)
     && VAR_4->op_active && VAR_4->op_notify && VAR_4->op_notifier) {
  VAR_5 = VAR_4->op_notifier;
  VAR_3 = VAR_1->m_rs;
  FUNC_3(FUNC_1(VAR_3));

  VAR_5->n_status = VAR_2;
  FUNC_5(&VAR_3->rs_lock);
  FUNC_0(&VAR_5->n_list, &VAR_3->rs_notify_queue);
  FUNC_7(&VAR_3->rs_lock);

  VAR_4->op_notifier = ((void*)0);
 }

 FUNC_8(&VAR_1->m_rs_lock, VAR_6);

 if (VAR_3) {
  FUNC_2(VAR_3);
  FUNC_4(FUNC_1(VAR_3));
 }
}
