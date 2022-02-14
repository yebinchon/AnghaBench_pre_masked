
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_pages; int page_shift; int max_maps; } ;
struct rds_ib_mr_pool {int pool_type; int max_items; int max_free_pinned; int max_items_soft; int use_fastreg; TYPE_1__ fmr_attr; int flush_worker; int flush_wait; int flush_lock; int clean_lock; int clean_list; int drop_list; int free_list; } ;
struct rds_ib_device {int max_1m_mrs; int max_8k_mrs; int max_mrs; int use_fastreg; int fmr_max_remaps; } ;


 int VAR_0 ;
 struct rds_ib_mr_pool* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct rds_ib_mr_pool* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (int *) ;

struct rds_ib_mr_pool *FUNC_7(struct rds_ib_device *VAR_7,
          int VAR_8)
{
 struct rds_ib_mr_pool *VAR_9;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_9->pool_type = VAR_8;
 FUNC_2(&VAR_9->free_list);
 FUNC_2(&VAR_9->drop_list);
 FUNC_2(&VAR_9->clean_list);
 FUNC_6(&VAR_9->clean_lock);
 FUNC_5(&VAR_9->flush_lock);
 FUNC_3(&VAR_9->flush_wait);
 FUNC_1(&VAR_9->flush_worker, VAR_6);

 if (VAR_8 == VAR_3) {

  VAR_9->fmr_attr.max_pages = VAR_4 + 1;
  VAR_9->max_items = VAR_7->max_1m_mrs;
 } else {

  VAR_9->fmr_attr.max_pages = VAR_5 + 1;
  VAR_9->max_items = VAR_7->max_8k_mrs;
 }

 VAR_9->max_free_pinned = VAR_9->max_items * VAR_9->fmr_attr.max_pages / 4;
 VAR_9->fmr_attr.max_maps = VAR_7->fmr_max_remaps;
 VAR_9->fmr_attr.page_shift = VAR_2;
 VAR_9->max_items_soft = VAR_7->max_mrs * 3 / 4;
 VAR_9->use_fastreg = VAR_7->use_fastreg;

 return VAR_9;
}
