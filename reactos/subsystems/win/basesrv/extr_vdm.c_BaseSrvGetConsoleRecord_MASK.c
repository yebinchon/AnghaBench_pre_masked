
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* Flink; } ;
struct TYPE_7__ {int * ConsoleHandle; } ;
typedef TYPE_1__* PVDM_CONSOLE_RECORD ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef int NTSTATUS ;
typedef int * HANDLE ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;

NTSTATUS FUNC_1(HANDLE VAR_6, PVDM_CONSOLE_RECORD *VAR_7)
{
    PLIST_ENTRY VAR_8;
    PVDM_CONSOLE_RECORD VAR_9 = ((void*)0);


    if (VAR_6 == ((void*)0)) return VAR_1;


    for (VAR_8 = VAR_4.Flink; VAR_8 != &VAR_4; VAR_8 = VAR_8->Flink)
    {
        VAR_9 = FUNC_0(VAR_8, VAR_5, VAR_0);
        if (VAR_9->ConsoleHandle == VAR_6) break;
    }


    if (VAR_8 == &VAR_4) VAR_9 = ((void*)0);

    *VAR_7 = VAR_9;
    return VAR_9 ? VAR_3 : VAR_2;
}
