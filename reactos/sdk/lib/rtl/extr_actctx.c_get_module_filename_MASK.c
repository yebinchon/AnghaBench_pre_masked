
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ USHORT ;
struct TYPE_7__ {scalar_t__ MaximumLength; scalar_t__ Length; int Buffer; } ;
typedef TYPE_2__ UNICODE_STRING ;
typedef int ULONG_PTR ;
struct TYPE_6__ {scalar_t__ Length; int Buffer; } ;
struct TYPE_8__ {TYPE_1__ FullDllName; } ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_3__ LDR_DATA_TABLE_ENTRY ;
typedef int HMODULE ;


 scalar_t__ FUNC_0 (int ,TYPE_3__**) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static NTSTATUS FUNC_6( HMODULE VAR_2, UNICODE_STRING *VAR_3, USHORT VAR_4 )
{
    NTSTATUS VAR_5;
    ULONG_PTR VAR_6;
    LDR_DATA_TABLE_ENTRY *VAR_7;

    FUNC_1(0, ((void*)0), &VAR_6);
    VAR_5 = FUNC_0( VAR_2, &VAR_7 );
    if (VAR_5 == VAR_1)
    {
        if ((VAR_3->Buffer = FUNC_3( FUNC_4(), 0,
                                            VAR_7->FullDllName.Length + VAR_4 + sizeof(WCHAR) )))
        {
            FUNC_5( VAR_3->Buffer, VAR_7->FullDllName.Buffer, VAR_7->FullDllName.Length + sizeof(WCHAR) );
            VAR_3->Length = VAR_7->FullDllName.Length;
            VAR_3->MaximumLength = VAR_7->FullDllName.Length + VAR_4 + sizeof(WCHAR);
        }
        else VAR_5 = VAR_0;
    }
    FUNC_2(0, VAR_6);
    return VAR_5;
}
