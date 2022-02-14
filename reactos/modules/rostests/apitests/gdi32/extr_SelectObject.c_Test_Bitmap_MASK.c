
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HDC ;
typedef int * HBITMAP ;
typedef int BYTE ;


 int * FUNC_0 (int,int,int,int,int **) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9()
{
    HBITMAP VAR_4, VAR_5, VAR_6;
 BYTE VAR_7[4] = {0};
 HDC VAR_8;

 VAR_4 = FUNC_0(2, 2, 1, 1, &VAR_7);
 VAR_5 = FUNC_0(2, 2, 1, 4, &VAR_7);
 if (!VAR_4 || !VAR_5)
 {
     FUNC_8("couldn't create bitmaps, skipping\n");
     return;
 }

    VAR_6 = FUNC_6(VAR_2, VAR_4);
    FUNC_7(FUNC_4(VAR_6) == VAR_1, "wrong type\n");


    FUNC_7(FUNC_6(VAR_2, VAR_5) == ((void*)0), "should fail\n");


    VAR_6 = FUNC_6(VAR_2, VAR_6);
    FUNC_7(VAR_6 == VAR_4, "didn't get the right bitmap back.\n");


    VAR_6 = FUNC_6(VAR_2, VAR_4);
    FUNC_7(FUNC_6(VAR_3, VAR_4) == ((void*)0), "Should fail.\n");


    VAR_6 = FUNC_6(VAR_2, VAR_4);
    FUNC_7(VAR_6 == VAR_4, "didn't get the right bitmap back.\n");
    FUNC_6(VAR_2, FUNC_5(VAR_0));


    VAR_8 = FUNC_1(((void*)0));
    VAR_6 = FUNC_6(VAR_8, VAR_4);
    FUNC_7(VAR_6 == FUNC_5(VAR_0), "didn't get the right bitmap back.\n");
    FUNC_2(VAR_8);
    VAR_6 = FUNC_6(VAR_2, VAR_4);
    FUNC_7(VAR_6 == FUNC_5(VAR_0), "didn't get the right bitmap back.\n");

    FUNC_3(VAR_4);
    FUNC_3(VAR_5);
}
