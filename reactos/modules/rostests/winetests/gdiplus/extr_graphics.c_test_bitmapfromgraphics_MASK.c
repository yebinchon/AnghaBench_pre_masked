
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int REAL ;
typedef int PixelFormat ;
typedef int HDC ;
typedef int GpStatus ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBitmap ;


 int FUNC_0 (int,int,int *,int **) ;
 int FUNC_1 (int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_14(void)
{
    GpStatus VAR_4;
    GpGraphics *VAR_5 = ((void*)0);
    HDC VAR_6 = FUNC_11( VAR_3 );
    GpBitmap *VAR_7 = ((void*)0);
    PixelFormat VAR_8;
    REAL VAR_9, VAR_10;
    UINT VAR_11, VAR_12;

    VAR_4 = FUNC_1(VAR_6, &VAR_5);
    FUNC_12(VAR_1, VAR_4);

    VAR_4 = FUNC_0(12, 13, ((void*)0), &VAR_7);
    FUNC_12(VAR_0, VAR_4);

    VAR_4 = FUNC_0(12, 13, VAR_5, ((void*)0));
    FUNC_12(VAR_0, VAR_4);

    VAR_4 = FUNC_0(12, 13, VAR_5, &VAR_7);
    FUNC_12(VAR_1, VAR_4);

    VAR_4 = FUNC_8((GpImage*)VAR_7, &VAR_8);
    FUNC_12(VAR_1, VAR_4);
    FUNC_12(VAR_2, VAR_8);

    VAR_4 = FUNC_4(VAR_5, &VAR_10);
    FUNC_12(VAR_1, VAR_4);

    VAR_4 = FUNC_7((GpImage*)VAR_7, &VAR_9);
    FUNC_12(VAR_1, VAR_4);
    FUNC_13(VAR_10, VAR_9);

    VAR_4 = FUNC_5(VAR_5, &VAR_10);
    FUNC_12(VAR_1, VAR_4);

    VAR_4 = FUNC_9((GpImage*)VAR_7, &VAR_9);
    FUNC_12(VAR_1, VAR_4);
    FUNC_13(VAR_10, VAR_9);

    VAR_4 = FUNC_10((GpImage*)VAR_7, &VAR_11);
    FUNC_12(VAR_1, VAR_4);
    FUNC_12(12, VAR_11);

    VAR_4 = FUNC_6((GpImage*)VAR_7, &VAR_12);
    FUNC_12(VAR_1, VAR_4);
    FUNC_12(13, VAR_12);

    FUNC_2(VAR_5);
    FUNC_3((GpImage*)VAR_7);
}
