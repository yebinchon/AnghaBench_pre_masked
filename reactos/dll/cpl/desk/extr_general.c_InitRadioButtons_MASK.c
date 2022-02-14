
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int TCHAR ;
typedef int LPBYTE ;
typedef int HWND ;
typedef int HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *,int ,int*) ;
 int FUNC_3 (int ,int ,int ,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static VOID
FUNC_6(HWND VAR_7)
{
    HKEY VAR_8;

    if (FUNC_1(VAR_2,
                     FUNC_4("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Controls Folder\\Display"),
                     0, VAR_6, &VAR_8) == VAR_1)
    {
        TCHAR VAR_9[64];
        DWORD VAR_10 = 64;

        if (FUNC_2(VAR_8, FUNC_4("DynaSettingsChange"), 0, ((void*)0),
                            (LPBYTE)VAR_9, &VAR_10) == VAR_1)
        {
            switch (FUNC_5(VAR_9))
            {
                case 0:
                    FUNC_3(VAR_7, VAR_4, VAR_0, 1, 1);
                    break;
                case 1:
                    FUNC_3(VAR_7, VAR_5, VAR_0, 1, 1);
                    break;
                case 3:
                    FUNC_3(VAR_7, VAR_3, VAR_0, 1, 1);
                    break;
            }
        }
        else
            FUNC_3(VAR_7, VAR_5, VAR_0, 1, 1);

        FUNC_0(VAR_8);
    }
    else
        FUNC_3(VAR_7, VAR_5, VAR_0, 1, 1);
}
