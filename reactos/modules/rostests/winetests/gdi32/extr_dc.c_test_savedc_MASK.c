
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HDC ;


 int * FUNC_0 (char*,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void FUNC_6(void)
{
    HDC VAR_0 = FUNC_0("DISPLAY", ((void*)0), ((void*)0), ((void*)0));
    int VAR_1;

    FUNC_5(VAR_0 != ((void*)0), "CreateDC rets %p\n", *VAR_0);

    VAR_1 = FUNC_3(VAR_0);
    FUNC_5(VAR_1 == 1, "ret = %d\n", VAR_1);
    VAR_1 = FUNC_3(VAR_0);
    FUNC_5(VAR_1 == 2, "ret = %d\n", VAR_1);
    VAR_1 = FUNC_3(VAR_0);
    FUNC_5(VAR_1 == 3, "ret = %d\n", VAR_1);
    VAR_1 = FUNC_2(VAR_0, -1);
    FUNC_5(VAR_1, "ret = %d\n", VAR_1);
    VAR_1 = FUNC_3(VAR_0);
    FUNC_5(VAR_1 == 3, "ret = %d\n", VAR_1);
    VAR_1 = FUNC_2(VAR_0, 1);
    FUNC_5(VAR_1, "ret = %d\n", VAR_1);
    VAR_1 = FUNC_3(VAR_0);
    FUNC_5(VAR_1 == 1, "ret = %d\n", VAR_1);
    VAR_1 = FUNC_3(VAR_0);
    FUNC_5(VAR_1 == 2, "ret = %d\n", VAR_1);
    VAR_1 = FUNC_3(VAR_0);
    FUNC_5(VAR_1 == 3, "ret = %d\n", VAR_1);
    VAR_1 = FUNC_2(VAR_0, -2);
    FUNC_5(VAR_1, "ret = %d\n", VAR_1);
    VAR_1 = FUNC_3(VAR_0);
    FUNC_5(VAR_1 == 2, "ret = %d\n", VAR_1);
    VAR_1 = FUNC_2(VAR_0, -2);
    FUNC_5(VAR_1, "ret = %d\n", VAR_1);
    VAR_1 = FUNC_3(VAR_0);
    FUNC_5(VAR_1 == 1, "ret = %d\n", VAR_1);
    VAR_1 = FUNC_3(VAR_0);
    FUNC_5(VAR_1 == 2, "ret = %d\n", VAR_1);
    VAR_1 = FUNC_2(VAR_0, -4);
    FUNC_5(!VAR_1, "ret = %d\n", VAR_1);
    VAR_1 = FUNC_2(VAR_0, 3);
    FUNC_5(!VAR_1, "ret = %d\n", VAR_1);


    VAR_1 = FUNC_2(VAR_0, -3);
    FUNC_5(!VAR_1 ||
       FUNC_4(VAR_1),
       "ret = %d\n", VAR_1);


    VAR_1 = FUNC_2(VAR_0, -3);
    FUNC_5(!VAR_1, "ret = %d\n", VAR_1);

    VAR_1 = FUNC_3(VAR_0);
    FUNC_5(VAR_1 == 3 ||
       FUNC_4(VAR_1 == 1),
       "ret = %d\n", VAR_1);


    VAR_1 = FUNC_2(VAR_0, 0);
    FUNC_5(!VAR_1 ||
       FUNC_4(VAR_1),
       "ret = %d\n", VAR_1);


    VAR_1 = FUNC_2(VAR_0, 0);
    FUNC_5(!VAR_1, "ret = %d\n", VAR_1);

    VAR_1 = FUNC_2(VAR_0, 1);
    FUNC_5(VAR_1 ||
       FUNC_4(!VAR_1),
       "ret = %d\n", VAR_1);

    FUNC_1(VAR_0);
}
