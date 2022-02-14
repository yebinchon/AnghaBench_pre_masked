
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; TYPE_1__* list; } ;
struct TYPE_7__ {scalar_t__ length; TYPE_2__* end; TYPE_2__* begin; } ;
typedef TYPE_1__ CdioList_t ;
typedef TYPE_2__ CdioListNode_t ;
typedef int (* CdioDataFree_t ) (int ) ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;

void
FUNC_4 (CdioListNode_t *VAR_0,
                      int VAR_1, CdioDataFree_t VAR_2)
{
  CdioList_t *VAR_3;
  CdioListNode_t *VAR_4;

  FUNC_2 (VAR_0 != ((void*)0));

  VAR_3 = VAR_0->list;

  FUNC_2 (FUNC_0 (VAR_3) > 0);

  if (VAR_1 && VAR_2)
    VAR_2 (FUNC_1 (VAR_0));

  if (FUNC_0 (VAR_3) == 1)
    {
      FUNC_2 (VAR_3->begin == VAR_3->end);

      VAR_3->end = VAR_3->begin = ((void*)0);
      VAR_3->length = 0;
      FUNC_3 (VAR_0);
      return;
    }

  FUNC_2 (VAR_3->begin != VAR_3->end);

  if (VAR_3->begin == VAR_0)
    {
      VAR_3->begin = VAR_0->next;
      FUNC_3 (VAR_0);
      VAR_3->length--;
      return;
    }

  for (VAR_4 = VAR_3->begin; VAR_4->next; VAR_4 = VAR_4->next)
    if (VAR_4->next == VAR_0)
      break;

  FUNC_2 (VAR_4->next != ((void*)0));

  if (VAR_3->end == VAR_0)
    VAR_3->end = VAR_4;

  VAR_4->next = VAR_0->next;

  VAR_3->length--;

  FUNC_3 (VAR_0);
}
