
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {int Data; struct TYPE_7__* Next; } ;
struct TYPE_6__ {int FieldCount; TYPE_3__* FirstField; int Key; } ;
struct TYPE_5__ {int * Line; } ;
typedef int * PLONG ;
typedef TYPE_1__* PINFCONTEXT ;
typedef TYPE_2__* PINFCACHELINE ;
typedef TYPE_3__* PINFCACHEFIELD ;
typedef int PCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

BOOLEAN
FUNC_1 (
    PINFCONTEXT VAR_2,
    ULONG VAR_3,
    PLONG VAR_4)
{
    PINFCACHELINE VAR_5;
    PINFCACHEFIELD VAR_6;
    ULONG VAR_7;
    PCHAR VAR_8;

    if ((VAR_2 == ((void*)0)) || (VAR_2->Line == ((void*)0)) || (VAR_4 == ((void*)0)))
    {

        return VAR_0;
    }

    VAR_5 = (PINFCACHELINE)VAR_2->Line;

    if (VAR_3 > VAR_5->FieldCount)
    {

        return VAR_0;
    }

    if (VAR_3 == 0)
    {
        VAR_8 = VAR_5->Key;
    }
    else
    {
        VAR_6 = VAR_5->FirstField;
        for (VAR_7 = 1; VAR_7 < VAR_3; VAR_7++)
            VAR_6 = VAR_6->Next;

        VAR_8 = VAR_6->Data;
    }

    *VAR_4 = FUNC_0(VAR_8);

    return VAR_1;
}
