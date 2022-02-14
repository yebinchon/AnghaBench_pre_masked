
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * Element; struct TYPE_4__** Next; scalar_t__* Distance; } ;
struct TYPE_5__ {scalar_t__ MaximumLevel; scalar_t__ (* CompareRoutine ) (int *,int *) ;TYPE_1__ Head; } ;
typedef int * PVOID ;
typedef TYPE_1__* PSKIPLIST_NODE ;
typedef TYPE_2__* PSKIPLIST ;
typedef int * PDWORD ;
typedef int DWORD ;
typedef scalar_t__ CHAR ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

PVOID
FUNC_2(PSKIPLIST VAR_0, PVOID VAR_1, PDWORD VAR_2)
{
    CHAR VAR_3;
    DWORD VAR_4 = 0;
    PSKIPLIST_NODE VAR_5 = ((void*)0);
    PSKIPLIST_NODE VAR_6 = &VAR_0->Head;






    for (VAR_3 = VAR_0->MaximumLevel + 1; --VAR_3 >= 0;)
    {
        while (VAR_6->Next[VAR_3] && VAR_6->Next[VAR_3] != VAR_5 && VAR_0->CompareRoutine(VAR_6->Next[VAR_3]->Element, VAR_1) < 0)
        {
            VAR_4 += VAR_6->Distance[VAR_3];
            VAR_6 = VAR_6->Next[VAR_3];
        }


        VAR_5 = VAR_6->Next[VAR_3];
    }


    VAR_6 = VAR_6->Next[0];
    if (!VAR_6 || VAR_0->CompareRoutine(VAR_6->Element, VAR_1) != 0)
    {

        return ((void*)0);
    }


    if (VAR_2)
        *VAR_2 = VAR_4;


    return VAR_6->Element;
}
