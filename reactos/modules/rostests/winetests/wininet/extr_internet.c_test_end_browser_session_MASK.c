
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (char*,int *,int *,scalar_t__*) ;
 int FUNC_2 (char*,int *,char*) ;
 int FUNC_3 (int *,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    DWORD VAR_3;
    BOOL VAR_4;

    VAR_4 = FUNC_2("http://www.example.com/test_end", ((void*)0), "A=B");
    FUNC_4(VAR_4 == VAR_2, "InternetSetCookie failed\n");

    VAR_3 = 1024;
    VAR_4 = FUNC_1("http://www.example.com/test_end", ((void*)0), ((void*)0), &VAR_3);
    FUNC_4(VAR_4 == VAR_2,"InternetGetCookie failed\n");
    FUNC_4(VAR_3 != 0, "len = 0\n");

    VAR_4 = FUNC_3(((void*)0), VAR_1, ((void*)0), 0);
    FUNC_4(VAR_4, "InternetSetOption(INTERNET_OPTION_END_BROWSER_SESSION) failed: %u\n", FUNC_0());

    VAR_3 = 1024;
    VAR_4 = FUNC_1("http://www.example.com/test_end", ((void*)0), ((void*)0), &VAR_3);
    FUNC_4(!VAR_4 && FUNC_0() == VAR_0, "InternetGetCookie returned %x (%u)\n", VAR_4, FUNC_0());
    FUNC_4(!VAR_3, "len = %u\n", VAR_3);
}
