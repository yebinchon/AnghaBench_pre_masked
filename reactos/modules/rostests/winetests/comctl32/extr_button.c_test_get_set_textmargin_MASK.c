
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RECT ;
typedef int LPARAM ;
typedef int * HWND ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int,int,int,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (int,char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    HWND VAR_4;
    RECT VAR_5;
    RECT VAR_6;
    BOOL VAR_7;
    DWORD VAR_8;

    FUNC_4(&VAR_5, 2, 1, 3, 4);
    for (VAR_8 = VAR_3; VAR_8 <= VAR_2; VAR_8++)
    {
        VAR_4 = FUNC_6(VAR_8, ((void*)0));
        FUNC_7(VAR_4 != ((void*)0), "Expect hwnd not null\n");


        VAR_7 = FUNC_3(VAR_4, VAR_0, 0, (LPARAM)&VAR_6);
        FUNC_7(VAR_7, "Expect ret to be true\n");
        FUNC_7(FUNC_2(&VAR_6), "Expect margin empty\n");


        VAR_7 = FUNC_3(VAR_4, VAR_1, 0, (LPARAM)&VAR_5);
        FUNC_7(VAR_7, "Expect ret to be true\n");
        FUNC_5(&VAR_6);
        VAR_7 = FUNC_3(VAR_4, VAR_0, 0, (LPARAM)&VAR_6);
        FUNC_7(VAR_7, "Expect ret to be true\n");
        FUNC_7(FUNC_1(&VAR_5, &VAR_6), "Expect margins to be equal\n");


        VAR_7 = FUNC_3(VAR_4, VAR_1, 0, 0);
        FUNC_7(!VAR_7, "Expect ret to be false\n");
        FUNC_5(&VAR_6);
        VAR_7 = FUNC_3(VAR_4, VAR_0, 0, (LPARAM)&VAR_6);
        FUNC_7(VAR_7, "Expect ret to be true\n");
        FUNC_7(FUNC_1(&VAR_5, &VAR_6), "Expect margins to be equal\n");


        VAR_7 = FUNC_3(VAR_4, VAR_1, 0, (LPARAM)&VAR_5);
        FUNC_7(VAR_7, "Expect ret to be true\n");
        VAR_7 = FUNC_3(VAR_4, VAR_0, 0, 0);
        FUNC_7(!VAR_7, "Expect ret to be true\n");

        FUNC_0(VAR_4);
    }
}
