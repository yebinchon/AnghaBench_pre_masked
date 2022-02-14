
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int DataLength; scalar_t__ Type; int Data; } ;
typedef TYPE_1__* PKEY_VALUE_PARTIAL_INFORMATION ;
typedef scalar_t__ NTSTATUS ;
typedef int KeyValueObject ;
typedef TYPE_1__ KEY_VALUE_PARTIAL_INFORMATION ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int ,TYPE_1__*,int,int*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int) ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 (char*,...) ;

void FUNC_9(int VAR_6)
{
    HANDLE VAR_7;
    NTSTATUS VAR_8;
    KEY_VALUE_PARTIAL_INFORMATION VAR_9;
    PKEY_VALUE_PARTIAL_INFORMATION VAR_10 = &VAR_9;
    ULONG VAR_11, VAR_12;

    FUNC_8("Dumping AppCompatCache registry key\n");

    VAR_8 = FUNC_2(&VAR_7, VAR_2, &VAR_1);

    VAR_8 = FUNC_3(VAR_7, &VAR_0,
                VAR_3, VAR_10,
                sizeof(VAR_9), &VAR_12);

    if (VAR_8 == VAR_5)
    {
        VAR_11 = sizeof(KEY_VALUE_PARTIAL_INFORMATION) + VAR_10->DataLength;
        VAR_10 = FUNC_7(VAR_11);
        if (VAR_10 != ((void*)0))
        {
            VAR_8 = FUNC_3(VAR_7, &VAR_0,
                        VAR_3, VAR_10,
                        VAR_11, &VAR_12);
        }
    }

    if (FUNC_0(VAR_8) && VAR_10->Type == VAR_4)
    {
        ULONG VAR_13;
        if (VAR_6)
            FUNC_6(VAR_10->Data, VAR_10->DataLength);
        VAR_13 = FUNC_4(0, VAR_10->Data, VAR_10->DataLength);
        FUNC_8("Len: %lu, Crc: 0x%lx\n", VAR_10->DataLength, VAR_13);
    }
    else
    {
        FUNC_8("Failed reading AppCompatCache from registry (0x%lx)\n", VAR_8);
    }

    if (VAR_10 != &VAR_9)
        FUNC_5(VAR_10);

    if (VAR_7)
        FUNC_1(VAR_7);
}
