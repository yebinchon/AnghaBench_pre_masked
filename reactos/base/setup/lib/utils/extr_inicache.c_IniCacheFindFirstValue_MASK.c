
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* Key; TYPE_1__* Section; } ;
struct TYPE_7__ {int Data; int Name; } ;
struct TYPE_6__ {TYPE_2__* FirstKey; } ;
typedef int PWCHAR ;
typedef TYPE_1__* PINICACHESECTION ;
typedef TYPE_2__* PINICACHEKEY ;
typedef TYPE_3__* PINICACHEITERATOR ;
typedef int INICACHEITERATOR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

PINICACHEITERATOR
FUNC_2(
    PINICACHESECTION VAR_1,
    PWCHAR *VAR_2,
    PWCHAR *VAR_3)
{
    PINICACHEITERATOR VAR_4;
    PINICACHEKEY VAR_5;

    if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
    {
        FUNC_0("Invalid parameter\n");
        return ((void*)0);
    }

    VAR_5 = VAR_1->FirstKey;
    if (VAR_5 == ((void*)0))
    {
        FUNC_0("Invalid parameter\n");
        return ((void*)0);
    }

    *VAR_2 = VAR_5->Name;
    *VAR_3 = VAR_5->Data;

    VAR_4 = (PINICACHEITERATOR)FUNC_1(VAR_0,
                                                  0,
                                                  sizeof(INICACHEITERATOR));
    if (VAR_4 == ((void*)0))
    {
        FUNC_0("RtlAllocateHeap() failed\n");
        return ((void*)0);
    }

    VAR_4->Section = VAR_1;
    VAR_4->Key = VAR_5;

    return VAR_4;
}
