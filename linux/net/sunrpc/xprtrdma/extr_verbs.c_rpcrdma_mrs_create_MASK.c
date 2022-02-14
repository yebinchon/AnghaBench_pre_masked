
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int mrs_allocated; } ;
struct rpcrdma_ia {unsigned int ri_max_segs; } ;
struct rpcrdma_buffer {int rb_lock; int rb_all_mrs; int rb_mrs; } ;
struct rpcrdma_xprt {TYPE_1__ rx_stats; struct rpcrdma_ia rx_ia; struct rpcrdma_buffer rx_buf; } ;
struct rpcrdma_mr {int mr_all; int mr_list; struct rpcrdma_xprt* mr_xprt; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpcrdma_ia*,struct rpcrdma_mr*) ;
 int FUNC_1 (struct rpcrdma_mr*) ;
 struct rpcrdma_mr* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rpcrdma_xprt*,unsigned int) ;

__attribute__((used)) static void
FUNC_7(struct rpcrdma_xprt *VAR_1)
{
 struct rpcrdma_buffer *VAR_2 = &VAR_1->rx_buf;
 struct rpcrdma_ia *VAR_3 = &VAR_1->rx_ia;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->ri_max_segs; VAR_4++) {
  struct rpcrdma_mr *VAR_5;
  int VAR_6;

  VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
  if (!VAR_5)
   break;

  VAR_6 = FUNC_0(VAR_3, VAR_5);
  if (VAR_6) {
   FUNC_1(VAR_5);
   break;
  }

  VAR_5->mr_xprt = VAR_1;

  FUNC_4(&VAR_2->rb_lock);
  FUNC_3(&VAR_5->mr_list, &VAR_2->rb_mrs);
  FUNC_3(&VAR_5->mr_all, &VAR_2->rb_all_mrs);
  FUNC_5(&VAR_2->rb_lock);
 }

 VAR_1->rx_stats.mrs_allocated += VAR_4;
 FUNC_6(VAR_1, VAR_4);
}
