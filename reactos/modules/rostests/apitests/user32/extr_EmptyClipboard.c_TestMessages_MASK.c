
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MSG ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int *,int ,int *) ;
 int * FUNC_4 (char*,char*,int ,int,int,int,int,int *,int *,int ,int *) ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_3 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_13 (int ,char*) ;

void FUNC_14()
{
    HANDLE VAR_8;
    DWORD VAR_9;
    BOOL VAR_10;
    MSG VAR_11;


    FUNC_9(&VAR_2);

    FUNC_12(VAR_0, L"clipstest");

    VAR_7 = ((void*)0);
    VAR_6 = FUNC_4(L"clipstest", L"clipstest", VAR_4,
                        20, 20, 300, 300, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_13 (VAR_6 != ((void*)0), "CreateWindowW failed\n");

    FUNC_5();


    VAR_10 = FUNC_10(VAR_6);
    FUNC_13 (VAR_10, "OpenClipboard failed\n");

    VAR_10 = FUNC_6();
    FUNC_13 (VAR_10, "EmptyClipboard failed\n");

    VAR_10 = FUNC_1();
    FUNC_13 (VAR_10, "CloseClipboard failed\n");


    FUNC_7();
    FUNC_0(VAR_5);


    VAR_8 = FUNC_3(((void*)0), 0, VAR_1, ((void*)0), 0, &VAR_9);

    while (FUNC_8(&VAR_11, 0, 0 ,0))
        FUNC_11(&VAR_11);

    FUNC_0(VAR_3);

    FUNC_2(VAR_8);
}
