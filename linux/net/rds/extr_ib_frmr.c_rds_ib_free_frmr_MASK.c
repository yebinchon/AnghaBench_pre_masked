
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_mr_pool {int max_free_pinned; int max_items; int flush_worker; int dirty_count; int free_pinned; int free_list; int drop_list; } ;
struct rds_ib_mr {int sg_len; int llnode; struct rds_ib_mr_pool* pool; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct rds_ib_mr *VAR_1, bool VAR_2)
{
 struct rds_ib_mr_pool *VAR_3 = VAR_1->pool;

 if (VAR_2)
  FUNC_3(&VAR_1->llnode, &VAR_3->drop_list);
 else
  FUNC_3(&VAR_1->llnode, &VAR_3->free_list);
 FUNC_0(VAR_1->sg_len, &VAR_3->free_pinned);
 FUNC_1(&VAR_3->dirty_count);


 if (FUNC_2(&VAR_3->free_pinned) >= VAR_3->max_free_pinned ||
     FUNC_2(&VAR_3->dirty_count) >= VAR_3->max_items / 5)
  FUNC_4(VAR_0, &VAR_3->flush_worker, 10);
}
