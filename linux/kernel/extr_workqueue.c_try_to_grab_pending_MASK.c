
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_pool {int lock; int id; } ;
struct work_struct {int entry; } ;
struct pool_workqueue {struct worker_pool* pool; } ;
struct delayed_work {int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct work_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct work_struct*) ;
 struct worker_pool* FUNC_4 (struct work_struct*) ;
 struct pool_workqueue* FUNC_5 (struct work_struct*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (struct work_struct*) ;
 int FUNC_11 (struct pool_workqueue*,int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct work_struct*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int*) ;
 struct delayed_work* FUNC_18 (struct work_struct*) ;
 int* FUNC_19 (struct work_struct*) ;
 scalar_t__ FUNC_20 (struct work_struct*) ;

__attribute__((used)) static int FUNC_21(struct work_struct *VAR_4, bool VAR_5,
          unsigned long *VAR_6)
{
 struct worker_pool *VAR_7;
 struct pool_workqueue *VAR_8;

 FUNC_9(*VAR_6);


 if (VAR_5) {
  struct delayed_work *VAR_9 = FUNC_18(VAR_4);






  if (FUNC_6(FUNC_2(&VAR_9->timer)))
   return 1;
 }


 if (!FUNC_17(VAR_3, FUNC_19(VAR_4)))
  return 0;

 FUNC_12();




 VAR_7 = FUNC_4(VAR_4);
 if (!VAR_7)
  goto fail;

 FUNC_15(&VAR_7->lock);
 VAR_8 = FUNC_5(VAR_4);
 if (VAR_8 && VAR_8->pool == VAR_7) {
  FUNC_1(VAR_4);
  if (*FUNC_19(VAR_4) & VAR_2)
   FUNC_10(VAR_4);

  FUNC_7(&VAR_4->entry);
  FUNC_11(VAR_8, FUNC_3(VAR_4));


  FUNC_14(VAR_4, VAR_7->id);

  FUNC_16(&VAR_7->lock);
  FUNC_13();
  return 1;
 }
 FUNC_16(&VAR_7->lock);
fail:
 FUNC_13();
 FUNC_8(*VAR_6);
 if (FUNC_20(VAR_4))
  return -VAR_1;
 FUNC_0();
 return -VAR_0;
}
