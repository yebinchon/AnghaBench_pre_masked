
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wait_queue_entry_t ;
struct TYPE_4__ {int wait; int lock; int curr_nr; int pool_data; void* (* alloc ) (int,int ) ;} ;
typedef TYPE_1__ mempool_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int *,int ) ;
 void* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 void* FUNC_12 (int,int ) ;

void *FUNC_13(mempool_t *VAR_8, gfp_t VAR_9)
{
 void *VAR_10;
 unsigned long VAR_11;
 wait_queue_entry_t VAR_12;
 gfp_t VAR_13;

 FUNC_0(VAR_9 & VAR_7);
 FUNC_6(VAR_9 & VAR_2);

 VAR_9 |= VAR_4;
 VAR_9 |= VAR_5;
 VAR_9 |= VAR_6;

 VAR_13 = VAR_9 & ~(VAR_2|VAR_3);

repeat_alloc:

 VAR_10 = VAR_8->alloc(VAR_13, VAR_8->pool_data);
 if (FUNC_5(VAR_10 != ((void*)0)))
  return VAR_10;

 FUNC_10(&VAR_8->lock, VAR_11);
 if (FUNC_5(VAR_8->curr_nr)) {
  VAR_10 = FUNC_8(VAR_8);
  FUNC_11(&VAR_8->lock, VAR_11);

  FUNC_9();




  FUNC_4(VAR_10);
  return VAR_10;
 }





 if (VAR_13 != VAR_9) {
  FUNC_11(&VAR_8->lock, VAR_11);
  VAR_13 = VAR_9;
  goto repeat_alloc;
 }


 if (!(VAR_9 & VAR_2)) {
  FUNC_11(&VAR_8->lock, VAR_11);
  return ((void*)0);
 }


 FUNC_2(&VAR_12);
 FUNC_7(&VAR_8->wait, &VAR_12, VAR_1);

 FUNC_11(&VAR_8->lock, VAR_11);





 FUNC_3(5*VAR_0);

 FUNC_1(&VAR_8->wait, &VAR_12);
 goto repeat_alloc;
}
