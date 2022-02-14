
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* Next; struct TYPE_9__* Prev; struct TYPE_9__* Data; struct TYPE_9__* Name; } ;
typedef TYPE_1__ WCHAR ;
struct TYPE_10__ {TYPE_1__* LastKey; TYPE_1__* FirstKey; } ;
typedef scalar_t__* PWCHAR ;
typedef TYPE_2__* PINICACHESECTION ;
typedef TYPE_1__* PINICACHEKEY ;
typedef scalar_t__ INSERTION_TYPE ;
typedef int INICACHEKEY ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;

PINICACHEKEY
FUNC_5(
    PINICACHESECTION VAR_6,
    PINICACHEKEY VAR_7,
    INSERTION_TYPE VAR_8,
    PWCHAR VAR_9,
    PWCHAR VAR_10)
{
    PINICACHEKEY VAR_11;

    VAR_11 = ((void*)0);

    if (VAR_6 == ((void*)0) ||
        VAR_9 == ((void*)0) ||
        *VAR_9 == 0 ||
        VAR_10 == ((void*)0) ||
        *VAR_10 == 0)
    {
        FUNC_0("Invalid parameter\n");
        return ((void*)0);
    }


    VAR_11 = (PINICACHEKEY)FUNC_1(VAR_5,
                                        VAR_0,
                                        sizeof(INICACHEKEY));
    if (VAR_11 == ((void*)0))
    {
        FUNC_0("RtlAllocateHeap() failed\n");
        return ((void*)0);
    }


    VAR_11->Name = (WCHAR*)FUNC_1(VAR_5,
                                        0,
                                        (FUNC_4(VAR_9) + 1) * sizeof(WCHAR));
    if (VAR_11->Name == ((void*)0))
    {
        FUNC_0("RtlAllocateHeap() failed\n");
        FUNC_2(VAR_5, 0, VAR_11);
        return ((void*)0);
    }


    FUNC_3(VAR_11->Name, VAR_9);


    VAR_11->Data = (WCHAR*)FUNC_1(VAR_5,
                                        0,
                                        (FUNC_4(VAR_10) + 1) * sizeof(WCHAR));
    if (VAR_11->Data == ((void*)0))
    {
        FUNC_0("RtlAllocateHeap() failed\n");
        FUNC_2(VAR_5, 0, VAR_11->Name);
        FUNC_2(VAR_5, 0, VAR_11);
        return ((void*)0);
    }


    FUNC_3(VAR_11->Data, VAR_10);


    if (VAR_6->FirstKey == ((void*)0))
    {
        VAR_6->FirstKey = VAR_11;
        VAR_6->LastKey = VAR_11;
    }
    else if ((VAR_8 == VAR_3) ||
             ((VAR_8 == VAR_2) && ((VAR_7 == ((void*)0)) || (VAR_7 == VAR_6->FirstKey))))
    {

        VAR_6->FirstKey->Prev = VAR_11;
        VAR_11->Next = VAR_6->FirstKey;
        VAR_6->FirstKey = VAR_11;
    }
    else if ((VAR_8 == VAR_2) && (VAR_7 != ((void*)0)))
    {

        VAR_11->Next = VAR_7;
        VAR_11->Prev = VAR_7->Prev;
        VAR_7->Prev->Next = VAR_11;
        VAR_7->Prev = VAR_11;
    }
    else if ((VAR_8 == VAR_4) ||
             ((VAR_8 == VAR_1) && ((VAR_7 == ((void*)0)) || (VAR_7 == VAR_6->LastKey))))
    {
        VAR_6->LastKey->Next = VAR_11;
        VAR_11->Prev = VAR_6->LastKey;
        VAR_6->LastKey = VAR_11;
    }
    else if ((VAR_8 == VAR_1) && (VAR_7 != ((void*)0)))
    {

        VAR_11->Next = VAR_7->Next;
        VAR_11->Prev = VAR_7;
        VAR_7->Next->Prev = VAR_11;
        VAR_7->Next = VAR_11;
    }

    return VAR_11;
}
