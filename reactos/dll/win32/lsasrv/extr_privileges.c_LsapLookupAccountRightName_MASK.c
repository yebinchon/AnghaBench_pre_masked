
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t ULONG ;
struct TYPE_7__ {size_t Flag; int Name; } ;
struct TYPE_6__ {int Length; int MaximumLength; int * Buffer; } ;
typedef int RPC_UNICODE_STRING ;
typedef TYPE_1__* PRPC_UNICODE_STRING ;
typedef int NTSTATUS ;


 size_t FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;

NTSTATUS
FUNC_5(ULONG VAR_5,
                           PRPC_UNICODE_STRING *VAR_6)
{
    PRPC_UNICODE_STRING VAR_7;
    ULONG VAR_8;

    for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++)
    {
        if (VAR_4[VAR_8].Flag == VAR_5)
        {
            VAR_7 = FUNC_1(sizeof(RPC_UNICODE_STRING));
            if (VAR_7 == ((void*)0))
                return VAR_1;

            VAR_7->Length = FUNC_4(VAR_4[VAR_8].Name) * sizeof(WCHAR);
            VAR_7->MaximumLength = VAR_7->Length + sizeof(WCHAR);

            VAR_7->Buffer = FUNC_1(VAR_7->MaximumLength);
            if (VAR_7->Buffer == ((void*)0))
            {
                FUNC_2(VAR_7);
                return VAR_0;
            }

            FUNC_3(VAR_7->Buffer, VAR_4[VAR_8].Name);

            *VAR_6 = VAR_7;

            return VAR_3;
        }
    }

    return VAR_2;
}
