
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int Buffer; int MaximumLength; int Length; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef scalar_t__ ULONG ;
struct TYPE_8__ {int Name; int NameLength; } ;
typedef int PUNICODE_STRING ;
typedef TYPE_2__* PKEY_NAME_INFORMATION ;
typedef scalar_t__ NTSTATUS ;
typedef int LONG ;
typedef int HKEY ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_2__*,scalar_t__,scalar_t__*) ;
 int VAR_3 ;
 TYPE_2__* FUNC_3 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (int ,int ,TYPE_2__*) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static
LONG
FUNC_8(HKEY VAR_5, PUNICODE_STRING VAR_6)
{
    UNICODE_STRING VAR_7;
    PKEY_NAME_INFORMATION VAR_8;
    ULONG VAR_9;
    NTSTATUS VAR_10;


    VAR_9 = 0;
    VAR_10 = FUNC_2(VAR_5, VAR_2, ((void*)0), 0, &VAR_9);
    if (VAR_10 != VAR_4)
    {
        FUNC_0("NtQueryKey returned unexpected Status: 0x%08x\n", VAR_10);
        return FUNC_7(VAR_10);
    }


    VAR_8 = FUNC_3(FUNC_6(), 0, VAR_9);
    if (VAR_8 == ((void*)0))
    {
        FUNC_0("Failed to allocate %lu bytes", VAR_9);
        return VAR_0;
    }

    VAR_10 = FUNC_2(VAR_5, VAR_2, VAR_8, VAR_9, &VAR_9);
    if (!FUNC_1(VAR_10))
    {
        FUNC_5(FUNC_6(), 0, VAR_8);
        FUNC_0("NtQueryKey failed: 0x%08x\n", VAR_10);
        return FUNC_7(VAR_10);
    }


    VAR_7.Length = VAR_8->NameLength;
    VAR_7.MaximumLength = VAR_8->NameLength;
    VAR_7.Buffer = VAR_8->Name;

    VAR_10 = FUNC_4(VAR_3, &VAR_7, VAR_6);
    if (!FUNC_1(VAR_10))
    {
        FUNC_5(FUNC_6(), 0, VAR_8);
        FUNC_0("RtlDuplicateUnicodeString failed: 0x%08x\n", VAR_10);
        return FUNC_7(VAR_10);
    }

    FUNC_5(FUNC_6(), 0, VAR_8);

    return VAR_1;
}
