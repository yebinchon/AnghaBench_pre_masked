
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ HKEY ;
typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,char*,scalar_t__*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,char const*,char const*,char const*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static HKEY FUNC_8(const WCHAR *VAR_1, const WCHAR *VAR_2, const WCHAR *VAR_3, BOOL VAR_4)
{
    static const WCHAR VAR_5[] = {
        'S','o','f','t','w','a','r','e','\\',
        'W','i','n','e','\\',
        'D','i','r','e','c','t','I','n','p','u','t','\\',
        'M','a','p','p','i','n','g','s','\\','%','s','\\','%','s','\\','%','s','\0'};
    HKEY VAR_6;
    WCHAR *VAR_7;

    VAR_7 = FUNC_1(FUNC_0(), 0,
        sizeof(WCHAR) * (FUNC_5(VAR_5) + FUNC_7(VAR_2) + FUNC_7(VAR_1) + FUNC_7(VAR_3)));
    FUNC_6(VAR_7, VAR_5, VAR_2, VAR_1, VAR_3);


    if (VAR_4) {
        if (FUNC_3(VAR_0, VAR_7, &VAR_6))
            VAR_6 = 0;
    } else if (FUNC_4(VAR_0, VAR_7, &VAR_6))
            VAR_6 = 0;

    FUNC_2(FUNC_0(), 0, VAR_7);

    return VAR_6;
}
