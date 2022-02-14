
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Gamepad; } ;
typedef TYPE_1__ XINPUT_CAPABILITIES ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,TYPE_1__*) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
    XINPUT_CAPABILITIES VAR_5;
    DWORD VAR_6;
    DWORD VAR_7;

    for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    {
        FUNC_0(&VAR_5, sizeof(XINPUT_CAPABILITIES));

        VAR_7 = FUNC_3(VAR_6, VAR_3, &VAR_5);
        FUNC_2(VAR_7 == VAR_2 || VAR_7 == VAR_1, "XInputGetCapabilities failed with (%d)\n", VAR_7);

        if (VAR_1 == VAR_7)
        {
            FUNC_4("Controller %d is not connected\n", VAR_6);
            continue;
        }


        FUNC_1(&VAR_5.Gamepad);
    }

    FUNC_0(&VAR_5, sizeof(XINPUT_CAPABILITIES));
    VAR_7 = FUNC_3(VAR_4+1, VAR_3, &VAR_5);
    FUNC_2(VAR_7 == VAR_0, "XInputGetCapabilities returned (%d)\n", VAR_7);
}
