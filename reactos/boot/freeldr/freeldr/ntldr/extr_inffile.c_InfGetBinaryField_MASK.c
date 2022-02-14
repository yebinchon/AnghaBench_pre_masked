
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
typedef scalar_t__ UCHAR ;
struct TYPE_7__ {struct TYPE_7__* Next; int Data; } ;
struct TYPE_6__ {scalar_t__ FieldCount; TYPE_3__* FirstField; } ;
struct TYPE_5__ {int * Line; } ;
typedef scalar_t__* PULONG ;
typedef scalar_t__* PUCHAR ;
typedef TYPE_1__* PINFCONTEXT ;
typedef TYPE_2__* PINFCACHELINE ;
typedef TYPE_3__* PINFCACHEFIELD ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

BOOLEAN
FUNC_1 (
    PINFCONTEXT VAR_2,
    ULONG VAR_3,
    PUCHAR VAR_4,
    ULONG VAR_5,
    PULONG VAR_6)
{
    PINFCACHELINE VAR_7;
    PINFCACHEFIELD VAR_8;
    ULONG VAR_9;
    ULONG VAR_10;
    PUCHAR VAR_11;

    if ((VAR_2 == ((void*)0)) || (VAR_2->Line == ((void*)0)) || (VAR_3 == 0))
    {

        return VAR_0;
    }

    if (VAR_6 != ((void*)0))
        *VAR_6 = 0;

    VAR_7 = (PINFCACHELINE)VAR_2->Line;

    if (VAR_3 > VAR_7->FieldCount)
        return VAR_0;

    VAR_8 = VAR_7->FirstField;
    for (VAR_9 = 1; VAR_9 < VAR_3; VAR_9++)
        VAR_8 = VAR_8->Next;

    VAR_10 = VAR_7->FieldCount - VAR_3 + 1;

    if (VAR_6 != ((void*)0))
        *VAR_6 = VAR_10;

    if (VAR_4 != ((void*)0))
    {
        if (VAR_5 < VAR_10)
            return VAR_0;


        VAR_11 = VAR_4;
        while (VAR_8 != ((void*)0))
        {
            *VAR_11 = (UCHAR)FUNC_0(VAR_8->Data);

            VAR_11++;
            VAR_8 = VAR_8->Next;
        }
    }

    return VAR_1;
}
