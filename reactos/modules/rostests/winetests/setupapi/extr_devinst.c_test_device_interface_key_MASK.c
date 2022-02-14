
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int iface ;
typedef int devinfo ;
typedef int buffer ;
struct TYPE_11__ {int member_0; } ;
struct TYPE_10__ {int member_0; } ;
typedef TYPE_1__ SP_DEVINFO_DATA ;
typedef TYPE_2__ SP_DEVICE_INTERFACE_DATA ;
typedef int LONG ;
typedef scalar_t__ HKEY ;
typedef scalar_t__ HDEVINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char const*,scalar_t__*) ;
 int FUNC_3 (scalar_t__,int *,char*,int*) ;
 int FUNC_4 (scalar_t__,int *,int ,char*,int) ;
 int FUNC_5 (scalar_t__,char*,int *,int *,int *,int ,TYPE_1__*) ;
 int FUNC_6 (scalar_t__,TYPE_1__*,int *,int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_7 (scalar_t__,TYPE_2__*,int ,int ,int *,int *) ;
 int FUNC_8 (scalar_t__,TYPE_2__*,int ) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int *,int *,int ,int ) ;
 int FUNC_11 (scalar_t__,TYPE_1__*) ;
 int FUNC_12 (scalar_t__,TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 (char*,char*) ;

__attribute__((used)) static void FUNC_15(void)
{
    const char VAR_7[] = "System\\CurrentControlSet\\Control\\DeviceClasses\\"
        "{6a55b5a4-3f65-11db-b704-0011955c2bdb}\\"
        "##?#ROOT#LEGACY_BOGUS#0001#{6a55b5a4-3f65-11db-b704-0011955c2bdb}";
    SP_DEVICE_INTERFACE_DATA VAR_8 = { sizeof(VAR_8) };
    SP_DEVINFO_DATA VAR_9 = { sizeof(VAR_9) };
    HKEY VAR_10, VAR_11, VAR_12;
    char VAR_13[5];
    HDEVINFO VAR_14;
    LONG VAR_15, VAR_16;

    VAR_14 = FUNC_10(((void*)0), ((void*)0), 0, VAR_0);
    FUNC_13(VAR_14 != VAR_3, "SetupDiGetClassDevs failed: %#x\n", FUNC_0());

    VAR_16 = FUNC_5(VAR_14, "ROOT\\LEGACY_BOGUS\\0001", &VAR_6, ((void*)0), ((void*)0), 0, &VAR_9);
    FUNC_13(VAR_16, "SetupDiCreateDeviceInfo failed: %#x\n", FUNC_0());

    VAR_16 = FUNC_6(VAR_14, &VAR_9, &VAR_6, ((void*)0), 0, &VAR_8);
    FUNC_13(VAR_16, "SetupDiCreateDeviceInterface failed: %#x\n", FUNC_0());

    VAR_16 = FUNC_2(VAR_2, VAR_7, &VAR_10);
    FUNC_13(!VAR_16, "failed to open device parent key: %u\n", VAR_16);

    VAR_16 = FUNC_2(VAR_10, "#\\Device Parameters", &VAR_11);
    FUNC_13(VAR_16 == VAR_1, "key shouldn't exist\n");

    VAR_12 = FUNC_7(VAR_14, &VAR_8, 0, VAR_4, ((void*)0), ((void*)0));
    FUNC_13(VAR_12 != VAR_3, "got error %u\n", FUNC_0());

    VAR_16 = FUNC_2(VAR_10, "#\\Device Parameters", &VAR_11);
    FUNC_13(!VAR_16, "key should exist: %u\n", VAR_16);

    VAR_16 = FUNC_4(VAR_11, ((void*)0), VAR_5, "test", 5);
    VAR_15 = sizeof(VAR_13);
    VAR_16 = FUNC_3(VAR_12, ((void*)0), VAR_13, &VAR_15);
    FUNC_13(!VAR_16, "RegQueryValue failed: %u\n", VAR_16);
    FUNC_13(!FUNC_14(VAR_13, "test"), "got wrong data %s\n", VAR_13);

    FUNC_1(VAR_12);
    FUNC_1(VAR_11);

    VAR_16 = FUNC_8(VAR_14, &VAR_8, 0);
    FUNC_13(VAR_16, "got error %u\n", FUNC_0());

    VAR_16 = FUNC_2(VAR_10, "#\\Device Parameters", &VAR_11);
    FUNC_13(VAR_16 == VAR_1, "key shouldn't exist\n");

    FUNC_1(VAR_10);
    FUNC_12(VAR_14, &VAR_8);
    FUNC_11(VAR_14, &VAR_9);
    FUNC_9(VAR_14);
}
