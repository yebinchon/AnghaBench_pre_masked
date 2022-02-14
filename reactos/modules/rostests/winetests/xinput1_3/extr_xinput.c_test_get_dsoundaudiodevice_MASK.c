
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_8__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
typedef TYPE_2__ GUID ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    DWORD VAR_4;
    DWORD VAR_5;
    GUID VAR_6, VAR_7;
    GUID VAR_8 = {0xFFFFFFFF, 0xFFFF, 0xFFFF, {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF}};
    GUID VAR_9 = {0x0, 0x0, 0x0, {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}};

    for(VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
        VAR_6 = VAR_7 = VAR_8;
        VAR_5 = FUNC_2(VAR_4, &VAR_6, &VAR_7);
        FUNC_1(VAR_5 == VAR_2 || VAR_5 == VAR_1, "XInputGetDSoundAudioDeviceGuids failed with (%d)\n", VAR_5);

        if (VAR_1 == VAR_5)
        {
            FUNC_3("Controller %d is not connected\n", VAR_4);
            continue;
        }

        if (!FUNC_0(&VAR_6, &VAR_9))
            FUNC_1(!FUNC_0(&VAR_6, &VAR_8), "Broken GUID returned for sound render device\n");
        else
            FUNC_4("Headset phone not attached\n");

        if (!FUNC_0(&VAR_7, &VAR_9))
            FUNC_1(!FUNC_0(&VAR_7, &VAR_8), "Broken GUID returned for sound capture device\n");
        else
            FUNC_4("Headset microphone not attached\n");
    }

    VAR_5 = FUNC_2(VAR_3+1, &VAR_6, &VAR_7);
    FUNC_1(VAR_5 == VAR_0, "XInputGetDSoundAudioDeviceGuids returned (%d)\n", VAR_5);
}
