
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rb_lock; } ;
struct TYPE_5__ {int mrs_recycled; } ;
struct TYPE_8__ {TYPE_3__* ri_id; } ;
struct rpcrdma_xprt {TYPE_2__ rx_buf; TYPE_1__ rx_stats; TYPE_4__ rx_ia; } ;
struct rpcrdma_mr {scalar_t__ mr_dir; int mr_all; int mr_nents; int mr_sg; } ;
struct TYPE_7__ {int device; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rpcrdma_mr*) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rpcrdma_mr*) ;
 int FUNC_6 (struct rpcrdma_mr*) ;

__attribute__((used)) static void FUNC_7(struct rpcrdma_xprt *VAR_1, struct rpcrdma_mr *VAR_2)
{
 FUNC_5(VAR_2);

 if (VAR_2->mr_dir != VAR_0) {
  FUNC_6(VAR_2);
  FUNC_1(VAR_1->rx_ia.ri_id->device,
    VAR_2->mr_sg, VAR_2->mr_nents, VAR_2->mr_dir);
  VAR_2->mr_dir = VAR_0;
 }

 FUNC_3(&VAR_1->rx_buf.rb_lock);
 FUNC_2(&VAR_2->mr_all);
 VAR_1->rx_stats.mrs_recycled++;
 FUNC_4(&VAR_1->rx_buf.rb_lock);

 FUNC_0(VAR_2);
}
