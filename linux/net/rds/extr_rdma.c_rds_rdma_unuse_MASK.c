
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rds_sock {int rs_rdma_lock; int rs_rdma_keys; } ;
struct rds_mr {int r_trans_private; TYPE_1__* r_trans; int r_rb_node; scalar_t__ r_use_once; } ;
struct TYPE_2__ {int (* sync_mr ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct rds_mr*) ;
 int FUNC_4 (struct rds_mr*) ;
 struct rds_mr* FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int ) ;

void FUNC_9(struct rds_sock *VAR_1, u32 VAR_2, int VAR_3)
{
 struct rds_mr *VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_6(&VAR_1->rs_rdma_lock, VAR_5);
 VAR_4 = FUNC_5(&VAR_1->rs_rdma_keys, VAR_2, ((void*)0));
 if (!VAR_4) {
  FUNC_1("rds: trying to unuse MR with unknown r_key %u!\n",
    VAR_2);
  FUNC_7(&VAR_1->rs_rdma_lock, VAR_5);
  return;
 }

 if (VAR_4->r_use_once || VAR_3) {
  FUNC_2(&VAR_4->r_rb_node, &VAR_1->rs_rdma_keys);
  FUNC_0(&VAR_4->r_rb_node);
  VAR_6 = 1;
 }
 FUNC_7(&VAR_1->rs_rdma_lock, VAR_5);




 if (VAR_4->r_trans->sync_mr)
  VAR_4->r_trans->sync_mr(VAR_4->r_trans_private, VAR_0);



 if (VAR_6) {
  FUNC_3(VAR_4);
  FUNC_4(VAR_4);
 }
}
