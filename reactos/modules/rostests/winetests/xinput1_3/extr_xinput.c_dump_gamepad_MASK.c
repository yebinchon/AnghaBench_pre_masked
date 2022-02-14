
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sThumbRY; int sThumbRX; int sThumbLY; int sThumbLX; int bRightTrigger; int bLeftTrigger; int wButtons; } ;
typedef TYPE_1__ XINPUT_GAMEPAD ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(XINPUT_GAMEPAD *VAR_0)
{
    FUNC_0("-- Gamepad Variables --\n");
    FUNC_0("Gamepad.wButtons: %#x\n", VAR_0->wButtons);
    FUNC_0("Gamepad.bLeftTrigger: %d\n", VAR_0->bLeftTrigger);
    FUNC_0("Gamepad.bRightTrigger: %d\n", VAR_0->bRightTrigger);
    FUNC_0("Gamepad.sThumbLX: %d\n", VAR_0->sThumbLX);
    FUNC_0("Gamepad.sThumbLY: %d\n", VAR_0->sThumbLY);
    FUNC_0("Gamepad.sThumbRX: %d\n", VAR_0->sThumbRX);
    FUNC_0("Gamepad.sThumbRY: %d\n\n", VAR_0->sThumbRY);
}
