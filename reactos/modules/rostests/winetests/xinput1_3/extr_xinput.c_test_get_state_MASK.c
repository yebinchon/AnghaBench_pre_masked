
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int state ;
struct TYPE_8__ {int sThumbRY; int sThumbRX; int sThumbLY; int sThumbLX; int bRightTrigger; int bLeftTrigger; int wButtons; } ;
struct TYPE_7__ {int dwPacketNumber; TYPE_2__ Gamepad; } ;
typedef TYPE_1__ XINPUT_STATE ;
typedef TYPE_2__ XINPUT_GAMEPAD ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int,TYPE_1__*) ;
 int FUNC_6 (int,TYPE_1__*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_9(void)
{
    XINPUT_STATE VAR_5;
    DWORD VAR_6, VAR_7, VAR_8, VAR_9 = VAR_3;

    for (VAR_7 = 0; VAR_7 < (&FUNC_6 ? 2 : 1); VAR_7++)
    {
        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
        {
            FUNC_2(&VAR_5, sizeof(VAR_5));

            if (VAR_7 == 0)
                VAR_8 = FUNC_5(VAR_6, &VAR_5);
            else
                VAR_8 = FUNC_6(VAR_6, &VAR_5);
            FUNC_4(VAR_8 == VAR_2 || VAR_8 == VAR_1,
               "%s failed with (%d)\n", VAR_7 == 0 ? "XInputGetState" : "XInputGetStateEx", VAR_8);

            if (VAR_1 == VAR_8)
            {
                FUNC_7("Controller %d is not connected\n", VAR_6);
                continue;
            }

            FUNC_8("-- Results for controller %d --\n", VAR_6);
            if (VAR_7 == 0)
            {
                VAR_9 = VAR_6;
                FUNC_8("XInputGetState: %d\n", VAR_8);
            }
            else
                FUNC_8("XInputGetStateEx: %d\n", VAR_8);
            FUNC_8("State->dwPacketNumber: %d\n", VAR_5.dwPacketNumber);
            FUNC_3(&VAR_5.Gamepad);
        }
    }

    VAR_8 = FUNC_5(VAR_3, &VAR_5);
    FUNC_4(VAR_8 == VAR_0, "XInputGetState returned (%d)\n", VAR_8);

    VAR_8 = FUNC_5(VAR_3+1, &VAR_5);
    FUNC_4(VAR_8 == VAR_0, "XInputGetState returned (%d)\n", VAR_8);
    if (&FUNC_6)
    {
        VAR_8 = FUNC_6(VAR_3, &VAR_5);
        FUNC_4(VAR_8 == VAR_0, "XInputGetState returned (%d)\n", VAR_8);

        VAR_8 = FUNC_6(VAR_3+1, &VAR_5);
        FUNC_4(VAR_8 == VAR_0, "XInputGetState returned (%d)\n", VAR_8);
    }

    if (VAR_4 && VAR_9 < VAR_3)
    {
        DWORD VAR_10 = FUNC_0(), VAR_11 = 0;
        XINPUT_GAMEPAD *VAR_12 = &VAR_5.Gamepad;

        FUNC_8("You have 20 seconds to test the joystick freely\n");
        do
        {
            FUNC_1(100);
            FUNC_5(VAR_9, &VAR_5);
            if (VAR_5.dwPacketNumber == VAR_11)
                continue;

            VAR_11 = VAR_5.dwPacketNumber;
            FUNC_8("Buttons 0x%04X Triggers %3d/%3d LT %6d/%6d RT %6d/%6d\n",
                  VAR_12->wButtons, VAR_12->bLeftTrigger, VAR_12->bRightTrigger,
                  VAR_12->sThumbLX, VAR_12->sThumbLY, VAR_12->sThumbRX, VAR_12->sThumbRY);
        }
        while(FUNC_0() - VAR_10 < 20000);
        FUNC_8("Test over...\n");
    }
}
