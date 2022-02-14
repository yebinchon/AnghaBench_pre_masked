
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_mr {int mr_list; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int *,struct list_head*) ;

__attribute__((used)) static inline void
FUNC_1(struct rpcrdma_mr *VAR_0, struct list_head *VAR_1)
{
 FUNC_0(&VAR_0->mr_list, VAR_1);
}
