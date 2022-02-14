
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef void* USHORT ;
typedef int ULONG ;
struct TYPE_3__ {int * Buffer; void* MaximumLength; void* Length; } ;
typedef int * PVOID ;
typedef int PSAM_DB_OBJECT ;
typedef TYPE_1__* PRPC_UNICODE_STRING ;
typedef int NTSTATUS ;
typedef int LPWSTR ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *,int *,int*) ;
 int FUNC_2 (char*,int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;

NTSTATUS
FUNC_5(PSAM_DB_OBJECT VAR_3,
                             LPWSTR VAR_4,
                             PRPC_UNICODE_STRING VAR_5)
{
    ULONG VAR_6 = 0;
    NTSTATUS VAR_7;

    VAR_7 = FUNC_1(VAR_3,
                                    VAR_4,
                                    ((void*)0),
                                    ((void*)0),
                                    &VAR_6);
    if (!FUNC_0(VAR_7) && VAR_7 != VAR_0)
    {
        FUNC_2("Status 0x%08lx\n", VAR_7);
        goto done;
    }

    if (VAR_6 == 0)
    {
        VAR_5->Length = 0;
        VAR_5->MaximumLength = 0;
        VAR_5->Buffer = ((void*)0);

        VAR_7 = VAR_2;
        goto done;
    }

    VAR_5->Length = (USHORT)(VAR_6 - sizeof(WCHAR));
    VAR_5->MaximumLength = (USHORT)VAR_6;
    VAR_5->Buffer = FUNC_3(VAR_6);
    if (VAR_5->Buffer == ((void*)0))
    {
        VAR_7 = VAR_1;
        goto done;
    }

    FUNC_2("Length: %lu\n", VAR_6);
    VAR_7 = FUNC_1(VAR_3,
                                    VAR_4,
                                    ((void*)0),
                                    (PVOID)VAR_5->Buffer,
                                    &VAR_6);
    if (!FUNC_0(VAR_7))
    {
        FUNC_2("Status 0x%08lx\n", VAR_7);
        goto done;
    }

done:
    if (!FUNC_0(VAR_7))
    {
        if (VAR_5->Buffer != ((void*)0))
        {
            FUNC_4(VAR_5->Buffer);
            VAR_5->Buffer = ((void*)0);
        }
    }

    return VAR_7;
}
