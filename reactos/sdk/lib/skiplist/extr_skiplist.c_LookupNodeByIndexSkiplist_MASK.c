
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* Distance; struct TYPE_5__** Next; } ;
struct TYPE_6__ {scalar_t__ NodeCount; scalar_t__ MaximumLevel; TYPE_1__ Head; } ;
typedef TYPE_1__* PSKIPLIST_NODE ;
typedef TYPE_2__* PSKIPLIST ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ CHAR ;



PSKIPLIST_NODE
FUNC_0(PSKIPLIST VAR_0, DWORD VAR_1)
{
    CHAR VAR_2;
    DWORD VAR_3 = 0;
    PSKIPLIST_NODE VAR_4 = &VAR_0->Head;


    if (VAR_1 >= VAR_0->NodeCount)
        return ((void*)0);






    for (VAR_2 = VAR_0->MaximumLevel + 1; --VAR_2 >= 0;)
    {


        while (VAR_4->Next[VAR_2] && VAR_3 + VAR_4->Distance[VAR_2] <= VAR_1)
        {
            VAR_3 += VAR_4->Distance[VAR_2];
            VAR_4 = VAR_4->Next[VAR_2];
        }
    }


    return VAR_4->Next[0];
}
