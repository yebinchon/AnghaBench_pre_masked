
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_9__ {scalar_t__ Id; } ;
struct TYPE_8__ {scalar_t__ ModulesCount; TYPE_2__* Modules; } ;
typedef TYPE_1__ SYSTEM_MODULE_INFORMATION ;
typedef TYPE_2__ SYSTEM_MODULE ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,int ,TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void FUNC_6(void)
{
    NTSTATUS VAR_3;
    ULONG VAR_4;
    ULONG VAR_5, VAR_6;

    ULONG VAR_7 = sizeof(SYSTEM_MODULE_INFORMATION);
    SYSTEM_MODULE_INFORMATION* VAR_8 = FUNC_1(FUNC_0(), 0, VAR_7);
    SYSTEM_MODULE* VAR_9;


    VAR_3 = FUNC_5(VAR_2, VAR_8, 0, &VAR_4);
    FUNC_4( VAR_3 == VAR_0, "Expected STATUS_INFO_LENGTH_MISMATCH, got %08x\n", VAR_3);
    FUNC_4( VAR_4 > 0, "Expected a ReturnLength to show the needed length\n");

    VAR_7 = VAR_4;
    VAR_8 = FUNC_3(FUNC_0(), 0, VAR_8 , VAR_7);
    VAR_3 = FUNC_5(VAR_2, VAR_8, VAR_7, &VAR_4);
    FUNC_4( VAR_3 == VAR_1, "Expected STATUS_SUCCESS, got %08x\n", VAR_3);

    VAR_5 = VAR_8->ModulesCount;
    VAR_9 = &VAR_8->Modules[0];

    FUNC_4( VAR_5 > 0, "Expected some modules to be loaded\n");


    for (VAR_6 = 0; VAR_6 < VAR_5 ; VAR_6++)
    {
        FUNC_4( VAR_6 == VAR_9->Id, "Id (%d) should have matched %u\n", VAR_9->Id, VAR_6);
        VAR_9++;
    }

    FUNC_2( FUNC_0(), 0, VAR_8);
}
