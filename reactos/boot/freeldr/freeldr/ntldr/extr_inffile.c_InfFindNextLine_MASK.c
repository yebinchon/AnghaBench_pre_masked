
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * Next; } ;
struct TYPE_5__ {int * Line; int Section; int Inf; } ;
typedef int * PVOID ;
typedef TYPE_1__* PINFCONTEXT ;
typedef TYPE_2__* PINFCACHELINE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;

BOOLEAN
FUNC_0 (
    PINFCONTEXT VAR_2,
    PINFCONTEXT VAR_3)
{
    PINFCACHELINE VAR_4;

    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)))
        return VAR_0;

    if (VAR_2->Line == ((void*)0))
        return VAR_0;

    VAR_4 = (PINFCACHELINE)VAR_2->Line;
    if (VAR_4->Next == ((void*)0))
        return VAR_0;

    if (VAR_2 != VAR_3)
    {
        VAR_3->Inf = VAR_2->Inf;
        VAR_3->Section = VAR_2->Section;
    }
    VAR_3->Line = (PVOID)(VAR_4->Next);

    return VAR_1;
}
