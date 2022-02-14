
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HDC ;
typedef int HBRUSH ;
typedef int GpStatus ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBitmap ;
typedef int ARGB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int,int *) ;
 int FUNC_3 (int,int,int,int ,int *,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int *,int **) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,double,double,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int *,int,int,int,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int ,char*) ;

__attribute__((used)) static void FUNC_15(void)
{
    GpStatus VAR_3;
    GpGraphics *VAR_4 = ((void*)0);
    GpBitmap *VAR_5 = ((void*)0);
    HDC VAR_6=((void*)0);
    HBRUSH VAR_7, VAR_8;
    ARGB VAR_9;

    VAR_3 = FUNC_3(10, 10, 12, VAR_2, ((void*)0), &VAR_5);
    FUNC_13(VAR_1, VAR_3);

    VAR_3 = FUNC_7((GpImage*)VAR_5, &VAR_4);
    FUNC_13(VAR_1, VAR_3);

    VAR_3 = FUNC_9(VAR_4, 2.0, 2.0, VAR_0);
    FUNC_13(VAR_1, VAR_3);

    VAR_3 = FUNC_6(VAR_4, &VAR_6);
    FUNC_13(VAR_1, VAR_3);
    FUNC_14(VAR_6 != ((void*)0), "got NULL hdc\n");

    VAR_7 = FUNC_0(FUNC_10(255, 0, 0));

    VAR_8 = FUNC_12(VAR_6, VAR_7);

    FUNC_11(VAR_6, 2, 2, 6, 6);

    FUNC_12(VAR_6, VAR_8);

    FUNC_1(VAR_7);

    VAR_3 = FUNC_8(VAR_4, VAR_6);
    FUNC_13(VAR_1, VAR_3);

    FUNC_4(VAR_4);

    VAR_3 = FUNC_2(VAR_5, 3, 3, &VAR_9);
    FUNC_13(VAR_1, VAR_3);
    FUNC_13(0xffff0000, VAR_9);

    VAR_3 = FUNC_2(VAR_5, 8, 8, &VAR_9);
    FUNC_13(VAR_1, VAR_3);
    FUNC_13(0xff000000, VAR_9);

    FUNC_5((GpImage*)VAR_5);
}
