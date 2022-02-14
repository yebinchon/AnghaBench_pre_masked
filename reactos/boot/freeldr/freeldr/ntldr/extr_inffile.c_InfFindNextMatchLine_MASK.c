
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* Next; int * Key; } ;
struct TYPE_5__ {int * Line; int * Section; int * Inf; } ;
typedef int * PVOID ;
typedef TYPE_1__* PINFCONTEXT ;
typedef TYPE_2__* PINFCACHELINE ;
typedef scalar_t__* PCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__*) ;

BOOLEAN
FUNC_1 (
    PINFCONTEXT VAR_2,
    PCHAR VAR_3,
    PINFCONTEXT VAR_4)
{
    PINFCACHELINE VAR_5;

    if ((VAR_2 == ((void*)0)) || (VAR_4 == ((void*)0)) || (VAR_3 == ((void*)0)) || (*VAR_3 == 0))
        return VAR_0;

    if ((VAR_2->Inf == ((void*)0)) || (VAR_2->Section == ((void*)0)) || (VAR_2->Line == ((void*)0)))
        return VAR_0;

    VAR_5 = (PINFCACHELINE)VAR_2->Line;
    while (VAR_5 != ((void*)0))
    {
        if ((VAR_5->Key != ((void*)0)) && (FUNC_0(VAR_5->Key, VAR_3) == 0))
        {

            if (VAR_2 != VAR_4)
            {
                VAR_4->Inf = VAR_2->Inf;
                VAR_4->Section = VAR_2->Section;
            }
            VAR_4->Line = (PVOID)VAR_5;

            return VAR_1;
        }

        VAR_5 = VAR_5->Next;
    }

    return VAR_0;
}
