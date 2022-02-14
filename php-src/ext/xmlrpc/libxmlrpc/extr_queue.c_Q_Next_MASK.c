
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* cursor; } ;
typedef TYPE_1__ queue ;
struct TYPE_5__ {void* data; int * next; } ;
typedef TYPE_2__ node ;



void *FUNC_0(queue *VAR_0)
{
   if(!VAR_0)
      return ((void*)0);

   if(!VAR_0->cursor || VAR_0->cursor->next == ((void*)0))
      return ((void*)0);

   VAR_0->cursor = (node *)VAR_0->cursor->next;

   return VAR_0->cursor->data ;
}
