
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ curr_nr; scalar_t__ min_nr; int pool_data; int (* free ) (void*,int ) ;int lock; int wait; } ;
typedef TYPE_1__ mempool_t ;


 int FUNC_0 (TYPE_1__*,void*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (void*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;

void FUNC_8(void *VAR_0, mempool_t *VAR_1)
{
 unsigned long VAR_2;

 if (FUNC_6(VAR_0 == ((void*)0)))
  return;
 FUNC_2();
 if (FUNC_6(VAR_1->curr_nr < VAR_1->min_nr)) {
  FUNC_3(&VAR_1->lock, VAR_2);
  if (FUNC_1(VAR_1->curr_nr < VAR_1->min_nr)) {
   FUNC_0(VAR_1, VAR_0);
   FUNC_4(&VAR_1->lock, VAR_2);
   FUNC_7(&VAR_1->wait);
   return;
  }
  FUNC_4(&VAR_1->lock, VAR_2);
 }
 VAR_1->free(VAR_0, VAR_1->pool_data);
}
