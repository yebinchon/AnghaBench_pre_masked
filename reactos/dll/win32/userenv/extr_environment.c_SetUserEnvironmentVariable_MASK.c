
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int MaximumLength; int * Buffer; scalar_t__ Length; } ;
typedef TYPE_1__ WCHAR ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int ULONG ;
typedef int PWSTR ;
typedef int * PVOID ;
typedef int NTSTATUS ;
typedef TYPE_1__* LPWSTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,TYPE_1__*,...) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*,int ) ;
 int VAR_1 ;
 int * FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,TYPE_1__*,TYPE_1__*,int*) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (int *,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (TYPE_1__*,char*) ;

__attribute__((used)) static
BOOL
FUNC_12(PWSTR* VAR_4,
                           LPWSTR VAR_5,
                           LPWSTR VAR_6,
                           BOOL VAR_7)
{
    NTSTATUS VAR_8;
    UNICODE_STRING VAR_9;
    UNICODE_STRING VAR_10, VAR_11;
    ULONG VAR_12;
    PVOID VAR_13 = ((void*)0);
    WCHAR VAR_14[VAR_2];

    if (VAR_7)
    {
        FUNC_9(&VAR_10, VAR_6);

        VAR_12 = 2 * VAR_2 * sizeof(WCHAR);

        VAR_11.Length = 0;
        VAR_11.MaximumLength = VAR_12;
        VAR_11.Buffer = VAR_13 = FUNC_5(VAR_1, VAR_12);
        if (VAR_11.Buffer == ((void*)0))
        {
            FUNC_2("LocalAlloc() failed\n");
            return VAR_0;
        }

        VAR_8 = FUNC_8(*VAR_4,
                                               &VAR_10,
                                               &VAR_11,
                                               &VAR_12);
        if (!FUNC_7(VAR_8))
        {
            FUNC_2("RtlExpandEnvironmentStrings_U() failed (Status %lx)\n", VAR_8);
            FUNC_2("Length %lu\n", VAR_12);

            if (VAR_13)
                FUNC_6(VAR_13);

            return VAR_0;
        }
    }
    else
    {
        FUNC_9(&VAR_11, VAR_6);
    }

    if (!FUNC_11(VAR_5, L"TEMP") || !FUNC_11(VAR_5, L"TMP"))
    {
        if (FUNC_4(VAR_11.Buffer, VAR_14, FUNC_0(VAR_14)))
        {
            FUNC_9(&VAR_11, VAR_14);
        }
        else
        {
            FUNC_1("GetShortPathNameW() failed for %S (Error %lu)\n", VAR_11.Buffer, FUNC_3());
        }

        FUNC_1("Buffer: %S\n", VAR_14);
    }

    FUNC_9(&VAR_9, VAR_5);

    FUNC_1("Value: %wZ\n", &VAR_11);

    VAR_8 = FUNC_10(VAR_4,
                                       &VAR_9,
                                       &VAR_11);

    if (VAR_13)
        FUNC_6(VAR_13);

    if (!FUNC_7(VAR_8))
    {
        FUNC_2("RtlSetEnvironmentVariable() failed (Status %lx)\n", VAR_8);
        return VAR_0;
    }

    return VAR_3;
}
