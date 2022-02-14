
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 size_t FUNC_2 (char const*) ;
 size_t FUNC_3 (char*,char const*,scalar_t__) ;
 int FUNC_4 (int ,char const*) ;

__attribute__((used)) static size_t FUNC_5(HANDLE VAR_1, DWORD VAR_2)
{
    static const WCHAR VAR_3[] = {'h','e','x',':',0};
    static const WCHAR VAR_4[] = {'h','e','x','(','%','x',')',':',0};
    size_t VAR_5;

    if (VAR_2 == VAR_0)
    {
        VAR_5 = FUNC_2(VAR_3);
        FUNC_4(VAR_1, VAR_3);
    }
    else
    {
        WCHAR *VAR_6 = FUNC_1(15 * sizeof(WCHAR));
        VAR_5 = FUNC_3(VAR_6, VAR_4, VAR_2);
        FUNC_4(VAR_1, VAR_6);
        FUNC_0(VAR_6);
    }

    return VAR_5;
}
