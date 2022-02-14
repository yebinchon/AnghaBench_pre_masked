
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GpStatus ;
typedef int GpImage ;
typedef int GpBitmap ;
typedef int BYTE ;
typedef scalar_t__ ARGB ;


 scalar_t__ FUNC_0 (int *,int,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,int,int,int) ;
 scalar_t__ FUNC_2 (int,int,int,int ,int*,int **) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(void)
{
    GpStatus VAR_3;
    GpBitmap *VAR_4;
    ARGB VAR_5;
    BYTE VAR_6[16] = {0x00,0x00,0x00,0x00, 0x00,0xff,0xff,0x00,
                     0xff,0x00,0x00,0x00, 0xff,0xff,0xff,0x00};

    VAR_3 = FUNC_2(2, 2, 8, VAR_2, VAR_6, &VAR_4);
    FUNC_5(VAR_1, VAR_3);


    VAR_3 = FUNC_0(((void*)0), 1, 1, &VAR_5);
    FUNC_5(VAR_0, VAR_3);

    VAR_3 = FUNC_0(VAR_4, 1, 1, ((void*)0));
    FUNC_5(VAR_0, VAR_3);

    VAR_3 = FUNC_1(((void*)0), 1, 1, 0);
    FUNC_5(VAR_0, VAR_3);


    VAR_3 = FUNC_0(VAR_4, -1, 1, &VAR_5);
    FUNC_5(VAR_0, VAR_3);

    VAR_3 = FUNC_1(VAR_4, -1, 1, 0);
    FUNC_5(VAR_0, VAR_3);

    VAR_3 = FUNC_0(VAR_4, 1, -1, &VAR_5);
    FUNC_6(VAR_3 == VAR_0 ||
       FUNC_4(VAR_3 == VAR_1),
       "Expected InvalidParameter, got %.8x\n", VAR_3);

if (0)
{
    VAR_3 = FUNC_1(VAR_4, 1, -1, 0);
    FUNC_6(VAR_3 == VAR_0 ||
       FUNC_4(VAR_3 == VAR_1),
       "Expected InvalidParameter, got %.8x\n", VAR_3);
}

    VAR_3 = FUNC_0(VAR_4, 2, 1, &VAR_5);
    FUNC_5(VAR_0, VAR_3);

    VAR_3 = FUNC_1(VAR_4, 2, 1, 0);
    FUNC_5(VAR_0, VAR_3);

    VAR_3 = FUNC_0(VAR_4, 1, 2, &VAR_5);
    FUNC_5(VAR_0, VAR_3);

    VAR_3 = FUNC_1(VAR_4, 1, 2, 0);
    FUNC_5(VAR_0, VAR_3);


    VAR_3 = FUNC_0(VAR_4, 1, 1, &VAR_5);
    FUNC_5(VAR_1, VAR_3);
    FUNC_5(0xffffffff, VAR_5);

    VAR_3 = FUNC_0(VAR_4, 0, 1, &VAR_5);
    FUNC_5(VAR_1, VAR_3);
    FUNC_5(0xff0000ff, VAR_5);

    VAR_3 = FUNC_1(VAR_4, 1, 1, 0xff676869);
    FUNC_5(VAR_1, VAR_3);

    VAR_3 = FUNC_1(VAR_4, 0, 0, 0xff474849);
    FUNC_5(VAR_1, VAR_3);

    VAR_3 = FUNC_0(VAR_4, 1, 1, &VAR_5);
    FUNC_5(VAR_1, VAR_3);
    FUNC_5(0xff676869, VAR_5);

    VAR_3 = FUNC_0(VAR_4, 0, 0, &VAR_5);
    FUNC_5(VAR_1, VAR_3);
    FUNC_5(0xff474849, VAR_5);

    VAR_3 = FUNC_3((GpImage*)VAR_4);
    FUNC_5(VAR_1, VAR_3);
}
