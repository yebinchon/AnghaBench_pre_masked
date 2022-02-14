
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpStatus ;
typedef int GpImageAttributes ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBitmap ;
typedef int ARGB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int,int *) ;
 int FUNC_1 (int *,int,int,int) ;
 int FUNC_2 (int,int,int ,int ,int *,int **) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ,int ,int,int,int ,int ,int,int,int ,int *,int *,int *) ;
 int FUNC_8 (int *,int **) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,int ,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int,int ,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_14(void)
{
    GpStatus VAR_8;
    GpImageAttributes *VAR_9;
    GpBitmap *VAR_10, *VAR_11;
    GpGraphics *VAR_12;
    ARGB VAR_13;

    VAR_8 = FUNC_10(((void*)0), VAR_2, VAR_6, 0xff405060, 0xff708090);
    FUNC_12(VAR_3, VAR_8);

    VAR_8 = FUNC_3(&VAR_9);
    FUNC_12(VAR_4, VAR_8);

    VAR_8 = FUNC_10(VAR_9, VAR_1, VAR_6, 0xff405060, 0xff708090);
    FUNC_12(VAR_3, VAR_8);

    VAR_8 = FUNC_10(VAR_9, VAR_0, VAR_6, 0xff405060, 0xff708090);
    FUNC_12(VAR_3, VAR_8);

    VAR_8 = FUNC_10(VAR_9, VAR_2, VAR_6, 0xff405060, 0xff708090);
    FUNC_12(VAR_4, VAR_8);

    VAR_8 = FUNC_2(2, 2, 0, VAR_5, ((void*)0), &VAR_10);
    FUNC_12(VAR_4, VAR_8);

    VAR_8 = FUNC_2(2, 2, 0, VAR_5, ((void*)0), &VAR_11);
    FUNC_12(VAR_4, VAR_8);

    VAR_8 = FUNC_1(VAR_10, 0, 0, 0x20405060);
    FUNC_12(VAR_4, VAR_8);

    VAR_8 = FUNC_1(VAR_10, 0, 1, 0x40506070);
    FUNC_12(VAR_4, VAR_8);

    VAR_8 = FUNC_1(VAR_10, 1, 0, 0x60708090);
    FUNC_12(VAR_4, VAR_8);

    VAR_8 = FUNC_1(VAR_10, 1, 1, 0xffffffff);
    FUNC_12(VAR_4, VAR_8);

    VAR_8 = FUNC_8((GpImage*)VAR_11, &VAR_12);
    FUNC_12(VAR_4, VAR_8);

    VAR_8 = FUNC_7(VAR_12, (GpImage*)VAR_10, 0,0,2,2, 0,0,2,2,
 VAR_7, VAR_9, ((void*)0), ((void*)0));
    FUNC_12(VAR_4, VAR_8);

    VAR_8 = FUNC_0(VAR_11, 0, 0, &VAR_13);
    FUNC_12(VAR_4, VAR_8);
    FUNC_13(FUNC_11(0x00000000, VAR_13, 1), "Expected 00000000, got %.8x\n", VAR_13);

    VAR_8 = FUNC_0(VAR_11, 0, 1, &VAR_13);
    FUNC_12(VAR_4, VAR_8);
    FUNC_13(FUNC_11(0x00000000, VAR_13, 1), "Expected 00000000, got %.8x\n", VAR_13);

    VAR_8 = FUNC_0(VAR_11, 1, 0, &VAR_13);
    FUNC_12(VAR_4, VAR_8);
    FUNC_13(FUNC_11(0x00000000, VAR_13, 1), "Expected 00000000, got %.8x\n", VAR_13);

    VAR_8 = FUNC_0(VAR_11, 1, 1, &VAR_13);
    FUNC_12(VAR_4, VAR_8);
    FUNC_13(FUNC_11(0xffffffff, VAR_13, 1), "Expected ffffffff, got %.8x\n", VAR_13);

    VAR_8 = FUNC_9(VAR_9, VAR_2);
    FUNC_12(VAR_4, VAR_8);

    VAR_8 = FUNC_7(VAR_12, (GpImage*)VAR_10, 0,0,2,2, 0,0,2,2,
 VAR_7, VAR_9, ((void*)0), ((void*)0));
    FUNC_12(VAR_4, VAR_8);

    VAR_8 = FUNC_0(VAR_11, 0, 0, &VAR_13);
    FUNC_12(VAR_4, VAR_8);
    FUNC_13(FUNC_11(0x20405060, VAR_13, 1), "Expected 20405060, got %.8x\n", VAR_13);

    VAR_8 = FUNC_0(VAR_11, 0, 1, &VAR_13);
    FUNC_12(VAR_4, VAR_8);
    FUNC_13(FUNC_11(0x40506070, VAR_13, 1), "Expected 40506070, got %.8x\n", VAR_13);

    VAR_8 = FUNC_0(VAR_11, 1, 0, &VAR_13);
    FUNC_12(VAR_4, VAR_8);
    FUNC_13(FUNC_11(0x60708090, VAR_13, 1), "Expected 60708090, got %.8x\n", VAR_13);

    VAR_8 = FUNC_0(VAR_11, 1, 1, &VAR_13);
    FUNC_12(VAR_4, VAR_8);
    FUNC_13(FUNC_11(0xffffffff, VAR_13, 1), "Expected ffffffff, got %.8x\n", VAR_13);


    FUNC_4(VAR_12);
    FUNC_5((GpImage*)VAR_10);
    FUNC_5((GpImage*)VAR_11);
    FUNC_6(VAR_9);
}
