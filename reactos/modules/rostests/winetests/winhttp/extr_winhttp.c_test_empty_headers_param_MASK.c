
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * HINTERNET ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int,int ) ;
 int * FUNC_3 (int ,int ,int *,int *,int ) ;
 int * FUNC_4 (int *,int *,int *,int *,int *,int *,int ) ;
 int FUNC_5 (int *,int const*,int ,int *,int ,int ,int ) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(void)
{
    static const WCHAR VAR_4[] = {0};
    HINTERNET VAR_5, VAR_6, VAR_7;
    DWORD VAR_8;
    BOOL VAR_9;

    VAR_5 = FUNC_3(VAR_2, 0, ((void*)0), ((void*)0), 0);
    FUNC_6(VAR_5 != ((void*)0), "failed to open session %u\n", FUNC_0());

    VAR_6 = FUNC_2(VAR_5, VAR_3, 80, 0);
    FUNC_6(VAR_6 != ((void*)0), "failed to open a connection %u\n", FUNC_0());

    VAR_7 = FUNC_4(VAR_6, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0);
    FUNC_6(VAR_7 != ((void*)0), "failed to open a request %u\n", FUNC_0());

    VAR_9 = FUNC_5(VAR_7, VAR_4, 0, ((void*)0), 0, 0, 0);
    VAR_8 = FUNC_0();
    if (!VAR_9 && (VAR_8 == VAR_0 || VAR_8 == VAR_1))
    {
        FUNC_7("connection failed, skipping\n");
        goto done;
    }
    FUNC_6(VAR_9, "failed to send request %u\n", FUNC_0());

 done:
    FUNC_1(VAR_7);
    FUNC_1(VAR_6);
    FUNC_1(VAR_5);
}
