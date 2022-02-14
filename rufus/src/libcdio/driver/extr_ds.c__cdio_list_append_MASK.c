
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; void* data; TYPE_1__* list; } ;
struct TYPE_6__ {scalar_t__ length; TYPE_2__* end; } ;
typedef TYPE_1__ CdioList_t ;
typedef TYPE_2__ CdioListNode_t ;


 int FUNC_0 (TYPE_1__*,void*) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;

void
FUNC_3 (CdioList_t *VAR_0, void *VAR_1)
{
  FUNC_2 (VAR_0 != ((void*)0));

  if (VAR_0->length == 0)
    {
      FUNC_0 (VAR_0, VAR_1);
    }
  else
    {
      CdioListNode_t *VAR_2 = FUNC_1 (1, sizeof (CdioListNode_t));
      FUNC_2 (VAR_2 != ((void*)0));

      VAR_2->list = VAR_0;
      VAR_2->next = ((void*)0);
      VAR_2->data = VAR_1;

      VAR_0->end->next = VAR_2;
      VAR_0->end = VAR_2;

      VAR_0->length++;
    }
}
