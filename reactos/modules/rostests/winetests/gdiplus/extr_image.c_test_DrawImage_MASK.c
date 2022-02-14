
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
 int FUNC_4 (int *,int *,int ,int ) ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int*,int*,int) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    BYTE VAR_3[4] = { 0,0,0,0 };
    BYTE VAR_4[16] = { 0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
                           0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };
    BYTE VAR_5[16] = { 0,0,0,0,0,0,0xff,0xff,
                           0,0,0,0,0,0,0xff,0xff };
    GpStatus VAR_6;
    union
    {
        GpBitmap *bitmap;
        GpImage *image;
    } VAR_7, VAR_8;
    GpGraphics *VAR_9;
    int VAR_10;

    VAR_6 = FUNC_1(1, 1, 4, VAR_2, VAR_3, &VAR_7);
    FUNC_7(VAR_1, VAR_6);
    VAR_6 = FUNC_0(VAR_7, 100.0, 100.0);
    FUNC_7(VAR_1, VAR_6);

    VAR_6 = FUNC_1(2, 2, 8, VAR_2, VAR_4, &VAR_8);
    FUNC_7(VAR_1, VAR_6);
    VAR_6 = FUNC_0(VAR_8, 300.0, 300.0);
    FUNC_7(VAR_1, VAR_6);
    VAR_6 = FUNC_5(VAR_8, &VAR_9);
    FUNC_7(VAR_1, VAR_6);
    VAR_6 = FUNC_6(VAR_9, VAR_0);
    FUNC_7(VAR_1, VAR_6);

    VAR_6 = FUNC_4(VAR_9, VAR_7, 0, 0);
    FUNC_7(VAR_1, VAR_6);

    VAR_10 = FUNC_8(VAR_4, VAR_5, sizeof(VAR_5)) == 0;
    FUNC_9(VAR_10, "data should match\n");
    if (!VAR_10)
    {
        UINT VAR_11, VAR_12 = sizeof(VAR_4);
        BYTE *VAR_13 = VAR_4;
        for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
            FUNC_10(" %02x", VAR_13[VAR_11]);
        FUNC_10("\n");
    }

    VAR_6 = FUNC_2(VAR_9);
    FUNC_7(VAR_1, VAR_6);
    VAR_6 = FUNC_3(VAR_7);
    FUNC_7(VAR_1, VAR_6);
    VAR_6 = FUNC_3(VAR_8);
    FUNC_7(VAR_1, VAR_6);
}
