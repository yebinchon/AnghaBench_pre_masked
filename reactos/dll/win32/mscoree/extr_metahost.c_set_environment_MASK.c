
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path_env ;
typedef char WCHAR ;
typedef int LPCWSTR ;


 int FUNC_0 (char const*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(LPCWSTR VAR_1)
{
    WCHAR VAR_2[VAR_0];
    int VAR_3;

    static const WCHAR VAR_4[] = {'P','A','T','H',0};


    FUNC_0(VAR_4, VAR_2, sizeof(VAR_2)/sizeof(WCHAR));
    VAR_3 = FUNC_3(VAR_2);
    VAR_2[VAR_3++] = ';';
    FUNC_2(VAR_2+VAR_3, VAR_1);
    FUNC_1(VAR_4, VAR_2);
}
