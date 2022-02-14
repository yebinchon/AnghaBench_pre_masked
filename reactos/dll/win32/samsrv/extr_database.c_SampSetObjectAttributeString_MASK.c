
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ USHORT ;
struct TYPE_3__ {scalar_t__ Length; int * Buffer; } ;
typedef int * PWCHAR ;
typedef int PSAM_DB_OBJECT ;
typedef TYPE_1__* PRPC_UNICODE_STRING ;
typedef int NTSTATUS ;
typedef int LPWSTR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,scalar_t__) ;

NTSTATUS
FUNC_1(PSAM_DB_OBJECT VAR_1,
                             LPWSTR VAR_2,
                             PRPC_UNICODE_STRING VAR_3)
{
    PWCHAR VAR_4 = ((void*)0);
    USHORT VAR_5 = 0;

    if ((VAR_3 != ((void*)0)) && (VAR_3->Buffer != ((void*)0)))
    {
        VAR_4 = VAR_3->Buffer;
        VAR_5 = VAR_3->Length + sizeof(WCHAR);
    }

    return FUNC_0(VAR_1,
                                  VAR_2,
                                  VAR_0,
                                  VAR_4,
                                  VAR_5);
}
