
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int long_url ;
typedef int bufw ;
typedef int buf ;
typedef char WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 () ;
 int FUNC_1 (char*,int *,char*,int*) ;
 int FUNC_2 (char const*,int *,char*,int*) ;
 int FUNC_3 (char*,int *,char*) ;
 int FUNC_4 (char*,char,int) ;
 int FUNC_5 (int,char*,char*) ;
 int FUNC_6 (char*,int *,char*,int*,int ,int *) ;
 int FUNC_7 (char const*,int *,char*,int*,int ,int *) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    char VAR_2[5000] = "http://long.url.test.com/", *VAR_3;
    WCHAR VAR_4[512];
    char VAR_5[512];
    DWORD VAR_6;
    BOOL VAR_7;

    static const WCHAR VAR_8[] = {'a','b','o','u','t',':','b','l','a','n','k',0};

    VAR_6 = sizeof(VAR_5);
    VAR_7 = FUNC_1("about:blank", ((void*)0), VAR_5, &VAR_6);
    FUNC_5(!VAR_7 && FUNC_0() == VAR_0,
       "InternetGetCookeA failed: %u, expected ERROR_INVALID_PARAMETER\n", FUNC_0());

    VAR_6 = sizeof(VAR_4)/sizeof(*VAR_4);
    VAR_7 = FUNC_2(VAR_8, ((void*)0), VAR_4, &VAR_6);
    FUNC_5(!VAR_7 && FUNC_0() == VAR_0,
       "InternetGetCookeW failed: %u, expected ERROR_INVALID_PARAMETER\n", FUNC_0());

    VAR_6 = sizeof(VAR_5);
    VAR_7 = FUNC_6("about:blank", ((void*)0), VAR_5, &VAR_6, 0, ((void*)0));
    FUNC_5(!VAR_7 && FUNC_0() == VAR_0,
       "InternetGetCookeExA failed: %u, expected ERROR_INVALID_PARAMETER\n", FUNC_0());

    VAR_6 = sizeof(VAR_4)/sizeof(*VAR_4);
    VAR_7 = FUNC_7(VAR_8, ((void*)0), VAR_4, &VAR_6, 0, ((void*)0));
    FUNC_5(!VAR_7 && FUNC_0() == VAR_0,
       "InternetGetCookeExW failed: %u, expected ERROR_INVALID_PARAMETER\n", FUNC_0());

    VAR_3 = VAR_2 + FUNC_9(VAR_2);
    FUNC_4(VAR_3, 'x', VAR_2+sizeof(VAR_2)-VAR_3);
    VAR_3 += (VAR_2+sizeof(VAR_2)-VAR_3) - 3;
    VAR_3[0] = '/';
    VAR_3[2] = 0;
    VAR_7 = FUNC_3(VAR_2, ((void*)0), "A=B");
    FUNC_5(VAR_7, "InternetSetCookieA failed: %u\n", FUNC_0());

    VAR_6 = sizeof(VAR_5);
    VAR_7 = FUNC_1(VAR_2, ((void*)0), VAR_5, &VAR_6);
    FUNC_5(VAR_7, "InternetGetCookieA failed: %u\n", FUNC_0());
    FUNC_5(!FUNC_8(VAR_5, "A=B"), "buf = %s\n", VAR_5);

    VAR_6 = sizeof(VAR_5);
    VAR_7 = FUNC_1("http://long.url.test.com/", ((void*)0), VAR_5, &VAR_6);
    FUNC_5(!VAR_7 && FUNC_0() == VAR_1, "InternetGetCookieA failed: %u\n", FUNC_0());
}
