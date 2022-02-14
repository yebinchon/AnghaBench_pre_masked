
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rc ;
typedef int RECT ;
typedef int * HDC ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (char*,char*,int,int,int,int,int,int *,int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int VAR_0 ;
 int FUNC_7 (int *,int ) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int ,char*) ;

void FUNC_11()
{
    HDC VAR_9;
    RECT VAR_10;

    FUNC_6(VAR_1, L"testClass");

    VAR_7 = FUNC_1(L"testClass", L"Test parent", VAR_3 | VAR_4, 100, 100, 200, 200, 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_10 (VAR_7 != ((void*)0), "Expected CreateWindowW to succeed\n");

    VAR_8 = FUNC_1(L"testClass", L"test window", VAR_2 | VAR_4, 0, 0, 100, 100, VAR_7, ((void*)0), ((void*)0), ((void*)0));
    FUNC_10 (VAR_8 != ((void*)0), "Expected CreateWindowW to succeed\n");

    FUNC_4();
    FUNC_3();

    VAR_9 = FUNC_5(VAR_7);

    FUNC_2(VAR_8, VAR_9, ((void*)0));
    FUNC_4();
    FUNC_0(VAR_5);

    FUNC_2(VAR_7, VAR_9, ((void*)0));
    FUNC_4();
    FUNC_0(VAR_6);

    FUNC_7(VAR_7, VAR_0);
    FUNC_8(VAR_7);
    FUNC_7(VAR_8, VAR_0);
    FUNC_8(VAR_8);

    FUNC_4();
    FUNC_3();

    FUNC_2(VAR_8, ((void*)0), ((void*)0));
    FUNC_4();
    FUNC_0(VAR_6);

    FUNC_2(VAR_7, ((void*)0), ((void*)0));
    FUNC_4();
    FUNC_0(VAR_6);

    FUNC_2(VAR_8, VAR_9, ((void*)0));
    FUNC_4();
    FUNC_0(VAR_5);

    FUNC_2(VAR_7, VAR_9, ((void*)0));
    FUNC_4();
    FUNC_0(VAR_6);

    FUNC_9(&VAR_10, 0, sizeof(VAR_10));

    FUNC_2(VAR_8, VAR_9, &VAR_10);
    FUNC_4();
    FUNC_0(VAR_5);

    FUNC_2(VAR_7, VAR_9, &VAR_10);
    FUNC_4();
    FUNC_0(VAR_6);
}
