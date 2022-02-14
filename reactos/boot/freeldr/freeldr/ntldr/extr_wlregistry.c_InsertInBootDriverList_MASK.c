
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int * Buffer; } ;
struct TYPE_11__ {int Link; TYPE_3__ RegistryPath; TYPE_3__ FilePath; } ;
struct TYPE_10__ {struct TYPE_10__* Flink; } ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef TYPE_2__* PBOOT_DRIVER_LIST_ENTRY ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_3__*,int ) ;
 int VAR_3 ;

__attribute__((used)) static
BOOLEAN
FUNC_4(
    PLIST_ENTRY VAR_4,
    PBOOT_DRIVER_LIST_ENTRY VAR_5)
{
    PBOOT_DRIVER_LIST_ENTRY VAR_6;
    PLIST_ENTRY VAR_7;

    FUNC_0(VAR_5->FilePath.Buffer != ((void*)0));
    FUNC_0(VAR_5->RegistryPath.Buffer != ((void*)0));

    for (VAR_7 = VAR_4->Flink;
         VAR_7 != VAR_4;
         VAR_7 = VAR_7->Flink)
    {
        VAR_6 = FUNC_1(VAR_7,
                                        VAR_0,
                                        VAR_2);
        if ((VAR_6->FilePath.Buffer != ((void*)0)) &&
            FUNC_3(&VAR_5->FilePath,
                                  &VAR_6->FilePath,
                                  VAR_3))
        {
            return VAR_1;
        }

        if ((VAR_6->RegistryPath.Buffer != ((void*)0)) &&
            FUNC_3(&VAR_5->RegistryPath,
                                  &VAR_6->RegistryPath,
                                  VAR_3))
        {
            return VAR_1;
        }
    }

    FUNC_2(VAR_4, &VAR_5->Link);
    return VAR_3;
}
