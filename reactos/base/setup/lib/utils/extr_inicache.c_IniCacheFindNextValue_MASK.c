
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* Key; } ;
struct TYPE_4__ {int Data; int Name; struct TYPE_4__* Next; } ;
typedef int PWCHAR ;
typedef TYPE_1__* PINICACHEKEY ;
typedef TYPE_2__* PINICACHEITERATOR ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

BOOLEAN
FUNC_1(
    PINICACHEITERATOR VAR_2,
    PWCHAR *VAR_3,
    PWCHAR *VAR_4)
{
    PINICACHEKEY VAR_5;

    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
    {
        FUNC_0("Invalid parameter\n");
        return VAR_0;
    }

    VAR_5 = VAR_2->Key->Next;
    if (VAR_5 == ((void*)0))
    {
        FUNC_0("No more entries\n");
        return VAR_0;
    }

    *VAR_3 = VAR_5->Name;
    *VAR_4 = VAR_5->Data;

    VAR_2->Key = VAR_5;

    return VAR_1;
}
