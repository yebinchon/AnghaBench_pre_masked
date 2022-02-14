
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_mr_pool {int free_pinned; } ;
struct rds_ib_mr {unsigned int sg_len; struct rds_ib_mr_pool* pool; } ;


 int FUNC_0 (struct rds_ib_mr*) ;
 int FUNC_1 (unsigned int,int *) ;

void FUNC_2(struct rds_ib_mr *VAR_0)
{
 unsigned int VAR_1 = VAR_0->sg_len;

 FUNC_0(VAR_0);
 if (VAR_1) {
  struct rds_ib_mr_pool *VAR_2 = VAR_0->pool;

  FUNC_1(VAR_1, &VAR_2->free_pinned);
 }
}
