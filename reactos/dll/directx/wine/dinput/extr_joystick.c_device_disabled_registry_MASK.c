
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef scalar_t__ HKEY ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char const*,scalar_t__*) ;
 int FUNC_2 (char*,char const*) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__*,scalar_t__*) ;
 int FUNC_4 (scalar_t__,scalar_t__,char const*,char*,int) ;
 int FUNC_5 (char const*,char*) ;

BOOL FUNC_6(const char* VAR_3)
{
    static const char VAR_4[] = "disabled";
    static const char VAR_5[] = "Joysticks";
    char VAR_6[VAR_1];
    HKEY VAR_7, VAR_8, VAR_9;
    BOOL VAR_10 = VAR_0;

    FUNC_3(&VAR_7, &VAR_8);


    if (VAR_8)
    {
        if (FUNC_1(VAR_8, VAR_5, &VAR_9)) VAR_9 = 0;
        FUNC_0(VAR_8);
        VAR_8 = VAR_9;
    }
    if (VAR_7)
    {
        if (FUNC_1(VAR_7, VAR_5, &VAR_9)) VAR_9 = 0;
        FUNC_0(VAR_7);
        VAR_7 = VAR_9;
    }


    if (!FUNC_4(VAR_7, VAR_8, VAR_3, VAR_6, sizeof(VAR_6)))
        if (!FUNC_5(VAR_4, VAR_6))
        {
            FUNC_2("Disabling joystick '%s' based on registry key.\n", VAR_3);
            VAR_10 = VAR_2;
        }

    if (VAR_8) FUNC_0(VAR_8);
    if (VAR_7) FUNC_0(VAR_7);

    return VAR_10;
}
