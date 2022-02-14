
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* Distance; struct TYPE_5__** Next; int * Element; } ;
struct TYPE_6__ {int MaximumLevel; scalar_t__ (* CompareRoutine ) (int *,int *) ;int NodeCount; TYPE_1__ Head; int (* FreeRoutine ) (TYPE_1__*) ;} ;
typedef int * PVOID ;
typedef TYPE_1__* PSKIPLIST_NODE ;
typedef TYPE_2__* PSKIPLIST ;
typedef scalar_t__ CHAR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;

PVOID
FUNC_3(PSKIPLIST VAR_1, PVOID VAR_2)
{
    CHAR VAR_3;
    PSKIPLIST_NODE VAR_4 = ((void*)0);
    PSKIPLIST_NODE VAR_5 = &VAR_1->Head;
    PSKIPLIST_NODE VAR_6[VAR_0];
    PVOID VAR_7;



    for (VAR_3 = VAR_1->MaximumLevel + 1; --VAR_3 >= 0;)
    {
        while (VAR_5->Next[VAR_3] && VAR_5->Next[VAR_3] != VAR_4 && VAR_1->CompareRoutine(VAR_5->Next[VAR_3]->Element, VAR_2) < 0)
            VAR_5 = VAR_5->Next[VAR_3];


        VAR_4 = VAR_5->Next[VAR_3];
        VAR_6[VAR_3] = VAR_5;
    }


    VAR_5 = VAR_5->Next[0];
    if (!VAR_5 || VAR_1->CompareRoutine(VAR_5->Element, VAR_2) != 0)
    {

        return ((void*)0);
    }



    for (VAR_3 = 0; VAR_3 <= VAR_1->MaximumLevel && VAR_6[VAR_3]->Next[VAR_3] == VAR_5; VAR_3++)
    {
        VAR_6[VAR_3]->Distance[VAR_3] += VAR_5->Distance[VAR_3] - 1;
        VAR_6[VAR_3]->Next[VAR_3] = VAR_5->Next[VAR_3];
    }


    while (VAR_3 <= VAR_1->MaximumLevel)
    {
        --VAR_6[VAR_3]->Distance[VAR_3];
        VAR_3++;
    }


    VAR_7 = VAR_5->Element;
    VAR_1->FreeRoutine(VAR_5);


    while (VAR_1->MaximumLevel > 0 && !VAR_1->Head.Next[VAR_1->MaximumLevel])
        --VAR_1->MaximumLevel;


    --VAR_1->NodeCount;
    return VAR_7;
}
