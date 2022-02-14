
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef scalar_t__ UINT ;
typedef int HDC ;
typedef int GpStatus ;
typedef int GpRegion ;
typedef int GpGraphics ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,scalar_t__,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int,scalar_t__*) ;
 int FUNC_6 (int *,int *,int*) ;
 int FUNC_7 (int *,int *,int*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int,scalar_t__) ;
 int FUNC_12 (int *,int,int) ;
 int FUNC_13 (int,char*,int) ;

__attribute__((used)) static void FUNC_14(void)
{
    GpGraphics *VAR_3 = ((void*)0);
    GpRegion *VAR_4, *VAR_5;
    HDC VAR_6 = FUNC_9(0);
    GpStatus VAR_7;
    BYTE VAR_8[512];
    UINT VAR_9;
    BOOL VAR_10;

    VAR_7 = FUNC_2(((void*)0), 0, ((void*)0));
    FUNC_13(VAR_7 == VAR_1, "status %d\n", VAR_7);

    VAR_7 = FUNC_0(VAR_6, &VAR_3);
    FUNC_13(VAR_7 == VAR_2, "status %d\n", VAR_7);

    VAR_7 = FUNC_1(&VAR_4);
    FUNC_13(VAR_7 == VAR_2, "status %d\n", VAR_7);


    FUNC_12(VAR_8, 0xee, sizeof(VAR_8));
    VAR_9 = 0;
    VAR_7 = FUNC_5(VAR_4, (BYTE*)VAR_8, sizeof(VAR_8), &VAR_9);
    FUNC_13(VAR_7 == VAR_2, "status %d\n", VAR_7);
    FUNC_11(20, VAR_9);

    VAR_7 = FUNC_2(VAR_8, VAR_9, ((void*)0));
    FUNC_13(VAR_7 == VAR_1, "status %d\n", VAR_7);

    VAR_7 = FUNC_2(VAR_8, VAR_9, &VAR_5);
    FUNC_13(VAR_7 == VAR_2, "status %d\n", VAR_7);

    VAR_10 = VAR_0;
    VAR_7 = FUNC_7(VAR_5, VAR_3, &VAR_10);
    FUNC_13(VAR_7 == VAR_2, "status %d\n", VAR_7);
    FUNC_13(VAR_10, "got %d\n", VAR_10);
    FUNC_4(VAR_5);


    VAR_7 = FUNC_8(VAR_4);
    FUNC_13(VAR_7 == VAR_2, "status %d\n", VAR_7);

    FUNC_12(VAR_8, 0xee, sizeof(VAR_8));
    VAR_9 = 0;
    VAR_7 = FUNC_5(VAR_4, (BYTE*)VAR_8, sizeof(VAR_8), &VAR_9);
    FUNC_13(VAR_7 == VAR_2, "status %d\n", VAR_7);
    FUNC_11(20, VAR_9);

    VAR_7 = FUNC_2(VAR_8, VAR_9, &VAR_5);
    FUNC_13(VAR_7 == VAR_2, "status %d\n", VAR_7);

    VAR_10 = VAR_0;
    VAR_7 = FUNC_6(VAR_5, VAR_3, &VAR_10);
    FUNC_13(VAR_7 == VAR_2, "status %d\n", VAR_7);
    FUNC_13(VAR_10, "got %d\n", VAR_10);
    FUNC_4(VAR_5);

    FUNC_3(VAR_3);
    FUNC_4(VAR_4);
    FUNC_10(0, VAR_6);
}
