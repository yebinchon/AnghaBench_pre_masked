
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int disp ;
typedef int devinfo ;
struct TYPE_11__ {int cb; int DeviceID; } ;
struct TYPE_8__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_10__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
struct TYPE_9__ {int cbSize; } ;
typedef TYPE_2__ SP_DEVINFO_DATA ;
typedef scalar_t__ HDEVINFO ;
typedef TYPE_3__ GUID ;
typedef TYPE_4__ DISPLAY_DEVICEA ;
typedef int BOOL ;


 int FUNC_0 (int *,int ,TYPE_4__*,int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_6 (int,char*,int ) ;

__attribute__((used)) static void FUNC_7(void)
{
    static GUID VAR_1 = {0x4d36e968, 0xe325, 0x11ce, {0xbf,0xc1,0x08,0x00,0x2b,0xe1,0x03,0x18}};
    SP_DEVINFO_DATA VAR_2;
    DISPLAY_DEVICEA VAR_3;
    HDEVINFO VAR_4;
    BOOL VAR_5;

    VAR_3.cb = sizeof(VAR_3);
    FUNC_6(FUNC_0(((void*)0), 0, &VAR_3, 0), "EnumDisplayDevices failed: %08x\n", FUNC_1());

    FUNC_2(0xdeadbeef);
    VAR_4 = FUNC_5(&VAR_1, VAR_3.DeviceID, 0, 0);
    FUNC_6(VAR_4 != VAR_0, "SetupDiGetClassDevsA failed: %08x\n", FUNC_1());

    VAR_2.cbSize = sizeof(VAR_2);
    VAR_5 = FUNC_4(VAR_4, 0, &VAR_2);
    FUNC_6(VAR_5, "SetupDiEnumDeviceInfo failed: %08x\n", FUNC_1());

    FUNC_3(VAR_4);
}
