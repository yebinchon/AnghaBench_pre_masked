
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long long QuadPart; } ;
typedef int PVOID ;
typedef int PTHREAD_START_ROUTINE ;
typedef int NTSTATUS ;
typedef scalar_t__ LONG ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int HANDLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static NTSTATUS
FUNC_5(PTHREAD_START_ROUTINE VAR_1)
{
    NTSTATUS VAR_2;
    HANDLE VAR_3;
    LARGE_INTEGER VAR_4;
    volatile LONG VAR_5 = 0;

    VAR_4.QuadPart = -10000LL;


    VAR_2 = FUNC_4(VAR_1, (PVOID)&VAR_5, &VAR_3);
    if (FUNC_0(VAR_2))
    {
        FUNC_3(VAR_3, ((void*)0));


        while (VAR_5 == 0)
        {
            FUNC_2(VAR_0,
                             &VAR_4);
        }

        FUNC_1(VAR_3);
    }

    return VAR_2;
}
