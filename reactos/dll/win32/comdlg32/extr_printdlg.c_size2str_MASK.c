
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pagesetup_data ;
typedef char WCHAR ;
typedef int LPWSTR ;
typedef int DWORD ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int ,char const*,int,...) ;

__attribute__((used)) static void FUNC_3(const pagesetup_data *VAR_0, DWORD VAR_1, LPWSTR VAR_2)
{
    static const WCHAR VAR_3[] = {'%','d',0};
    static const WCHAR VAR_4[] = {'%','d','%','c','%','0','2','d',0};
    static const WCHAR VAR_5[] = {'%','d','%','c','%','0','3','d',0};



    if (FUNC_1(VAR_0))
    {
        if(VAR_1 % 100)
            FUNC_2(VAR_2, VAR_4, VAR_1 / 100, FUNC_0(), VAR_1 % 100);
        else
            FUNC_2(VAR_2, VAR_3, VAR_1 / 100);
    }
    else
    {
        if(VAR_1 % 1000)
            FUNC_2(VAR_2, VAR_5, VAR_1 / 1000, FUNC_0(), VAR_1 % 1000);
        else
            FUNC_2(VAR_2, VAR_3, VAR_1 / 1000);

    }
}
