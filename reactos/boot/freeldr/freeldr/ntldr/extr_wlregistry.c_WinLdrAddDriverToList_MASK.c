
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef int USHORT ;
typedef int UNICODE_NULL ;
struct TYPE_6__ {int MaximumLength; TYPE_1__* Buffer; scalar_t__ Length; } ;
struct TYPE_5__ {TYPE_2__ RegistryPath; TYPE_2__ FilePath; int * LdrEntry; } ;
typedef scalar_t__* PWSTR ;
typedef TYPE_1__* PBOOT_DRIVER_LIST_ENTRY ;
typedef int NTSTATUS ;
typedef int LIST_ENTRY ;
typedef int BOOT_DRIVER_LIST_ENTRY ;
typedef int BOOLEAN ;


 int VAR_0 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__*) ;

BOOLEAN
FUNC_6(LIST_ENTRY *VAR_4,
                      PWSTR VAR_5,
                      PWSTR VAR_6,
                      PWSTR VAR_7)
{
    PBOOT_DRIVER_LIST_ENTRY VAR_8;
    NTSTATUS VAR_9;
    USHORT VAR_10;

    VAR_8 = FUNC_0(sizeof(BOOT_DRIVER_LIST_ENTRY), VAR_1);

    if (!VAR_8)
        return VAR_0;


    VAR_8->LdrEntry = ((void*)0);



    if (VAR_6 && (VAR_6[0] != 0))
    {

        VAR_10 = (USHORT)FUNC_5(VAR_6) * sizeof(WCHAR) + sizeof(UNICODE_NULL);

        VAR_8->FilePath.Length = 0;
        VAR_8->FilePath.MaximumLength = VAR_10;
        VAR_8->FilePath.Buffer = FUNC_0(VAR_10, VAR_2);

        if (!VAR_8->FilePath.Buffer)
        {
            FUNC_1(VAR_8, VAR_1);
            return VAR_0;
        }

        VAR_9 = FUNC_4(&VAR_8->FilePath, VAR_6);
        if (!FUNC_3(VAR_9))
        {
            FUNC_1(VAR_8->FilePath.Buffer, VAR_2);
            FUNC_1(VAR_8, VAR_1);
            return VAR_0;
        }
    }
    else
    {

        VAR_10 = (USHORT)FUNC_5(VAR_7)*sizeof(WCHAR) + sizeof(L"system32\\drivers\\.sys");
        VAR_8->FilePath.Length = 0;
        VAR_8->FilePath.MaximumLength = VAR_10;
        VAR_8->FilePath.Buffer = FUNC_0(VAR_10, VAR_2);

        if (!VAR_8->FilePath.Buffer)
        {
            FUNC_1(VAR_8, VAR_2);
            return VAR_0;
        }

        VAR_9 = FUNC_4(&VAR_8->FilePath, L"system32\\drivers\\");
        if (!FUNC_3(VAR_9))
        {
            FUNC_1(VAR_8->FilePath.Buffer, VAR_2);
            FUNC_1(VAR_8, VAR_2);
            return VAR_0;
        }

        VAR_9 = FUNC_4(&VAR_8->FilePath, VAR_7);
        if (!FUNC_3(VAR_9))
        {
            FUNC_1(VAR_8->FilePath.Buffer, VAR_2);
            FUNC_1(VAR_8, VAR_2);
            return VAR_0;
        }

        VAR_9 = FUNC_4(&VAR_8->FilePath, L".sys");
        if (!FUNC_3(VAR_9))
        {
            FUNC_1(VAR_8->FilePath.Buffer, VAR_2);
            FUNC_1(VAR_8, VAR_2);
            return VAR_0;
        }
    }


    VAR_10 = (USHORT)(FUNC_5(VAR_5) + FUNC_5(VAR_7))*sizeof(WCHAR) + sizeof(UNICODE_NULL);
    VAR_8->RegistryPath.Length = 0;
    VAR_8->RegistryPath.MaximumLength = VAR_10;
    VAR_8->RegistryPath.Buffer = FUNC_0(VAR_10, VAR_2);
    if (!VAR_8->RegistryPath.Buffer)
        return VAR_0;

    VAR_9 = FUNC_4(&VAR_8->RegistryPath, VAR_5);
    if (!FUNC_3(VAR_9))
        return VAR_0;

    VAR_9 = FUNC_4(&VAR_8->RegistryPath, VAR_7);
    if (!FUNC_3(VAR_9))
        return VAR_0;


    if (!FUNC_2(VAR_4, VAR_8))
    {

        if (VAR_8->FilePath.Buffer) FUNC_1(VAR_8->FilePath.Buffer, VAR_2);
        if (VAR_8->RegistryPath.Buffer) FUNC_1(VAR_8->RegistryPath.Buffer, VAR_2);
        FUNC_1(VAR_8, VAR_1);
    }

    return VAR_3;
}
