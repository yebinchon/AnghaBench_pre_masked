
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 char* FUNC_0 (char*,size_t,size_t*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*,char*) ;

__attribute__((used)) static void FUNC_4(WCHAR **VAR_0, WCHAR *VAR_1, size_t VAR_2)
{
    size_t VAR_3 = 0, VAR_4;
    WCHAR *VAR_5;
    static const WCHAR VAR_6[] = {'"','%','s','"',0};

    if (VAR_2)
        VAR_3 = VAR_2 / sizeof(WCHAR) - 1;
    VAR_5 = FUNC_0(VAR_1, VAR_3, &VAR_4);
    *VAR_0 = FUNC_2((VAR_4 + 3) * sizeof(WCHAR));
    FUNC_3(*VAR_0, VAR_6, VAR_5);
    FUNC_1(VAR_5);
}
