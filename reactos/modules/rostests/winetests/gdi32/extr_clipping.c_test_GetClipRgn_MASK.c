
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HRGN ;
typedef int * HDC ;


 int VAR_0 ;
 int * FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int,char*,...) ;

__attribute__((used)) static void FUNC_9(void)
{
    HDC VAR_4;
    HRGN VAR_5, VAR_6, VAR_7, VAR_8;
    int VAR_9;


    VAR_9 = FUNC_3(((void*)0), ((void*)0));
    FUNC_8(VAR_9 == -1, "Expected GetClipRgn to return -1, got %d\n", VAR_9);

    VAR_4 = FUNC_4(((void*)0));
    FUNC_8(VAR_4 != ((void*)0), "Expected GetDC to return a valid device context handle\n");


    VAR_9 = FUNC_3(VAR_4, ((void*)0));
    FUNC_8(VAR_9 == 0 ||
       VAR_9 == -1 ,
       "Expected GetClipRgn to return 0, got %d\n", VAR_9);


    VAR_5 = FUNC_0(100, 100, 100, 100);
    FUNC_8(VAR_5 != ((void*)0),
       "Expected CreateRectRgn to return a handle to a new rectangular region\n");

    VAR_6 = FUNC_0(1, 2, 3, 4);
    FUNC_8(VAR_6 != ((void*)0),
       "Expected CreateRectRgn to return a handle to a new rectangular region\n");

    VAR_7 = FUNC_0(1, 2, 3, 4);
    FUNC_8(VAR_7 != ((void*)0),
       "Expected CreateRectRgn to return a handle to a new rectangular region\n");

    VAR_8 = FUNC_0(1, 2, 3, 4);
    FUNC_8(VAR_8 != ((void*)0),
       "Expected CreateRectRgn to return a handle to a new rectangular region\n");



    VAR_9 = FUNC_3(VAR_4, VAR_6);
    FUNC_8(VAR_9 == 0, "Expected GetClipRgn to return 0, got %d\n", VAR_9);


    VAR_9 = FUNC_2(VAR_6, VAR_7);
    FUNC_8(VAR_9 == 1,
       "Expected EqualRgn to compare the two regions as equal, got %d\n", VAR_9);


    VAR_9 = FUNC_7(VAR_4, VAR_5);
    FUNC_8(VAR_9 == VAR_1,
       "Expected SelectClipRgn to return NULLREGION, got %d\n", VAR_9);



    VAR_9 = FUNC_3(VAR_4, ((void*)0));
    FUNC_8(VAR_9 == -1, "Expected GetClipRgn to return -1, got %d\n", VAR_9);

    VAR_9 = FUNC_3(VAR_4, VAR_6);
    FUNC_8(VAR_9 == 1, "Expected GetClipRgn to return 1, got %d\n", VAR_9);

    VAR_9 = FUNC_2(VAR_5, VAR_6);
    FUNC_8(VAR_9 == 1,
       "Expected EqualRgn to compare the two regions as equal, got %d\n", VAR_9);


    VAR_9 = FUNC_7(VAR_4, ((void*)0));
    FUNC_8(VAR_9 == VAR_2 || (VAR_9 == VAR_0 && FUNC_5(VAR_3) > 1),
       "Expected SelectClipRgn to return SIMPLEREGION, got %d\n", VAR_9);

    VAR_9 = FUNC_3(VAR_4, ((void*)0));
    FUNC_8(VAR_9 == 0 ||
       VAR_9 == -1 ,
       "Expected GetClipRgn to return 0, got %d\n", VAR_9);

    VAR_9 = FUNC_3(VAR_4, VAR_7);
    FUNC_8(VAR_9 == 0, "Expected GetClipRgn to return 0, got %d\n", VAR_9);

    VAR_9 = FUNC_2(VAR_7, VAR_8);
    FUNC_8(VAR_9 == 1,
       "Expected EqualRgn to compare the two regions as equal, got %d\n", VAR_9);

    FUNC_1(VAR_8);
    FUNC_1(VAR_7);
    FUNC_1(VAR_6);
    FUNC_1(VAR_5);
    FUNC_6(((void*)0), VAR_4);
}
