
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ret_iface ;
typedef int iface ;
typedef int device ;
typedef char WCHAR ;
struct TYPE_13__ {int member_0; } ;
struct TYPE_12__ {int member_0; } ;
typedef TYPE_1__ SP_DEVINFO_DATA ;
typedef TYPE_2__ SP_DEVICE_INTERFACE_DATA ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef scalar_t__ HDEVINFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (scalar_t__,char*,int *,int *,int *,int ,TYPE_1__*) ;
 int FUNC_3 (scalar_t__,TYPE_1__*,int *,char*,int ,TYPE_2__*) ;
 int FUNC_4 (scalar_t__,TYPE_2__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,TYPE_1__*,int *,int,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int *,int *,int ,int ) ;
 int FUNC_8 (scalar_t__,TYPE_1__*,int ,int *,int *,int *) ;
 int FUNC_9 (scalar_t__,TYPE_1__*) ;
 int FUNC_10 (scalar_t__,TYPE_2__*) ;
 int FUNC_11 (scalar_t__,int *,int *,int,int ,char*) ;
 int VAR_5 ;
 int FUNC_12 (int,char*,...) ;

__attribute__((used)) static void FUNC_13(void)
{
    static const WCHAR VAR_6[] = {'S','y','s','t','e','m','\\',
     'C','u','r','r','e','n','t','C','o','n','t','r','o','l','S','e','t','\\',
     'E','n','u','m','\\','R','o','o','t','\\',
     'L','E','G','A','C','Y','_','B','O','G','U','S',0};
    SP_DEVICE_INTERFACE_DATA VAR_7 = {sizeof(VAR_7)}, VAR_8 = {sizeof(VAR_8)};
    SP_DEVINFO_DATA VAR_9 = {sizeof(VAR_9)};
    HDEVINFO VAR_10, VAR_11;
    BOOL VAR_12;
    HKEY VAR_13;
    LONG VAR_14;

    VAR_10 = FUNC_7(&VAR_5, ((void*)0), 0, VAR_0);
    FUNC_12(VAR_10 != VAR_4, "Failed to create device list, error %#x.\n", FUNC_0());

    VAR_14 = FUNC_1(VAR_3, VAR_6, &VAR_13);
    FUNC_12(VAR_14 == VAR_2, "Key should not exist.\n");

    VAR_12 = FUNC_2(VAR_10, "Root\\LEGACY_BOGUS\\0000", &VAR_5, ((void*)0), ((void*)0), 0, &VAR_9);
    FUNC_12(VAR_12, "Failed to create device, error %#x.\n", FUNC_0());
    VAR_12 = FUNC_3(VAR_10, &VAR_9, &VAR_5, ((void*)0), 0, &VAR_7);
    FUNC_12(VAR_12, "Failed to create interface, error %#x.\n", FUNC_0());
    VAR_12 = FUNC_3(VAR_10, &VAR_9, &VAR_5, "removed", 0, &VAR_7);
    FUNC_12(VAR_12, "Failed to create interface, error %#x.\n", FUNC_0());
    VAR_12 = FUNC_3(VAR_10, &VAR_9, &VAR_5, "deleted", 0, &VAR_7);
    FUNC_12(VAR_12, "Failed to create interface, error %#x.\n", FUNC_0());
    VAR_12 = FUNC_8(VAR_10, &VAR_9, 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_12(VAR_12, "Failed to register device, error %#x.\n", FUNC_0());

    VAR_12 = FUNC_6(VAR_10, &VAR_9, &VAR_5, 1, &VAR_7);
    FUNC_12(VAR_12, "Failed to enumerate interfaces, error %#x.\n", FUNC_0());
    VAR_12 = FUNC_10(VAR_10, &VAR_7);
    FUNC_12(VAR_12, "Failed to delete interface, error %#x.\n", FUNC_0());
    VAR_12 = FUNC_6(VAR_10, &VAR_9, &VAR_5, 2, &VAR_7);
    FUNC_12(VAR_12, "Failed to enumerate interfaces, error %#x.\n", FUNC_0());
    VAR_12 = FUNC_4(VAR_10, &VAR_7);
    FUNC_12(VAR_12, "Failed to delete interface, error %#x.\n", FUNC_0());

    VAR_11 = FUNC_7(&VAR_5, ((void*)0), 0, VAR_1);
    FUNC_12(VAR_11 != VAR_4, "Failed to create device list, error %#x.\n", FUNC_0());

    FUNC_11(VAR_11, ((void*)0), &VAR_5, 0, 0, "\\\\?\\root#legacy_bogus#0000#{6a55b5a4-3f65-11db-b704-0011955c2bdb}");
    FUNC_11(VAR_11, ((void*)0), &VAR_5, 1, 0, "\\\\?\\root#legacy_bogus#0000#{6a55b5a4-3f65-11db-b704-0011955c2bdb}\\deleted");
    FUNC_11(VAR_11, ((void*)0), &VAR_5, 2, 0, ((void*)0));

    VAR_12 = FUNC_9(VAR_10, &VAR_9);
    FUNC_12(VAR_12, "Failed to remove device, error %#x.\n", FUNC_0());

    FUNC_5(VAR_10);
    FUNC_5(VAR_11);
}
