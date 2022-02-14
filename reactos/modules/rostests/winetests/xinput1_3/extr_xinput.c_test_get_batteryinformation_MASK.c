
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ BatteryLevel; } ;
typedef TYPE_1__ XINPUT_BATTERY_INFORMATION ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,TYPE_1__*) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void)
{
    DWORD VAR_6;
    DWORD VAR_7;
    XINPUT_BATTERY_INFORMATION VAR_8;

    for(VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    {
        FUNC_0(&VAR_8, sizeof(XINPUT_BATTERY_INFORMATION));

        VAR_7 = FUNC_2(VAR_6, VAR_0, &VAR_8);
        FUNC_1(VAR_7 == VAR_4 || VAR_7 == VAR_3, "XInputGetBatteryInformation failed with (%d)\n", VAR_7);

        if (VAR_3 == VAR_7)
        {
            FUNC_1(VAR_8.BatteryLevel == VAR_1, "Failed to report device as being disconnected.\n");
            FUNC_3("Controller %d is not connected\n", VAR_6);
        }
    }

    VAR_7 = FUNC_2(VAR_5+1, VAR_0, &VAR_8);
    FUNC_1(VAR_7 == VAR_2, "XInputGetBatteryInformation returned (%d)\n", VAR_7);
}
