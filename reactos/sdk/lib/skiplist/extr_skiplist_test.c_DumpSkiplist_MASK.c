
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* Distance; struct TYPE_4__** Next; scalar_t__ Element; } ;
struct TYPE_5__ {scalar_t__ MaximumLevel; TYPE_1__ Head; } ;
typedef TYPE_1__* PSKIPLIST_NODE ;
typedef TYPE_2__* PSKIPLIST ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef scalar_t__ CHAR ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(PSKIPLIST VAR_0)
{
    CHAR VAR_1;
    DWORD VAR_2;
    PSKIPLIST_NODE VAR_3;

    FUNC_0("======= DUMPING SKIPLIST =======\n");

    for (VAR_1 = VAR_0->MaximumLevel + 1; --VAR_1 >= 0;)
    {
        VAR_3 = &VAR_0->Head;
        FUNC_0("H");

        while (VAR_3->Next[VAR_1])
        {
            FUNC_0("-");


            for (VAR_2 = 1; VAR_2 < VAR_3->Distance[VAR_1]; VAR_2++)
                FUNC_0("---");

            FUNC_0("%02Iu", (DWORD_PTR)VAR_3->Next[VAR_1]->Element);

            VAR_3 = VAR_3->Next[VAR_1];
        }

        FUNC_0("\n");
    }

    FUNC_0("================================\n\n");
}
