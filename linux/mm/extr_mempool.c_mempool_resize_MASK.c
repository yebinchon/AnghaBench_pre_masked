
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int min_nr; int curr_nr; void** elements; int lock; int pool_data; int (* free ) (void*,int ) ;void* (* alloc ) (int ,int ) ;} ;
typedef TYPE_1__ mempool_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (void**) ;
 void** FUNC_3 (int,int,int ) ;
 int FUNC_4 (void**,void**,int) ;
 int FUNC_5 () ;
 void* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (void*,int ) ;
 void* FUNC_10 (int ,int ) ;
 int FUNC_11 (void*,int ) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(mempool_t *VAR_2, int VAR_3)
{
 void *VAR_4;
 void **VAR_5;
 unsigned long VAR_6;

 FUNC_0(VAR_3 <= 0);
 FUNC_5();

 FUNC_7(&VAR_2->lock, VAR_6);
 if (VAR_3 <= VAR_2->min_nr) {
  while (VAR_3 < VAR_2->curr_nr) {
   VAR_4 = FUNC_6(VAR_2);
   FUNC_8(&VAR_2->lock, VAR_6);
   VAR_2->free(VAR_4, VAR_2->pool_data);
   FUNC_7(&VAR_2->lock, VAR_6);
  }
  VAR_2->min_nr = VAR_3;
  goto out_unlock;
 }
 FUNC_8(&VAR_2->lock, VAR_6);


 VAR_5 = FUNC_3(VAR_3, sizeof(*VAR_5),
         VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_7(&VAR_2->lock, VAR_6);
 if (FUNC_12(VAR_3 <= VAR_2->min_nr)) {

  FUNC_8(&VAR_2->lock, VAR_6);
  FUNC_2(VAR_5);
  goto out;
 }
 FUNC_4(VAR_5, VAR_2->elements,
   VAR_2->curr_nr * sizeof(*VAR_5));
 FUNC_2(VAR_2->elements);
 VAR_2->elements = VAR_5;
 VAR_2->min_nr = VAR_3;

 while (VAR_2->curr_nr < VAR_2->min_nr) {
  FUNC_8(&VAR_2->lock, VAR_6);
  VAR_4 = VAR_2->alloc(VAR_1, VAR_2->pool_data);
  if (!VAR_4)
   goto out;
  FUNC_7(&VAR_2->lock, VAR_6);
  if (VAR_2->curr_nr < VAR_2->min_nr) {
   FUNC_1(VAR_2, VAR_4);
  } else {
   FUNC_8(&VAR_2->lock, VAR_6);
   VAR_2->free(VAR_4, VAR_2->pool_data);
   goto out;
  }
 }
out_unlock:
 FUNC_8(&VAR_2->lock, VAR_6);
out:
 return 0;
}
