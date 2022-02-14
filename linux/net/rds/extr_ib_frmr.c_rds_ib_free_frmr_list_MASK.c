
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_ib_mr_pool {int free_list; int drop_list; } ;
struct rds_ib_frmr {scalar_t__ fr_state; } ;
struct TYPE_2__ {struct rds_ib_frmr frmr; } ;
struct rds_ib_mr {int llnode; TYPE_1__ u; struct rds_ib_mr_pool* pool; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;

void FUNC_1(struct rds_ib_mr *VAR_1)
{
 struct rds_ib_mr_pool *VAR_2 = VAR_1->pool;
 struct rds_ib_frmr *VAR_3 = &VAR_1->u.frmr;

 if (VAR_3->fr_state == VAR_0)
  FUNC_0(&VAR_1->llnode, &VAR_2->drop_list);
 else
  FUNC_0(&VAR_1->llnode, &VAR_2->free_list);
}
