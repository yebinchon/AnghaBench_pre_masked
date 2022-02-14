
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rds_sock {int dummy; } ;
struct TYPE_6__ {scalar_t__ op_rdma_mr; scalar_t__ op_active; } ;
struct TYPE_5__ {scalar_t__ op_rdma_mr; scalar_t__ op_active; } ;
struct TYPE_4__ {unsigned long op_nents; int * op_sg; int * op_mmp_znotifier; } ;
struct rds_message {TYPE_3__ atomic; TYPE_2__ rdma; TYPE_1__ data; int m_rs_lock; struct rds_sock* m_rs; int m_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct rds_sock*,int *) ;
 int FUNC_6 (struct rds_sock*) ;
 int FUNC_7 (struct rds_sock*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct rds_message *VAR_1)
{
 unsigned long VAR_2, VAR_3;
 bool VAR_4 = 0;

 if (FUNC_13(FUNC_12(VAR_0, &VAR_1->m_flags)))
  return;

 FUNC_10(&VAR_1->m_rs_lock, VAR_3);
 if (VAR_1->m_rs) {
  struct rds_sock *VAR_5 = VAR_1->m_rs;

  if (VAR_1->data.op_mmp_znotifier) {
   VAR_4 = 1;
   FUNC_5(VAR_5, VAR_1->data.op_mmp_znotifier);
   FUNC_7(VAR_5);
   VAR_1->data.op_mmp_znotifier = ((void*)0);
  }
  FUNC_9(FUNC_6(VAR_5));
  VAR_1->m_rs = ((void*)0);
 }
 FUNC_11(&VAR_1->m_rs_lock, VAR_3);

 for (VAR_2 = 0; VAR_2 < VAR_1->data.op_nents; VAR_2++) {

  if (!VAR_4)
   FUNC_0(FUNC_8(&VAR_1->data.op_sg[VAR_2]));
  else
   FUNC_1(FUNC_8(&VAR_1->data.op_sg[VAR_2]));
 }
 VAR_1->data.op_nents = 0;

 if (VAR_1->rdma.op_active)
  FUNC_4(&VAR_1->rdma);
 if (VAR_1->rdma.op_rdma_mr)
  FUNC_3(VAR_1->rdma.op_rdma_mr);

 if (VAR_1->atomic.op_active)
  FUNC_2(&VAR_1->atomic);
 if (VAR_1->atomic.op_rdma_mr)
  FUNC_3(VAR_1->atomic.op_rdma_mr);
}
