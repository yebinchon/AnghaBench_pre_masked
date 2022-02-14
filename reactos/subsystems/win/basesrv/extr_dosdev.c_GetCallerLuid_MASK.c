
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
typedef int TokenInformation ;
struct TYPE_3__ {int AuthenticationId; } ;
typedef TYPE_1__ TOKEN_STATISTICS ;
typedef int * PLUID ;
typedef scalar_t__ NTSTATUS ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,int,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,TYPE_1__*,int,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

NTSTATUS
FUNC_8(PLUID VAR_6)
{
    NTSTATUS VAR_7;
    HANDLE VAR_8;
    ULONG VAR_9;
    TOKEN_STATISTICS VAR_10;


    if (VAR_6 == ((void*)0))
    {
        return VAR_2;
    }


    VAR_8 = 0;
    VAR_9 = 0;
    VAR_7 = FUNC_5(FUNC_3(),
                               VAR_1 | VAR_4,
                               VAR_0, &VAR_8);

    if (VAR_7 == VAR_3)
    {
        VAR_7 = FUNC_4(FUNC_2(),
                                    VAR_1 | VAR_4,
                                    &VAR_8);
    }


    if (FUNC_0(VAR_7))
    {
        VAR_7 = FUNC_6(VAR_8,
                                         VAR_5,
                                         &VAR_10,
                                         sizeof(VAR_10),
                                         &VAR_9);
        if (FUNC_0(VAR_7))
        {
            FUNC_7(VAR_6, &VAR_10.AuthenticationId);
        }
    }


    if (VAR_8 != 0)
    {
        FUNC_1(VAR_8);
    }

    return VAR_7;
}
