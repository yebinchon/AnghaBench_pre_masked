
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void** Distance; struct TYPE_6__** Next; int Element; } ;
struct TYPE_7__ {size_t MaximumLevel; void* NodeCount; TYPE_1__* (* AllocateRoutine ) (int) ;TYPE_1__ Head; } ;
typedef int SKIPLIST_NODE ;
typedef int PVOID ;
typedef TYPE_1__* PSKIPLIST_NODE ;
typedef TYPE_2__* PSKIPLIST ;
typedef void* DWORD ;
typedef size_t CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static BOOL
FUNC_2(PSKIPLIST VAR_2, PVOID VAR_3, PSKIPLIST_NODE* VAR_4, DWORD* VAR_5)
{
    CHAR VAR_6;
    CHAR VAR_7;
    PSKIPLIST_NODE VAR_8;


    VAR_6 = FUNC_0();


    if (VAR_6 > VAR_2->MaximumLevel)
    {



        for (VAR_7 = VAR_2->MaximumLevel + 1; VAR_7 <= VAR_6; VAR_7++)
        {
            VAR_4[VAR_7] = &VAR_2->Head;
            VAR_4[VAR_7]->Distance[VAR_7] = VAR_2->NodeCount + 1;
        }


        VAR_2->MaximumLevel = VAR_6;
    }


    VAR_8 = VAR_2->AllocateRoutine(sizeof(SKIPLIST_NODE));
    if (!VAR_8)
        return VAR_0;

    VAR_8->Element = VAR_3;


    for (VAR_7 = 0; VAR_7 <= VAR_6; VAR_7++)
    {
        VAR_8->Next[VAR_7] = VAR_4[VAR_7]->Next[VAR_7];
        VAR_4[VAR_7]->Next[VAR_7] = VAR_8;




        VAR_8->Distance[VAR_7] = VAR_5[VAR_7] + (VAR_4[VAR_7]->Distance[VAR_7] - VAR_5[0]);


        VAR_4[VAR_7]->Distance[VAR_7] = VAR_5[0] + 1 - VAR_5[VAR_7];
    }


    for (VAR_7 = VAR_6 + 1; VAR_7 <= VAR_2->MaximumLevel; VAR_7++)
        ++VAR_4[VAR_7]->Distance[VAR_7];


    ++VAR_2->NodeCount;
    return VAR_1;
}
