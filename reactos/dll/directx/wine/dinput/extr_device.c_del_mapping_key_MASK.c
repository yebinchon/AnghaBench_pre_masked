
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,char const*,char const*,char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(const WCHAR *VAR_1, const WCHAR *VAR_2, const WCHAR *VAR_3) {
    static const WCHAR VAR_4[] = {
        'S','o','f','t','w','a','r','e','\\',
        'W','i','n','e','\\',
        'D','i','r','e','c','t','I','n','p','u','t','\\',
        'M','a','p','p','i','n','g','s','\\','%','s','\\','%','s','\\','%','s','\0'};
    WCHAR *VAR_5;

    VAR_5 = FUNC_1(sizeof(WCHAR) * (FUNC_3(VAR_4) + FUNC_5(VAR_2) + FUNC_5(VAR_1) + FUNC_5(VAR_3)));
    FUNC_4(VAR_5, VAR_4, VAR_2, VAR_1, VAR_3);


    FUNC_0(VAR_0, VAR_5);

    FUNC_2(VAR_5);
}
