
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_19__ {void* Buffer; } ;
struct TYPE_18__ {void* Buffer; } ;
struct TYPE_14__ {TYPE_3__* Flink; } ;
struct TYPE_17__ {TYPE_1__ Link; TYPE_5__ FilePath; void* LdrEntry; TYPE_9__ RegistryPath; } ;
struct TYPE_16__ {struct TYPE_16__* Flink; } ;
struct TYPE_15__ {int LoadOrderListHead; TYPE_3__ BootDriverListHead; } ;
typedef TYPE_2__* PLOADER_PARAMETER_BLOCK ;
typedef TYPE_3__* PLIST_ENTRY ;
typedef int PCSTR ;
typedef TYPE_4__* PBOOT_DRIVER_LIST_ENTRY ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (char*,TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,TYPE_5__*,void*,TYPE_9__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char*,TYPE_5__*) ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_5__*,int ,void**) ;

BOOLEAN
FUNC_7(PLOADER_PARAMETER_BLOCK VAR_4,
                      PCSTR VAR_5)
{
    PLIST_ENTRY VAR_6;
    PBOOT_DRIVER_LIST_ENTRY VAR_7;
    BOOLEAN VAR_8;
    BOOLEAN VAR_9 = VAR_3;


    VAR_6 = VAR_4->BootDriverListHead.Flink;

    while (VAR_6 != &VAR_4->BootDriverListHead)
    {
        VAR_7 = FUNC_0(VAR_6, VAR_0, VAR_2);

        FUNC_4("BootDriver %wZ DTE %08X RegPath: %wZ\n", &VAR_7->FilePath,
            VAR_7->LdrEntry, &VAR_7->RegistryPath);




        VAR_8 = FUNC_6(&VAR_4->LoadOrderListHead,
                                         VAR_5,
                                         &VAR_7->FilePath,
                                         0,
                                         &VAR_7->LdrEntry);

        if (VAR_8)
        {

            VAR_7->RegistryPath.Buffer = FUNC_2(VAR_7->RegistryPath.Buffer);
            VAR_7->FilePath.Buffer = FUNC_2(VAR_7->FilePath.Buffer);
            VAR_7->LdrEntry = FUNC_2(VAR_7->LdrEntry);
        }
        else
        {

            FUNC_1("Can't load boot driver '%wZ'!\n", &VAR_7->FilePath);
            FUNC_5("Can't load boot driver '%wZ'!", &VAR_7->FilePath);
            VAR_9 = VAR_1;


            FUNC_3(VAR_6);
        }

        VAR_6 = VAR_7->Link.Flink;
    }

    return VAR_9;
}
