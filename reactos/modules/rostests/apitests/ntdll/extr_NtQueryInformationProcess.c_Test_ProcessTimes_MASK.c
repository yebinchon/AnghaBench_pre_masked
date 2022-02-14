
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ULONG ;
typedef int Times2 ;
typedef int Times1 ;
struct TYPE_18__ {long long QuadPart; } ;
struct TYPE_17__ {scalar_t__ QuadPart; } ;
struct TYPE_15__ {scalar_t__ QuadPart; } ;
struct TYPE_14__ {scalar_t__ QuadPart; } ;
struct TYPE_13__ {scalar_t__ QuadPart; } ;
struct TYPE_12__ {long long QuadPart; } ;
struct TYPE_16__ {TYPE_4__ UserTime; TYPE_3__ KernelTime; TYPE_2__ ExitTime; TYPE_1__ CreateTime; } ;
typedef TYPE_5__* PVOID ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_6__ LARGE_INTEGER ;
typedef TYPE_5__ KERNEL_USER_TIMES ;


 int FUNC_0 (scalar_t__) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_5__*,int,int*) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_5__*,int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_8__ VAR_7 ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (char*,scalar_t__) ;

__attribute__((used)) static
void
FUNC_9(void)
{

    NTSTATUS VAR_8;
    KERNEL_USER_TIMES VAR_9;
    KERNEL_USER_TIMES VAR_10;
    ULONG VAR_11;
    LARGE_INTEGER VAR_12, VAR_13;


    VAR_8 = FUNC_2(((void*)0),
                                       VAR_0,
                                       ((void*)0),
                                       0,
                                       ((void*)0));
    FUNC_7(VAR_8, VAR_4);


    VAR_8 = FUNC_2(((void*)0),
                                       VAR_0,
                                       ((void*)0),
                                       sizeof(KERNEL_USER_TIMES),
                                       ((void*)0));
    FUNC_7(VAR_8, VAR_5);


    VAR_8 = FUNC_2(FUNC_1(),
                                       VAR_0,
                                       ((void*)0),
                                       0,
                                       ((void*)0));
    FUNC_7(VAR_8, VAR_4);


    VAR_8 = FUNC_2(FUNC_1(),
                                       VAR_0,
                                       (PVOID)2,
                                       0,
                                       ((void*)0));
    FUNC_7(VAR_8, VAR_4);


    VAR_8 = FUNC_2(FUNC_1(),
                                       VAR_0,
                                       (PVOID)2,
                                       sizeof(KERNEL_USER_TIMES),
                                       ((void*)0));
    FUNC_7(VAR_8, VAR_3);


    VAR_8 = FUNC_2(FUNC_1(),
                                       VAR_0,
                                       ((void*)0),
                                       sizeof(KERNEL_USER_TIMES) - 1,
                                       ((void*)0));
    FUNC_7(VAR_8, VAR_4);


    VAR_8 = FUNC_2(FUNC_1(),
                                       VAR_0,
                                       ((void*)0),
                                       sizeof(KERNEL_USER_TIMES),
                                       ((void*)0));
    FUNC_7(VAR_8, VAR_2);


    VAR_8 = FUNC_2(FUNC_1(),
                                       VAR_0,
                                       ((void*)0),
                                       sizeof(KERNEL_USER_TIMES) + 1,
                                       ((void*)0));
    FUNC_7(VAR_8, VAR_4);


    VAR_11 = 0x55555555;
    VAR_8 = FUNC_2(FUNC_1(),
                                       VAR_0,
                                       ((void*)0),
                                       sizeof(KERNEL_USER_TIMES) - 1,
                                       &VAR_11);
    FUNC_7(VAR_8, VAR_4);
    FUNC_6(VAR_11, 0x55555555);

    VAR_8 = FUNC_3(&VAR_12);
    FUNC_7(VAR_8, VAR_6);


    do
    {
        VAR_8 = FUNC_3(&VAR_13);
        if (!FUNC_0(VAR_8))
        {
            FUNC_5(0, "NtQuerySystemTime failed with %lx\n", VAR_8);
            break;
        }
    } while (VAR_13 - VAR_12 < 1000000);


    VAR_8 = FUNC_3(&VAR_12);
    FUNC_7(VAR_8, VAR_6);

    FUNC_4(&VAR_9, sizeof(VAR_9), 0x55);
    VAR_8 = FUNC_2(FUNC_1(),
                                       VAR_0,
                                       &VAR_9,
                                       sizeof(KERNEL_USER_TIMES),
                                       ((void*)0));
    FUNC_7(VAR_8, VAR_6);
    FUNC_5(VAR_9 < VAR_7.QuadPart,
       "CreateTime is %I64u, expected < %I64u\n", VAR_9, VAR_7.QuadPart);
    FUNC_5(VAR_9 > VAR_7.QuadPart - 100000000LL,
       "CreateTime is %I64u, expected > %I64u\n", VAR_9, VAR_7.QuadPart - 100000000LL);
    FUNC_5(VAR_9 == 0,
       "ExitTime is %I64u, expected 0\n", VAR_9);
    FUNC_5(VAR_9 != 0, "KernelTime is 0\n");
    FUNC_5(VAR_9 != 0, "UserTime is 0\n");


    do
    {
        VAR_8 = FUNC_3(&VAR_13);
        if (!FUNC_0(VAR_8))
        {
            FUNC_5(0, "NtQuerySystemTime failed with %lx\n", VAR_8);
            break;
        }
    } while (VAR_13 - VAR_12 < 1000000);


    VAR_11 = 0x55555555;
    FUNC_4(&VAR_10, sizeof(VAR_10), 0x55);
    VAR_8 = FUNC_2(FUNC_1(),
                                       VAR_0,
                                       &VAR_10,
                                       sizeof(KERNEL_USER_TIMES),
                                       &VAR_11);
    FUNC_7(VAR_8, VAR_6);
    FUNC_6(VAR_11, sizeof(KERNEL_USER_TIMES));
    FUNC_5(VAR_9 == VAR_10,
       "CreateTimes not equal: %I64u != %I64u\n", VAR_9, VAR_10);
    FUNC_5(VAR_10 == 0,
       "ExitTime is %I64u, expected 0\n", VAR_10);
    FUNC_5(VAR_10 != 0, "KernelTime is 0\n");
    FUNC_5(VAR_10 != 0, "UserTime is 0\n");


    VAR_8 = FUNC_3(&VAR_13);
    FUNC_7(VAR_8, VAR_6);

    FUNC_5(VAR_10 > VAR_9,
       "KernelTime values inconsistent. Expected %I64u > %I64u\n", VAR_10, VAR_9);
    FUNC_5(VAR_10 > VAR_9,
       "UserTime values inconsistent. Expected %I64u > %I64u\n", VAR_10, VAR_9);

    FUNC_5(VAR_10 - VAR_9 < VAR_13 - VAR_12,
       "KernelTime values inconsistent. Expected %I64u - %I64u < %I64u\n",
       VAR_10, VAR_9, VAR_13 - VAR_12);
    FUNC_5(VAR_10 - VAR_9 < VAR_13 - VAR_12,
       "UserTime values inconsistent. Expected %I64u - %I64u < %I64u\n",
       VAR_10, VAR_9, VAR_13 - VAR_12);

    FUNC_8("KernelTime1 = %I64u\n", VAR_9);
    FUNC_8("KernelTime2 = %I64u\n", VAR_10);
    FUNC_8("UserTime1 = %I64u\n", VAR_9);
    FUNC_8("UserTime2 = %I64u\n", VAR_10);



}
