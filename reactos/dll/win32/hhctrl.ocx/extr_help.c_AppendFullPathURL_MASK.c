
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LPWSTR ;
typedef char* LPCWSTR ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,char*,int *) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char const*,char*,char const*,char*) ;

__attribute__((used)) static BOOL FUNC_7(LPCWSTR VAR_3, LPWSTR VAR_4, LPCWSTR VAR_5)
{
    static const WCHAR VAR_6[] =
        {'m','k',':','@','M','S','I','T','S','t','o','r','e',':','%','s',':',':','%','s','%','s',0};
    static const WCHAR VAR_7[] = {'/',0};
    static const WCHAR VAR_8[] = {0};
    WCHAR VAR_9[VAR_1];

    FUNC_3("%s %p %s\n", FUNC_5(VAR_3), VAR_4, FUNC_5(VAR_5));

    if (!FUNC_1(VAR_3, FUNC_0(VAR_9), VAR_9, ((void*)0))) {
        FUNC_4("GetFullPathName failed: %u\n", FUNC_2());
        return VAR_0;
    }

    FUNC_6(VAR_4, VAR_6, VAR_9, (!VAR_5 || VAR_5[0] == '/') ? VAR_8 : VAR_7, VAR_5);
    return VAR_2;
}
