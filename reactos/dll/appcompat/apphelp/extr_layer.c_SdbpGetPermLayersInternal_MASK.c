
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
typedef int ValueBuffer ;
struct TYPE_7__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_8__ {int DataLength; scalar_t__ Data; } ;
typedef int PWSTR ;
typedef TYPE_2__* PVOID ;
typedef int PUNICODE_STRING ;
typedef TYPE_2__* PKEY_VALUE_PARTIAL_INFORMATION ;
typedef int * PDWORD ;
typedef int PCWSTR ;
typedef int NTSTATUS ;
typedef int KEY_VALUE_PARTIAL_INFORMATION ;
typedef int HANDLE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,TYPE_2__*,int,int *) ;
 int FUNC_3 (char*,TYPE_1__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int ,int *) ;
 int FUNC_6 (int ,int ,int ,int ) ;

BOOL FUNC_7(PUNICODE_STRING VAR_3, PWSTR VAR_4, PDWORD VAR_5, BOOL VAR_6)
{
    UNICODE_STRING VAR_7;
    ULONG VAR_8[(VAR_2 * sizeof(WCHAR) + sizeof(KEY_VALUE_PARTIAL_INFORMATION) + sizeof(ULONG) - 1) / sizeof(ULONG)];
    PKEY_VALUE_PARTIAL_INFORMATION VAR_9 = (PVOID)VAR_8;
    ULONG VAR_10 = 0;
    HANDLE VAR_11;
    NTSTATUS VAR_12;

    VAR_12 = FUNC_5(&VAR_7, VAR_6, VAR_0, &VAR_11);
    if (FUNC_0(VAR_12))
    {
        VAR_12 = FUNC_2(VAR_11, VAR_3, VAR_1, VAR_9, sizeof(VAR_8), &VAR_10);
        if (FUNC_0(VAR_12))
        {
            FUNC_6(VAR_4, *VAR_5, (PCWSTR)VAR_9->Data, VAR_9->DataLength);
            *VAR_5 = VAR_9->DataLength;
        }
        else
        {
            FUNC_3("Failed to read value info from Key \"%wZ\" Status 0x%lx\n", &VAR_7, VAR_12);
        }
        FUNC_1(VAR_11);
        FUNC_4(VAR_7.Buffer);
    }
    return FUNC_0(VAR_12);
}
