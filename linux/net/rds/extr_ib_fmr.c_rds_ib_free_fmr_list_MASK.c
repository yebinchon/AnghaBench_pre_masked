
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_maps; } ;
struct rds_ib_mr_pool {int free_list; int drop_list; TYPE_1__ fmr_attr; } ;
struct rds_ib_mr {scalar_t__ remap_count; int llnode; struct rds_ib_mr_pool* pool; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct rds_ib_mr *VAR_0)
{
 struct rds_ib_mr_pool *VAR_1 = VAR_0->pool;

 if (VAR_0->remap_count >= VAR_1->fmr_attr.max_maps)
  FUNC_0(&VAR_0->llnode, &VAR_1->drop_list);
 else
  FUNC_0(&VAR_0->llnode, &VAR_1->free_list);
}
