
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_rep {int rr_node; int rr_temp; } ;
struct rpcrdma_buffer {int rb_free_reps; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct rpcrdma_rep*) ;

__attribute__((used)) static void FUNC_2(struct rpcrdma_buffer *VAR_0,
       struct rpcrdma_rep *VAR_1)
{
 if (!VAR_1->rr_temp)
  FUNC_0(&VAR_1->rr_node, &VAR_0->rb_free_reps);
 else
  FUNC_1(VAR_1);
}
