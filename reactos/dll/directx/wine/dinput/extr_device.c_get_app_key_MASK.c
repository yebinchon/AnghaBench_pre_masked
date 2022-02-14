
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,scalar_t__*) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,char) ;

BOOL FUNC_5(HKEY *VAR_2, HKEY *VAR_3)
{
    char VAR_4[VAR_1+16];
    DWORD VAR_5;

    *VAR_3 = 0;


    if (FUNC_2(VAR_0, "Software\\Wine\\DirectInput", VAR_2))
        *VAR_2 = 0;

    VAR_5 = FUNC_0(0, VAR_4, VAR_1);
    if (VAR_5 && VAR_5 < VAR_1)
    {
        HKEY VAR_6;


        if (!FUNC_2(VAR_0, "Software\\Wine\\AppDefaults", &VAR_6))
        {
            char *VAR_7, *VAR_8 = VAR_4;
            if ((VAR_7 = FUNC_4(VAR_8, '/'))) VAR_8 = VAR_7 + 1;
            if ((VAR_7 = FUNC_4(VAR_8, '\\'))) VAR_8 = VAR_7 + 1;
            FUNC_3(VAR_8, "\\DirectInput");

            if (FUNC_2(VAR_6, VAR_8, VAR_3)) *VAR_3 = 0;
            FUNC_1(VAR_6);
        }
    }

    return *VAR_2 || *VAR_3;
}
