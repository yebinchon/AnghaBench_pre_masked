
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t ULONG ;
struct TYPE_9__ {scalar_t__ LowPart; scalar_t__ HighPart; } ;
struct TYPE_12__ {int Name; TYPE_1__ Luid; } ;
struct TYPE_11__ {scalar_t__ HighPart; scalar_t__ LowPart; } ;
struct TYPE_10__ {int Length; int MaximumLength; int * Buffer; } ;
typedef int RPC_UNICODE_STRING ;
typedef TYPE_2__* PRPC_UNICODE_STRING ;
typedef TYPE_3__* PLUID ;
typedef int NTSTATUS ;


 size_t FUNC_0 (TYPE_4__*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;

NTSTATUS
FUNC_5(PLUID VAR_6,
                         PRPC_UNICODE_STRING *VAR_7)
{
    PRPC_UNICODE_STRING VAR_8;
    ULONG VAR_9;

    if (VAR_6->HighPart != 0 ||
        (VAR_6->LowPart < VAR_1 ||
         VAR_6->LowPart > VAR_0))
    {
        return VAR_3;
    }

    for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5); VAR_9++)
    {
        if (VAR_6->LowPart == VAR_5[VAR_9].Luid.LowPart &&
            VAR_6->HighPart == VAR_5[VAR_9].Luid.HighPart)
        {
            VAR_8 = FUNC_1(sizeof(RPC_UNICODE_STRING));
            if (VAR_8 == ((void*)0))
                return VAR_2;

            VAR_8->Length = FUNC_4(VAR_5[VAR_9].Name) * sizeof(WCHAR);
            VAR_8->MaximumLength = VAR_8->Length + sizeof(WCHAR);

            VAR_8->Buffer = FUNC_1(VAR_8->MaximumLength);
            if (VAR_8->Buffer == ((void*)0))
            {
                FUNC_2(VAR_8);
                return VAR_2;
            }

            FUNC_3(VAR_8->Buffer, VAR_5[VAR_9].Name);

            *VAR_7 = VAR_8;

            return VAR_4;
        }
    }

    return VAR_3;
}
