
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _TCHAR ;
typedef int WCHAR ;


 int FUNC_0 (int,int*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

int FUNC_6(const _TCHAR* VAR_1)
{
    WCHAR VAR_2[VAR_0];

    if (!FUNC_2(VAR_1))
    {
        FUNC_4(VAR_1 ? FUNC_1() : 0);
        return -1;
    }


    if (FUNC_0(VAR_0, VAR_2) >= 2)
    {
        if (VAR_2[1] == L':')
        {
            WCHAR VAR_3[4] = { L'=', FUNC_5(VAR_2[0]), L':', L'\0' };
            FUNC_3(VAR_3, VAR_2);
        }
    }

    return 0;
}
