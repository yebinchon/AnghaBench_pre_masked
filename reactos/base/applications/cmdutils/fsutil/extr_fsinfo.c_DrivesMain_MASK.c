
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int TCHAR ;
typedef int DWORD ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,...) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_5(int VAR_1, const TCHAR *VAR_2[])
{
    UINT VAR_3;
    DWORD VAR_4;


    VAR_4 = FUNC_1();
    if (VAR_4 == 0)
    {
        FUNC_2(FUNC_0());
        return 1;
    }


    FUNC_4(VAR_0, FUNC_3("Drives:"));
    for (VAR_3 = 0; VAR_3 < 26; VAR_3++)
    {
        if (VAR_4 & (1 << VAR_3))
        {
            FUNC_4(VAR_0, FUNC_3(" %c:\\"), 'A' + VAR_3);
        }
    }
    FUNC_4(VAR_0, FUNC_3("\n"));

    return 0;
}
