
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* data; struct TYPE_6__* next; TYPE_1__* list; } ;
struct TYPE_5__ {scalar_t__ length; TYPE_2__* end; TYPE_2__* begin; } ;
typedef TYPE_1__ CdioList_t ;
typedef TYPE_2__ CdioListNode_t ;


 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (CdioList_t *VAR_0, void *VAR_1)
{
  CdioListNode_t *VAR_2;

  FUNC_1 (VAR_0 != ((void*)0));

  VAR_2 = FUNC_0 (1, sizeof (CdioListNode_t));
  FUNC_1 (VAR_2 != ((void*)0));

  VAR_2->list = VAR_0;
  VAR_2->next = VAR_0->begin;
  VAR_2->data = VAR_1;

  VAR_0->begin = VAR_2;
  if (VAR_0->length == 0)
    VAR_0->end = VAR_2;

  VAR_0->length++;
}
