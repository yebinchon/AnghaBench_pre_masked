
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 int ** FUNC_0 () ;
 char const** FUNC_1 () ;
 int FUNC_2 (int*,char***,char***,int ,int*) ;
 int FUNC_3 (int,char*,int,int) ;
 int FUNC_4 (char*,char const*) ;

void
FUNC_5(const wchar_t* VAR_0, const wchar_t* VAR_1, const wchar_t* VAR_2, const wchar_t* VAR_3)
{
    int VAR_4 = 0, VAR_5 = 0;
    int VAR_6 = VAR_3 == ((void*)0) ? (VAR_2 == ((void*)0) ? 2 : 3) : 4;
    wchar_t** VAR_7, **VAR_8;


    *FUNC_0() = ((void*)0);
    *FUNC_1() = VAR_0;


    FUNC_2(&VAR_4, &VAR_7, &VAR_8, 0, &VAR_5);

    FUNC_3(VAR_4 == VAR_6, "Wrong value for argc, expected: %d, got: %d\n", VAR_6, VAR_4);
    if(VAR_4 != VAR_6)
        return;

    FUNC_4(VAR_7[0], L"test.exe");
    FUNC_4(VAR_7[1], VAR_1);
    if (VAR_6 > 2)
    {
        FUNC_4(VAR_7[2], VAR_2);
        if (VAR_6 > 3)
            FUNC_4(VAR_7[3], VAR_3);
    }
}
