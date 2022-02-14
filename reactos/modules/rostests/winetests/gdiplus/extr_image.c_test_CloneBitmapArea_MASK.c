
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpStatus ;
typedef int GpImage ;
typedef int GpBitmap ;
typedef int BitmapData ;


 int FUNC_0 (int *,int *,int,int ,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int,int,int ,int *,int **) ;
 int FUNC_3 (int,int,int ,int ,int *,int **) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
    GpStatus VAR_5;
    GpBitmap *VAR_6, *VAR_7;
    BitmapData VAR_8, VAR_9;

    VAR_5 = FUNC_3(1, 1, 0, VAR_3, ((void*)0), &VAR_6);
    FUNC_5(VAR_2, VAR_5);

    VAR_5 = FUNC_0(VAR_6, ((void*)0), VAR_0 | VAR_1, VAR_3, &VAR_8);
    FUNC_5(VAR_2, VAR_5);

    VAR_5 = FUNC_0(VAR_6, ((void*)0), VAR_0, VAR_3, &VAR_9);
    FUNC_5(VAR_4, VAR_5);

    VAR_5 = FUNC_2(0, 0, 1, 1, VAR_3, VAR_6, &VAR_7);
    FUNC_5(VAR_2, VAR_5);

    VAR_5 = FUNC_1(VAR_6, &VAR_8);
    FUNC_5(VAR_2, VAR_5);

    FUNC_4((GpImage *)VAR_7);
    FUNC_4((GpImage *)VAR_6);
}
