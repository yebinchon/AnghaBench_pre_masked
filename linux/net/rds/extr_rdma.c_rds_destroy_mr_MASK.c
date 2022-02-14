
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_sock {int rs_rdma_lock; int rs_rdma_keys; } ;
struct rds_mr {int r_invalidate; TYPE_1__* r_trans; int * r_trans_private; int r_rb_node; int r_state; int r_refcount; int r_key; struct rds_sock* r_sock; } ;
struct TYPE_2__ {int (* free_mr ) (void*,int ) ;} ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (void*,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct rds_mr *VAR_1)
{
 struct rds_sock *VAR_2 = VAR_1->r_sock;
 void *VAR_3 = ((void*)0);
 unsigned long VAR_4;

 FUNC_2("RDS: destroy mr key is %x refcnt %u\n",
   VAR_1->r_key, FUNC_3(&VAR_1->r_refcount));

 if (FUNC_7(VAR_0, &VAR_1->r_state))
  return;

 FUNC_4(&VAR_2->rs_rdma_lock, VAR_4);
 if (!FUNC_0(&VAR_1->r_rb_node))
  FUNC_1(&VAR_1->r_rb_node, &VAR_2->rs_rdma_keys);
 VAR_3 = VAR_1->r_trans_private;
 VAR_1->r_trans_private = ((void*)0);
 FUNC_5(&VAR_2->rs_rdma_lock, VAR_4);

 if (VAR_3)
  VAR_1->r_trans->free_mr(VAR_3, VAR_1->r_invalidate);
}
