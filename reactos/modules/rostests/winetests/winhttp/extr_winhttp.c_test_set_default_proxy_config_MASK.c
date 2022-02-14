
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwAccessType; int* lpszProxy; int* lpszProxyBypass; } ;
typedef TYPE_1__ WINHTTP_PROXY_INFO ;
typedef int WCHAR ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int *,scalar_t__,scalar_t__) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    static WCHAR VAR_4[] = { 0x226f, 0x575b, 0 };
    static WCHAR VAR_5[] = { 'f','o','o',0 };
    DWORD VAR_6, VAR_7;
    BYTE *VAR_8 = ((void*)0);
    WINHTTP_PROXY_INFO VAR_9;
    BOOL VAR_10;
    VAR_7 = FUNC_6( ((void*)0), 0, &VAR_6 );
    if (VAR_7)
    {
        VAR_8 = FUNC_2( FUNC_1(), 0, VAR_7 );
        VAR_7 = FUNC_6( VAR_8, VAR_7, &VAR_6 );
    }

    if (0)
    {

        FUNC_3(0xdeadbeef);
        VAR_10 = FUNC_4(((void*)0));
        FUNC_7(!VAR_10 && FUNC_0() == VAR_1,
            "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());
    }


    VAR_9.dwAccessType = 0xdeadbeef;
    VAR_9.lpszProxy = VAR_9.lpszProxyBypass = ((void*)0);
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_4(&VAR_9);
    FUNC_7(!VAR_10 && FUNC_0() == VAR_1,
        "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());


    VAR_9.dwAccessType = VAR_3;
    VAR_9.lpszProxy = VAR_9.lpszProxyBypass = ((void*)0);
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_4(&VAR_9);
    FUNC_7(!VAR_10 && FUNC_0() == VAR_1,
        "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());
    VAR_9.lpszProxyBypass = VAR_5;
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_4(&VAR_9);
    FUNC_7(!VAR_10 && FUNC_0() == VAR_1,
        "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());


    VAR_9.lpszProxy = VAR_4;
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_4(&VAR_9);
    if (!VAR_10 && FUNC_0() == VAR_0)
        FUNC_9("couldn't set default proxy configuration: access denied\n");
    else
        FUNC_7((!VAR_10 && FUNC_0() == VAR_1) ||
           FUNC_5(VAR_10),
           "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_0());

    VAR_9.lpszProxy = VAR_5;
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_4(&VAR_9);
    if (!VAR_10 && FUNC_0() == VAR_0)
        FUNC_9("couldn't set default proxy configuration: access denied\n");
    else
    {
        FUNC_7(VAR_10, "WinHttpSetDefaultProxyConfiguration failed: %u\n", FUNC_0());
        FUNC_7(FUNC_0() == VAR_2 || FUNC_5(FUNC_0() == 0xdeadbeef) ,
           "got %u\n", FUNC_0());
    }
    FUNC_8( VAR_8, VAR_7, VAR_6 );
}
