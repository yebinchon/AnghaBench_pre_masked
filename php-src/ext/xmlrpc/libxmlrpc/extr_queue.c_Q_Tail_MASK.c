
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* cursor; TYPE_1__* tail; } ;
typedef TYPE_2__ queue ;
struct TYPE_5__ {void* data; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;

void *FUNC_1(queue *VAR_0)
{
   if(FUNC_0(VAR_0))
      return ((void*)0);

   VAR_0->cursor = VAR_0->tail;

   return VAR_0->cursor->data;
}
