
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
struct TYPE_3__ {size_t HandleTableSize; int HandleTableLock; int * HandleTable; int * ConsoleHandle; } ;
typedef TYPE_1__* PCONSOLE_PROCESS_DATA ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static VOID
FUNC_4(PCONSOLE_PROCESS_DATA VAR_0)
{
    FUNC_2(&VAR_0->HandleTableLock);

    if (VAR_0->HandleTable != ((void*)0))
    {
        ULONG VAR_1;







        if (VAR_0->ConsoleHandle != ((void*)0))
        {

            for (VAR_1 = 0; VAR_1 < VAR_0->HandleTableSize; VAR_1++)
            {
                FUNC_0(&VAR_0->HandleTable[VAR_1]);
            }
        }

        FUNC_1(VAR_0->HandleTable);
        VAR_0->HandleTable = ((void*)0);
    }

    VAR_0->HandleTableSize = 0;

    FUNC_3(&VAR_0->HandleTableLock);
}
