
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timeout ;
typedef char WCHAR ;
typedef int * HINTERNET ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char const*,int ,int ) ;
 int * FUNC_4 (int ,int ,int *,int *,int ) ;
 int * FUNC_5 (int *,int *,int *,int *,int *,int *,int ) ;
 int FUNC_6 (int *,int *,int ,int *,int ,int ,int ) ;
 int FUNC_7 (int *,int ,int*,int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 int VAR_3 ;
 char const* VAR_4 ;

__attribute__((used)) static void FUNC_11(void)
{
    static const WCHAR VAR_5[] =
        {'n','x','d','o','m','a','i','n','.','w','i','n','e','h','q','.','o','r','g',0};
    HINTERNET VAR_6, VAR_7, VAR_8;
    DWORD VAR_9;
    BOOL VAR_10;

    if (! FUNC_9())
    {
        VAR_6 = FUNC_4(VAR_3, 0, ((void*)0), ((void*)0), 0);
        FUNC_8(VAR_6 != ((void*)0), "failed to open session %u\n", FUNC_0());

        VAR_9 = 10000;
        VAR_10 = FUNC_7(VAR_6, VAR_2, &VAR_9, sizeof(VAR_9));
        FUNC_8(VAR_10, "failed to set resolve timeout %u\n", FUNC_0());

        VAR_7 = FUNC_3(VAR_6, VAR_5, 0, 0);
        FUNC_8(VAR_7 != ((void*)0), "failed to open a connection %u\n", FUNC_0());

        VAR_8 = FUNC_5(VAR_7, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0);
        FUNC_8(VAR_8 != ((void*)0), "failed to open a request %u\n", FUNC_0());

        FUNC_1(0xdeadbeef);
        VAR_10 = FUNC_6(VAR_8, ((void*)0), 0, ((void*)0), 0, 0, 0);
        if (VAR_10)
        {
            FUNC_10("nxdomain returned success. Broken ISP redirects?\n");
            goto done;
        }
        FUNC_8(FUNC_0() == VAR_1,
           "expected ERROR_WINHTTP_NAME_NOT_RESOLVED got %u\n", FUNC_0());

        FUNC_2(VAR_8);
        FUNC_2(VAR_7);
        FUNC_2(VAR_6);
    }
    else
       FUNC_10("Skipping host resolution tests, host resolution preformed by proxy\n");

    VAR_6 = FUNC_4(VAR_3, 0, ((void*)0), ((void*)0), 0);
    FUNC_8(VAR_6 != ((void*)0), "failed to open session %u\n", FUNC_0());

    VAR_9 = 10000;
    VAR_10 = FUNC_7(VAR_6, VAR_2, &VAR_9, sizeof(VAR_9));
    FUNC_8(VAR_10, "failed to set resolve timeout %u\n", FUNC_0());

    VAR_7 = FUNC_3(VAR_6, VAR_4, 0, 0);
    FUNC_8(VAR_7 != ((void*)0), "failed to open a connection %u\n", FUNC_0());

    VAR_8 = FUNC_5(VAR_7, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0);
    FUNC_8(VAR_8 != ((void*)0), "failed to open a request %u\n", FUNC_0());

    VAR_10 = FUNC_6(VAR_8, ((void*)0), 0, ((void*)0), 0, 0, 0);
    if (!VAR_10 && FUNC_0() == VAR_0)
    {
        FUNC_10("connection failed, skipping\n");
        goto done;
    }
    FUNC_8(VAR_10, "failed to send request\n");

 done:
    FUNC_2(VAR_8);
    FUNC_2(VAR_7);
    FUNC_2(VAR_6);
}
