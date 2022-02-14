
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* FirstField; int * Key; } ;
struct TYPE_6__ {int * Line; } ;
struct TYPE_5__ {int * Data; } ;
typedef TYPE_2__* PINFCONTEXT ;
typedef TYPE_3__* PINFCACHELINE ;
typedef int * PCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;

BOOLEAN
FUNC_0 (
    PINFCONTEXT VAR_2,
    PCHAR *VAR_3,
    PCHAR *VAR_4)
{
    PINFCACHELINE VAR_5;

    if ((VAR_2 == ((void*)0)) || (VAR_2->Line == ((void*)0)) || (VAR_4 == ((void*)0)))
    {

        return VAR_0;
    }

    VAR_5 = (PINFCACHELINE)VAR_2->Line;
    if (VAR_3 != ((void*)0))
        *VAR_3 = VAR_5->Key;

    if (VAR_4 != ((void*)0))
    {
        if (VAR_5->FirstField == ((void*)0))
        {
            *VAR_4 = ((void*)0);
        }
        else
        {
            *VAR_4 = VAR_5->FirstField->Data;
        }
    }

    return VAR_1;
}
