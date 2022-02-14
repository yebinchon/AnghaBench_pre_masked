
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XINPUT_KEYSTROKE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int *) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void)
{
    XINPUT_KEYSTROKE VAR_6;
    DWORD VAR_7;
    DWORD VAR_8;

    for(VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {
        FUNC_0(&VAR_6, sizeof(XINPUT_KEYSTROKE));

        VAR_8 = FUNC_2(VAR_7, VAR_4, &VAR_6);
        FUNC_1(VAR_8 == VAR_2 || VAR_8 == VAR_3 || VAR_8 == VAR_1,
           "XInputGetKeystroke failed with (%d)\n", VAR_8);

        if (VAR_1 == VAR_8)
        {
            FUNC_3("Controller %d is not connected\n", VAR_7);
        }
    }

    FUNC_0(&VAR_6, sizeof(XINPUT_KEYSTROKE));
    VAR_8 = FUNC_2(VAR_5+1, VAR_4, &VAR_6);
    FUNC_1(VAR_8 == VAR_0, "XInputGetKeystroke returned (%d)\n", VAR_8);
}
