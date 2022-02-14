
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
typedef int ULONG ;
struct TYPE_7__ {TYPE_1__* LastSection; TYPE_1__* FirstSection; } ;
struct TYPE_6__ {struct TYPE_6__* Prev; struct TYPE_6__* Next; scalar_t__* Name; } ;
typedef TYPE_1__* PINICACHESECTION ;
typedef TYPE_2__* PINICACHE ;
typedef int * PCHAR ;
typedef int INICACHESECTION ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static
PINICACHESECTION
FUNC_3(
    PINICACHE VAR_2,
    PCHAR VAR_3,
    ULONG VAR_4)
{
    PINICACHESECTION VAR_5 = ((void*)0);
    ULONG VAR_6;

    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == 0)
    {
        FUNC_0("Invalid parameter\n");
        return ((void*)0);
    }

    VAR_5 = (PINICACHESECTION)FUNC_1(VAR_1,
                                                VAR_0,
                                                sizeof(INICACHESECTION));
    if (VAR_5 == ((void*)0))
    {
        FUNC_0("RtlAllocateHeap() failed\n");
        return ((void*)0);
    }


    VAR_5->Name = (WCHAR*)FUNC_1(VAR_1,
                                            0,
                                            (VAR_4 + 1) * sizeof(WCHAR));
    if (VAR_5->Name == ((void*)0))
    {
        FUNC_0("RtlAllocateHeap() failed\n");
        FUNC_2(VAR_1, 0, VAR_5);
        return ((void*)0);
    }


    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    {
        VAR_5->Name[VAR_6] = (WCHAR)VAR_3[VAR_6];
    }
    VAR_5->Name[VAR_4] = 0;


    if (VAR_2->FirstSection == ((void*)0))
    {
        VAR_2->FirstSection = VAR_5;
        VAR_2->LastSection = VAR_5;
    }
    else
    {
        VAR_2->LastSection->Next = VAR_5;
        VAR_5->Prev = VAR_2->LastSection;
        VAR_2->LastSection = VAR_5;
    }

    return VAR_5;
}
