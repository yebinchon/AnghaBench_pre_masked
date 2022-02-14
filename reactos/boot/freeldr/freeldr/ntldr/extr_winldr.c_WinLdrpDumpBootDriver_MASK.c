
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {TYPE_3__* Flink; } ;
struct TYPE_11__ {TYPE_1__ Link; int RegistryPath; int LdrEntry; int FilePath; } ;
struct TYPE_10__ {struct TYPE_10__* Flink; } ;
struct TYPE_9__ {TYPE_3__ BootDriverListHead; } ;
typedef TYPE_2__* PLOADER_PARAMETER_BLOCK ;
typedef TYPE_3__* PLIST_ENTRY ;
typedef TYPE_4__* PBOOT_DRIVER_LIST_ENTRY ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int *,int ,int *) ;

VOID
FUNC_2(PLOADER_PARAMETER_BLOCK VAR_2)
{
    PLIST_ENTRY VAR_3;
    PBOOT_DRIVER_LIST_ENTRY VAR_4;

    VAR_3 = VAR_2->BootDriverListHead.Flink;

    while (VAR_3 != &VAR_2->BootDriverListHead)
    {
        VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_1);

        FUNC_1("BootDriver %wZ DTE %08X RegPath: %wZ\n", &VAR_4->FilePath,
            VAR_4->LdrEntry, &VAR_4->RegistryPath);

        VAR_3 = VAR_4->Link.Flink;
    }
}
