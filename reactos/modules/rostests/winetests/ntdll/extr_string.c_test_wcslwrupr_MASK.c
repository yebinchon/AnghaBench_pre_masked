
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPWSTR ;


 int FUNC_0 (int,char*) ;
 char const* FUNC_1 (char*) ;
 char const* FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    static WCHAR VAR_0[] = {'a','b','r','a','c','a','d','a','b','r','a',0};
    static WCHAR VAR_1[] = {0};
    static const WCHAR VAR_2[] = {0};

    if (0)
    {
        static const WCHAR VAR_3[] = {'a','b','r','a','c','a','d','a','b','r','a',0};
        FUNC_0(FUNC_1((LPWSTR)VAR_3) == VAR_3, "p_wcslwr returned different string\n");
        FUNC_0(FUNC_2((LPWSTR)VAR_3) == VAR_3, "p_wcsupr returned different string\n");
        FUNC_0(FUNC_1(((void*)0)) == ((void*)0), "p_wcslwr didn't returned NULL\n");
        FUNC_0(FUNC_2(((void*)0)) == ((void*)0), "p_wcsupr didn't returned NULL\n");
    }
    FUNC_0(FUNC_1(VAR_0) == VAR_0, "p_wcslwr returned different string\n");
    FUNC_0(FUNC_2(VAR_0) == VAR_0, "p_wcsupr returned different string\n");
    FUNC_0(FUNC_1(VAR_1) == VAR_1, "p_wcslwr returned different string\n");
    FUNC_0(FUNC_2(VAR_1) == VAR_1, "p_wcsupr returned different string\n");
    FUNC_0(FUNC_1((LPWSTR)VAR_2) == VAR_2, "p_wcslwr returned different string\n");
    FUNC_0(FUNC_2((LPWSTR)VAR_2) == VAR_2, "p_wcsupr returned different string\n");
}
