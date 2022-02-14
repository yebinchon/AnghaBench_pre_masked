
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(void)
{
    PCHAR VAR_2;
    BOOL VAR_3;
    DWORD VAR_4, VAR_5;


    VAR_2 = FUNC_2(0);
    FUNC_1(VAR_2 != ((void*)0), "Expected non-NULL ptr\n");


    VAR_5 = FUNC_4(VAR_2);


    VAR_3 = FUNC_3(VAR_2);
    FUNC_1(VAR_3 == VAR_1, "Expected TRUE, got %d\n", VAR_3);


    VAR_2 = FUNC_2(1);
    FUNC_1(VAR_2 != ((void*)0), "Expected non-NULL ptr\n");


    VAR_4 = FUNC_4(VAR_2);
    FUNC_1(VAR_4 == 1 ||
       FUNC_0(VAR_4 == VAR_5),
       "Expected 1, got %d\n", VAR_4);


    VAR_2 = FUNC_5(VAR_2, 2);
    FUNC_1(VAR_2 != ((void*)0), "Expected non-NULL ptr\n");


    VAR_4 = FUNC_4(VAR_2);
    FUNC_1(VAR_4 == 2 ||
       FUNC_0(VAR_4 == VAR_5),
       "Expected 2, got %d\n", VAR_4);


    VAR_3 = FUNC_3(VAR_2);
    FUNC_1(VAR_3 == VAR_1, "Expected TRUE, got %d\n", VAR_3);


    VAR_3 = FUNC_3(((void*)0));
    FUNC_1(VAR_3 == VAR_1 ||
       FUNC_0(VAR_3 == VAR_0),
       "Expected TRUE, got %d\n", VAR_3);


    VAR_2 = FUNC_5(((void*)0), 2);
    FUNC_1(VAR_2 != ((void*)0), "Expected non-NULL ptr\n");

    VAR_3 = FUNC_3(VAR_2);
    FUNC_1(VAR_3 == VAR_1, "Expected TRUE, got %d\n", VAR_3);
}
