
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
typedef int USHORT ;
typedef size_t ULONG ;
typedef int UINT ;
struct TYPE_8__ {int Name; } ;
struct TYPE_7__ {scalar_t__ Length; int MaximumLength; int * Buffer; } ;
typedef int RPC_UNICODE_STRING ;
typedef TYPE_1__* PRPC_UNICODE_STRING ;
typedef int NTSTATUS ;
typedef int HINSTANCE ;


 size_t FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ,scalar_t__,int,int *,int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*,...) ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_7 (int *,int ) ;

NTSTATUS
FUNC_8(PRPC_UNICODE_STRING VAR_6,
                                USHORT VAR_7,
                                USHORT VAR_8,
                                PRPC_UNICODE_STRING *VAR_9,
                                USHORT *VAR_10)
{
    PRPC_UNICODE_STRING VAR_11;
    HINSTANCE VAR_12;
    ULONG VAR_13;
    UINT VAR_14;

    FUNC_6("LsarpLookupPrivilegeDisplayName(%p 0x%04hu 0x%04hu %p %p)",
          VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

    if (VAR_6->Length == 0 || VAR_6->Buffer == ((void*)0))
        return VAR_1;

    VAR_12 = FUNC_1(L"lsasrv.dll");

    for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_5); VAR_13++)
    {
        if (FUNC_7(VAR_6->Buffer, VAR_5[VAR_13].Name) == 0)
        {
            FUNC_6("Index: %u\n", VAR_13);
            VAR_14 = FUNC_2(VAR_12,
                                                    VAR_0 + VAR_13,
                                                    VAR_7);
            if (VAR_14 != 0)
            {
                VAR_11 = FUNC_4(sizeof(RPC_UNICODE_STRING));
                if (VAR_11 == ((void*)0))
                    return VAR_2;

                VAR_11->Length = VAR_14 * sizeof(WCHAR);
                VAR_11->MaximumLength = VAR_11->Length + sizeof(WCHAR);

                VAR_11->Buffer = FUNC_4(VAR_11->MaximumLength);
                if (VAR_11->Buffer == ((void*)0))
                {
                    FUNC_5(VAR_11);
                    return VAR_2;
                }

                FUNC_3(VAR_12,
                                 VAR_0 + VAR_13,
                                 VAR_7,
                                 VAR_11->Buffer,
                                 VAR_14);

                *VAR_9 = VAR_11;
                *VAR_10 = VAR_7;
            }
            else
            {
                VAR_14 = FUNC_2(VAR_12,
                                                        VAR_0 + VAR_13,
                                                        VAR_8);
                if (VAR_14 != 0)
                {
                    VAR_11 = FUNC_4(sizeof(RPC_UNICODE_STRING));
                    if (VAR_11 == ((void*)0))
                        return VAR_2;

                    VAR_11->Length = VAR_14 * sizeof(WCHAR);
                    VAR_11->MaximumLength = VAR_11->Length + sizeof(WCHAR);

                    VAR_11->Buffer = FUNC_4(VAR_11->MaximumLength);
                    if (VAR_11->Buffer == ((void*)0))
                    {
                        FUNC_5(VAR_11);
                        return VAR_2;
                    }

                    FUNC_3(VAR_12,
                                     VAR_0 + VAR_13,
                                     VAR_8,
                                     VAR_11->Buffer,
                                     VAR_14);

                    *VAR_9 = VAR_11;
                    *VAR_10 = VAR_8;
                }
                else
                {
                    return VAR_1;





                }
            }

            return VAR_4;
        }
    }

    return VAR_3;
}
