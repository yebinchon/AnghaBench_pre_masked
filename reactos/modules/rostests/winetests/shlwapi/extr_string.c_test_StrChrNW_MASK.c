
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPWSTR ;


 int FUNC_0 (int,char*) ;
 char* FUNC_1 (char const*,char,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    static const WCHAR VAR_0[] = {'T','e','s','t','i','n','g',' ','S','t','r','i','n','g',0};
    LPWSTR VAR_1;

    if (!&FUNC_1)
    {
        FUNC_2("StrChrNW not available\n");
        return;
    }

    VAR_1 = FUNC_1(VAR_0,'t',10);
    FUNC_0(*VAR_1=='t',"Found wrong 't'\n");
    FUNC_0(*(VAR_1+1)=='i',"next should be 'i'\n");

    VAR_1 = FUNC_1(VAR_0,'S',10);
    FUNC_0(*VAR_1=='S',"Found wrong 'S'\n");

    VAR_1 = FUNC_1(VAR_0,'r',10);
    FUNC_0(VAR_1==((void*)0),"Should not have found 'r'\n");
}
