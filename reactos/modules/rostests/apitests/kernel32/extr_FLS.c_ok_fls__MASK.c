
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* FlsCallback; } ;
struct TYPE_5__ {scalar_t__ FlsData; } ;
struct TYPE_4__ {scalar_t__ lpCallback; int * Unknown; } ;
typedef int * PVOID ;
typedef TYPE_1__* PFLS_CALLBACK_INFO ;
typedef scalar_t__ PFLS_CALLBACK_FUNCTION ;
typedef size_t DWORD ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 () ;
 TYPE_2__* FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char*) ;

void FUNC_5(DWORD VAR_4, PVOID VAR_5, PFLS_CALLBACK_FUNCTION VAR_6)
{
    PFLS_CALLBACK_INFO VAR_7;
    PVOID* VAR_8;
    PVOID VAR_9;

    VAR_7 = (PFLS_CALLBACK_INFO)FUNC_0()->FlsCallback;
    VAR_8 = (PVOID*)FUNC_1()->FlsData;

    FUNC_3(VAR_8 != ((void*)0), "Expected FlsData\n");
    FUNC_3(VAR_7 != ((void*)0), "Expected FlsCallback\n");

    if (VAR_8 == ((void*)0) || VAR_7 == ((void*)0))
    {
        FUNC_4("Unable to continue test\n");
        return;
    }

    if (VAR_3 <= VAR_1)
    {
        FUNC_3(FUNC_0()->FlsCallback[VAR_4] == VAR_6,
                    "Expected NtCurrentPeb()->FlsCallback[%lu] to be %p, was %p\n",
                    VAR_4,
                    VAR_6,
                    FUNC_0()->FlsCallback[VAR_4]);
    }
    else
    {
        FUNC_3(VAR_7[VAR_4].lpCallback == VAR_6,
                    "Expected FlsCallback[%lu].lpCallback to be %p, was %p\n",
                    VAR_4,
                    VAR_6,
                    VAR_7[VAR_4].lpCallback);
        if (VAR_6 != &VAR_0 || !VAR_2)
        {
            FUNC_3(VAR_7[VAR_4].Unknown == ((void*)0),
                        "Expected FlsCallback[%lu].Unknown to be %p, was %p\n",
                        VAR_4,
                        ((void*)0),
                        VAR_7[VAR_4].Unknown);
        }
    }
    FUNC_3(VAR_8[VAR_4 + 2] == VAR_5,
                "Expected FlsData[%lu + 2] to be %p, was %p\n",
                VAR_4,
                VAR_5,
                VAR_8[VAR_4 + 2]);

    VAR_9 = FUNC_2(VAR_4);
    FUNC_3(VAR_9 == VAR_5, "Expected FlsGetValue(%lu) to be %p, was %p\n", VAR_4, VAR_5, VAR_9);
}
