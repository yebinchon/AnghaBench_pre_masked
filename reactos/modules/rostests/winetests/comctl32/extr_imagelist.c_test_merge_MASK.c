
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;
typedef int * HIMAGELIST ;
typedef int * HICON ;


 int * FUNC_0 (int ,int,int,int,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ,int,int ,char*) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int,char*) ;
 int * FUNC_6 (int,int,int ,int ,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int,int *,int,int,int) ;
 scalar_t__ FUNC_9 (int *,int,int *) ;

__attribute__((used)) static void FUNC_10(void)
{
    HIMAGELIST VAR_3, VAR_4, VAR_5;
    HICON VAR_6;
    HWND VAR_7 = FUNC_4();

    VAR_3 = FUNC_6(32, 32, 0, 0, 3);
    FUNC_5(VAR_3 != ((void*)0),"failed to create himl1\n");

    VAR_4 = FUNC_6(32, 32, 0, 0, 3);
    FUNC_5(VAR_4 != ((void*)0),"failed to create himl2\n");

    VAR_6 = FUNC_0(VAR_1, 32, 32, 1, 1, VAR_2, VAR_2);
    FUNC_5(VAR_6 != ((void*)0), "failed to create hicon1\n");

    if (!VAR_3 || !VAR_4 || !VAR_6)
        return;

    FUNC_5(0 == FUNC_9(VAR_4, -1, VAR_6), "Failed to add icon1 to himl2.\n");
    FUNC_3(VAR_7, VAR_4, 0, 32, VAR_2, "add icon1 to himl2");


    VAR_5 = FUNC_8(VAR_3, -1, VAR_4, 0, 0, 0);
    FUNC_5(VAR_5 != ((void*)0), "merge himl1,-1 failed\n");
    FUNC_3(VAR_7, VAR_5, 0, 32, VAR_0, "merge himl1,-1");
    FUNC_7(VAR_5);

    VAR_5 = FUNC_8(VAR_3, 0, VAR_4, 0, 0, 0);
    FUNC_5(VAR_5 != ((void*)0),"merge himl1,0 failed\n");
    FUNC_3(VAR_7, VAR_5, 0, 32, VAR_0, "merge himl1,0");
    FUNC_7(VAR_5);


    FUNC_7(VAR_4);
    VAR_4 = FUNC_6(32, 32, 0, 0, 3);
    FUNC_5(VAR_4 != ((void*)0),"failed to recreate himl2\n");
    if (!VAR_4)
        return;

    VAR_5 = FUNC_8(VAR_3, -1, VAR_4, -1, 0, 0);
    FUNC_5(VAR_5 != ((void*)0), "merge himl2,-1 failed\n");
    FUNC_3(VAR_7, VAR_5, 0, 32, VAR_0, "merge himl2,-1");
    FUNC_7(VAR_5);

    VAR_5 = FUNC_8(VAR_3, -1, VAR_4, 0, 0, 0);
    FUNC_5(VAR_5 != ((void*)0), "merge himl2,0 failed\n");
    FUNC_3(VAR_7, VAR_5, 0, 32, VAR_0, "merge himl2,0");
    FUNC_7(VAR_5);


    FUNC_5(0 == FUNC_9(VAR_4, -1, VAR_6), "Failed to re-add icon1 to himl2.\n");

    VAR_5 = FUNC_8(VAR_4, 0, VAR_4, 0, 0, 0);
    FUNC_5(VAR_5 != ((void*)0), "merge himl2 with itself failed\n");
    FUNC_3(VAR_7, VAR_5, 0, 32, VAR_0, "merge himl2 with itself");
    FUNC_7(VAR_5);


    FUNC_5(0 == FUNC_9(VAR_3, -1, VAR_6), "Failed to add icon1 to himl1.\n");

    VAR_5 = FUNC_8(VAR_3, 0, VAR_4, 0, 0, 0);
    FUNC_5(VAR_5 != ((void*)0), "merge himl1 with himl2 failed\n");
    FUNC_3(VAR_7, VAR_5, 0, 32, VAR_0, "merge himl1 with himl2");
    FUNC_7(VAR_5);

    VAR_5 = FUNC_8(VAR_3, 0, VAR_4, 0, 8, 16);
    FUNC_5(VAR_5 != ((void*)0), "merge himl1 with himl2 8,16 failed\n");
    FUNC_3(VAR_7, VAR_5, 0, 32, VAR_0, "merge himl1 with himl2, 8,16");
    FUNC_7(VAR_5);

    FUNC_7(VAR_3);
    FUNC_7(VAR_4);
    FUNC_1(VAR_6);
    FUNC_2(VAR_7);
}
