
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_mr_pool {int max_free_pinned; int max_items; int flush_worker; int dirty_count; int free_pinned; } ;
struct rds_ib_mr {int sg_len; struct rds_ib_device* device; struct rds_ib_mr_pool* pool; } ;
struct rds_ib_device {scalar_t__ use_fastreg; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (struct rds_ib_device*) ;
 int FUNC_7 (struct rds_ib_mr_pool*,int ,int *) ;
 int FUNC_8 (struct rds_ib_mr*) ;
 int FUNC_9 (struct rds_ib_mr*) ;
 int VAR_0 ;
 int FUNC_10 (char*,int ) ;

void FUNC_11(void *VAR_1, int VAR_2)
{
 struct rds_ib_mr *VAR_3 = VAR_1;
 struct rds_ib_mr_pool *VAR_4 = VAR_3->pool;
 struct rds_ib_device *VAR_5 = VAR_3->device;

 FUNC_10("RDS/IB: free_mr nents %u\n", VAR_3->sg_len);


 if (VAR_5->use_fastreg)
  FUNC_9(VAR_3);
 else
  FUNC_8(VAR_3);

 FUNC_0(VAR_3->sg_len, &VAR_4->free_pinned);
 FUNC_1(&VAR_4->dirty_count);


 if (FUNC_2(&VAR_4->free_pinned) >= VAR_4->max_free_pinned ||
     FUNC_2(&VAR_4->dirty_count) >= VAR_4->max_items / 5)
  FUNC_5(VAR_0, &VAR_4->flush_worker, 10);

 if (VAR_2) {
  if (FUNC_4(!FUNC_3())) {
   FUNC_7(VAR_4, 0, ((void*)0));
  } else {



   FUNC_5(VAR_0,
        &VAR_4->flush_worker, 10);
  }
 }

 FUNC_6(VAR_5);
}
