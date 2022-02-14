
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int nextCookie; TYPE_3__ IGlobalInterfaceTable_iface; int list; } ;
typedef TYPE_1__ StdGlobalInterfaceTableImpl ;
typedef int IGlobalInterfaceTable ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (void**,TYPE_3__*,int *) ;
 int VAR_0 ;
 int FUNC_4 (char*,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int * VAR_1 ;

IGlobalInterfaceTable* FUNC_6(void)
{
  if (!VAR_1)
  {
    StdGlobalInterfaceTableImpl* VAR_2;

    VAR_2 = FUNC_1(FUNC_0(), 0, sizeof(StdGlobalInterfaceTableImpl));
    if (!VAR_2) return ((void*)0);

    VAR_2->IGlobalInterfaceTable_iface.lpVtbl = &VAR_0;
    FUNC_5(&VAR_2->list);
    VAR_2->nextCookie = 0xf100;

    if (FUNC_3((void**)&VAR_1, &VAR_2->IGlobalInterfaceTable_iface, ((void*)0)))
    {
      FUNC_2(FUNC_0(), 0, VAR_2);
    }
    else
      FUNC_4("Created the GIT at %p\n", VAR_2);
  }

  return VAR_1;
}
