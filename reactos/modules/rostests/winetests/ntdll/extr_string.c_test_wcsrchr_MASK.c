
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (int,char*) ;
 char const* FUNC_1 (char const*,char) ;

__attribute__((used)) static void FUNC_2(void)
{
    static const WCHAR VAR_0[] = {'a','b','r','a','c','a','d','a','b','r','a',0};

    FUNC_0(FUNC_1(VAR_0, 'a') == VAR_0 + 10,
       "wcsrchr should have returned a pointer to the last 'a' character\n");
    FUNC_0(FUNC_1(VAR_0, 0) == VAR_0 + 11,
       "wcsrchr should have returned a pointer to the null terminator\n");
    FUNC_0(FUNC_1(VAR_0, 'x') == ((void*)0),
       "wcsrchr should have returned NULL\n");
}
