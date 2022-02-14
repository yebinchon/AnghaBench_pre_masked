
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HANDLE ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(HANDLE VAR_0, WCHAR *VAR_1)
{
    static const WCHAR VAR_2[] = {'\r','\n','[','%','s',']','\r','\n',0};
    WCHAR *VAR_3;

    VAR_3 = FUNC_1((FUNC_2(VAR_1) + 7) * sizeof(WCHAR));
    FUNC_3(VAR_3, VAR_2, VAR_1);
    FUNC_4(VAR_0, VAR_3);
    FUNC_0(VAR_3);
}
