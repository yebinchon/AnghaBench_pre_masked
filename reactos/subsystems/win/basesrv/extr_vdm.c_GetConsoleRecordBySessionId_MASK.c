
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_8__ {struct TYPE_8__* Flink; } ;
struct TYPE_7__ {scalar_t__ SessionId; } ;
typedef TYPE_1__* PVDM_CONSOLE_RECORD ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef int NTSTATUS ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;

NTSTATUS FUNC_1(ULONG VAR_5, PVDM_CONSOLE_RECORD *VAR_6)
{
    PLIST_ENTRY VAR_7;
    PVDM_CONSOLE_RECORD VAR_8 = ((void*)0);


    for (VAR_7 = VAR_3.Flink; VAR_7 != &VAR_3; VAR_7 = VAR_7->Flink)
    {
        VAR_8 = FUNC_0(VAR_7, VAR_4, VAR_0);
        if (VAR_8->SessionId == VAR_5) break;
    }


    if (VAR_7 == &VAR_3) VAR_8 = ((void*)0);

    *VAR_6 = VAR_8;
    return VAR_8 ? VAR_2 : VAR_1;
}
