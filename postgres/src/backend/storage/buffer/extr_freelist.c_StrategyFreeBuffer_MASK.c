
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ firstFreeBuffer; scalar_t__ lastFreeBuffer; int buffer_strategy_lock; } ;
struct TYPE_4__ {scalar_t__ freeNext; scalar_t__ buf_id; } ;
typedef TYPE_1__ BufferDesc ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__* VAR_1 ;

void
FUNC_2(BufferDesc *VAR_2)
{
 FUNC_0(&VAR_1->buffer_strategy_lock);





 if (VAR_2->freeNext == VAR_0)
 {
  VAR_2->freeNext = VAR_1->firstFreeBuffer;
  if (VAR_2->freeNext < 0)
   VAR_1->lastFreeBuffer = VAR_2->buf_id;
  VAR_1->firstFreeBuffer = VAR_2->buf_id;
 }

 FUNC_1(&VAR_1->buffer_strategy_lock);
}
