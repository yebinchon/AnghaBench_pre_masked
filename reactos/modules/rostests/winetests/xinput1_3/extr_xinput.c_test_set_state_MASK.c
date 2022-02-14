
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wLeftMotorSpeed; int wRightMotorSpeed; } ;
typedef TYPE_1__ XINPUT_VIBRATION ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(void)
{
    XINPUT_VIBRATION VAR_4;
    DWORD VAR_5;
    DWORD VAR_6;

    for(VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
    {
        FUNC_1(&VAR_4, sizeof(XINPUT_VIBRATION));

        VAR_4.wLeftMotorSpeed = 32767;
        VAR_4.wRightMotorSpeed = 32767;
        VAR_6 = FUNC_4(VAR_5, &VAR_4);
        if (VAR_6 == VAR_1) continue;

        FUNC_0(250);
        VAR_4.wLeftMotorSpeed = 0;
        VAR_4.wRightMotorSpeed = 0;
        VAR_6 = FUNC_4(VAR_5, &VAR_4);
        FUNC_2(VAR_6 == VAR_2, "XInputSetState failed with (%d)\n", VAR_6);




        if (&FUNC_3) FUNC_3(0);

        FUNC_0(250);
        VAR_4.wLeftMotorSpeed = 65535;
        VAR_4.wRightMotorSpeed = 65535;
        VAR_6 = FUNC_4(VAR_5, &VAR_4);
        FUNC_2(VAR_6 == VAR_2, "XInputSetState failed with (%d)\n", VAR_6);

        if (&FUNC_3) FUNC_3(1);
        FUNC_0(250);

        VAR_4.wLeftMotorSpeed = 0;
        VAR_4.wRightMotorSpeed = 0;
        VAR_6 = FUNC_4(VAR_5, &VAR_4);
        FUNC_2(VAR_6 == VAR_2, "XInputSetState failed with (%d)\n", VAR_6);
    }

    VAR_6 = FUNC_4(VAR_3+1, &VAR_4);
    FUNC_2(VAR_6 == VAR_0, "XInputSetState returned (%d)\n", VAR_6);
}
