
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;
typedef int LPCSTR ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(LPSTR VAR_3, LPCSTR VAR_4)
{
    int VAR_5, VAR_6;
    DWORD VAR_7, VAR_8;

    VAR_6 = FUNC_6(VAR_4);
    VAR_8 = FUNC_2();
    FUNC_4(VAR_3, "A:\\");
    for (VAR_5 = 0; VAR_5 < 26; VAR_3[0] = '\0', VAR_5++)
    {
        if (!(VAR_8 & (1 << VAR_5)))
            continue;

        VAR_3[0] = 'A' + VAR_5;
        if (FUNC_0(VAR_3) != VAR_0)
            continue;

        FUNC_5(VAR_3 + 3, VAR_4, VAR_6 + 1);
        VAR_7 = FUNC_1(VAR_3);
        if (VAR_7 != VAR_2 &&
            (VAR_7 & VAR_1))
        {
            if (VAR_3[3 + VAR_6 - 1] != '\\')
                FUNC_3(VAR_3, "\\");
            break;
        }
        VAR_3[3] = '\0';
    }
}
