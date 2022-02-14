
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HDC ;
typedef int GpWrapMode ;
typedef int GpTexture ;
typedef int GpStatus ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBrush ;
typedef int GpBitmap ;


 int FUNC_0 (int,int,int *,int **) ;
 int FUNC_1 (int ,int **) ;
 int FUNC_2 (int *,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(void)
{
    GpStatus VAR_4;
    GpTexture *VAR_5;
    GpGraphics *VAR_6 = ((void*)0);
    GpBitmap *VAR_7;
    HDC VAR_8 = FUNC_8(0);
    GpWrapMode VAR_9;

    VAR_4 = FUNC_1(VAR_8, &VAR_6);
    FUNC_10(VAR_1, VAR_4);
    VAR_4 = FUNC_0(1, 1, VAR_6, &VAR_7);
    FUNC_10(VAR_1, VAR_4);

    VAR_4 = FUNC_2((GpImage*)VAR_7, VAR_3, &VAR_5);
    FUNC_10(VAR_1, VAR_4);


    VAR_4 = FUNC_6(((void*)0), ((void*)0));
    FUNC_10(VAR_0, VAR_4);
    VAR_4 = FUNC_6(VAR_5, ((void*)0));
    FUNC_10(VAR_0, VAR_4);
    VAR_4 = FUNC_6(((void*)0), &VAR_9);
    FUNC_10(VAR_0, VAR_4);


    VAR_9 = VAR_2;
    VAR_4 = FUNC_6(VAR_5, &VAR_9);
    FUNC_10(VAR_1, VAR_4);
    FUNC_10(VAR_3, VAR_9);

    VAR_9 = VAR_2;
    VAR_4 = FUNC_7(VAR_5, VAR_9);
    FUNC_10(VAR_1, VAR_4);
    VAR_9 = VAR_3;
    VAR_4 = FUNC_6(VAR_5, &VAR_9);
    FUNC_10(VAR_1, VAR_4);
    FUNC_10(VAR_2, VAR_9);

    VAR_4 = FUNC_3((GpBrush*)VAR_5);
    FUNC_10(VAR_1, VAR_4);
    VAR_4 = FUNC_5((GpImage*)VAR_7);
    FUNC_10(VAR_1, VAR_4);
    VAR_4 = FUNC_4(VAR_6);
    FUNC_10(VAR_1, VAR_4);
    FUNC_9(0, VAR_8);
}
