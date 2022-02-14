
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int min_nr; int curr_nr; void* pool_data; void* (* alloc ) (int ,void*) ;int elements; int wait; int * free; int lock; } ;
typedef TYPE_1__ mempool_t ;
typedef int mempool_free_t ;
typedef void* (* mempool_alloc_t ) (int ,void*) ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int ,void*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(mempool_t *VAR_1, int VAR_2, mempool_alloc_t *VAR_3,
        mempool_free_t *VAR_4, void *VAR_5,
        gfp_t VAR_6, int VAR_7)
{
 FUNC_4(&VAR_1->lock);
 VAR_1->min_nr = VAR_2;
 VAR_1->pool_data = VAR_5;
 VAR_1->alloc = *VAR_3;
 VAR_1->free = VAR_4;
 FUNC_1(&VAR_1->wait);

 VAR_1->elements = FUNC_2(VAR_2, sizeof(void *),
         VAR_6, VAR_7);
 if (!VAR_1->elements)
  return -VAR_0;




 while (VAR_1->curr_nr < VAR_1->min_nr) {
  void *VAR_8;

  VAR_8 = VAR_1->alloc(VAR_6, VAR_1->pool_data);
  if (FUNC_6(!VAR_8)) {
   FUNC_3(VAR_1);
   return -VAR_0;
  }
  FUNC_0(VAR_1, VAR_8);
 }

 return 0;
}
