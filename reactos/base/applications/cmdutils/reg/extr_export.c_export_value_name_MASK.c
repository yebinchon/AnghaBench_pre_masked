
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HANDLE ;


 char* FUNC_0 (char*,size_t,size_t*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 size_t FUNC_3 (char const*) ;
 size_t FUNC_4 (char*,char const*,char*) ;
 int FUNC_5 (int ,char const*) ;

__attribute__((used)) static size_t FUNC_6(HANDLE VAR_0, WCHAR *VAR_1, size_t VAR_2)
{
    static const WCHAR VAR_3[] = {'"','%','s','"','=',0};
    static const WCHAR VAR_4[] = {'@','=',0};
    size_t VAR_5;

    if (VAR_1 && *VAR_1)
    {
        WCHAR *VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_5);
        WCHAR *VAR_7 = FUNC_2((VAR_5 + 4) * sizeof(WCHAR));
        VAR_5 = FUNC_4(VAR_7, VAR_3, VAR_6);
        FUNC_5(VAR_0, VAR_7);
        FUNC_1(VAR_7);
        FUNC_1(VAR_6);
    }
    else
    {
        VAR_5 = FUNC_3(VAR_4);
        FUNC_5(VAR_0, VAR_4);
    }

    return VAR_5;
}
