
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int white_2x2 ;
typedef int black_2x2 ;
typedef size_t UINT ;
typedef int GpStatus ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBitmap ;
typedef int BYTE ;


 int FUNC_0 (int *,double,double) ;
 int FUNC_1 (int,int,int,int ,int*,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ,int ,int ,int ,int,int,int ) ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int*,int*,int) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    BYTE VAR_4[4] = { 0,0,0,0 };
    BYTE VAR_5[16] = { 0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
                           0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };
    BYTE VAR_6[16] = { 0,0,0,0,0,0,0xff,0xff,
                           0,0,0,0,0,0,0xff,0xff };
    GpStatus VAR_7;
    union
    {
        GpBitmap *bitmap;
        GpImage *image;
    } VAR_8, VAR_9;
    GpGraphics *VAR_10;
    int VAR_11;

    VAR_7 = FUNC_1(1, 1, 4, VAR_2, VAR_4, &VAR_8);
    FUNC_7(VAR_1, VAR_7);
    VAR_7 = FUNC_0(VAR_8, 100.0, 100.0);
    FUNC_7(VAR_1, VAR_7);

    VAR_7 = FUNC_1(2, 2, 8, VAR_2, VAR_5, &VAR_9);
    FUNC_7(VAR_1, VAR_7);
    VAR_7 = FUNC_0(VAR_9, 300.0, 300.0);
    FUNC_7(VAR_1, VAR_7);
    VAR_7 = FUNC_5(VAR_9, &VAR_10);
    FUNC_7(VAR_1, VAR_7);
    VAR_7 = FUNC_6(VAR_10, VAR_0);
    FUNC_7(VAR_1, VAR_7);

    VAR_7 = FUNC_4(VAR_10, VAR_8, 0, 0, 0, 0, 1, 1, VAR_3);
    FUNC_7(VAR_1, VAR_7);

    VAR_11 = FUNC_8(VAR_5, VAR_6, sizeof(VAR_6)) == 0;
    FUNC_9(VAR_11, "data should match\n");
    if (!VAR_11)
    {
        UINT VAR_12, VAR_13 = sizeof(VAR_5);
        BYTE *VAR_14 = VAR_5;
        for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
            FUNC_10(" %02x", VAR_14[VAR_12]);
        FUNC_10("\n");
    }

    VAR_7 = FUNC_2(VAR_10);
    FUNC_7(VAR_1, VAR_7);
    VAR_7 = FUNC_3(VAR_8);
    FUNC_7(VAR_1, VAR_7);
    VAR_7 = FUNC_3(VAR_9);
    FUNC_7(VAR_1, VAR_7);
}
