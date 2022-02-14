
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_7__ {TYPE_1__* LastSection; TYPE_1__* FirstSection; } ;
struct TYPE_6__ {struct TYPE_6__* Prev; struct TYPE_6__* Next; int * Name; } ;
typedef scalar_t__* PWCHAR ;
typedef TYPE_1__* PINICACHESECTION ;
typedef TYPE_2__* PINICACHE ;
typedef int INICACHESECTION ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;

PINICACHESECTION
FUNC_5(
    PINICACHE VAR_2,
    PWCHAR VAR_3)
{
    PINICACHESECTION VAR_4 = ((void*)0);

    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || *VAR_3 == 0)
    {
        FUNC_0("Invalid parameter\n");
        return ((void*)0);
    }

    VAR_4 = (PINICACHESECTION)FUNC_1(VAR_1,
                                                VAR_0,
                                                sizeof(INICACHESECTION));
    if (VAR_4 == ((void*)0))
    {
        FUNC_0("RtlAllocateHeap() failed\n");
        return ((void*)0);
    }


    VAR_4->Name = (WCHAR*)FUNC_1(VAR_1,
                                            0,
                                            (FUNC_4(VAR_3) + 1) * sizeof(WCHAR));
    if (VAR_4->Name == ((void*)0))
    {
        FUNC_0("RtlAllocateHeap() failed\n");
        FUNC_2(VAR_1, 0, VAR_4);
        return ((void*)0);
    }


    FUNC_3(VAR_4->Name, VAR_3);


    if (VAR_2->FirstSection == ((void*)0))
    {
        VAR_2->FirstSection = VAR_4;
        VAR_2->LastSection = VAR_4;
    }
    else
    {
        VAR_2->LastSection->Next = VAR_4;
        VAR_4->Prev = VAR_2->LastSection;
        VAR_2->LastSection = VAR_4;
    }

    return VAR_4;
}
