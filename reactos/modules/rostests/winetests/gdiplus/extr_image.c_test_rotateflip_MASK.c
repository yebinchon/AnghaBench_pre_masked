
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bits ;
typedef int UINT ;
typedef int GpStatus ;
typedef int GpImage ;
typedef int GpBitmap ;
typedef int BYTE ;
typedef int ARGB ;


 int FUNC_0 (int *,int,int,int*) ;
 int FUNC_1 (int,int,int,int ,int*,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int*,int const*,int) ;

__attribute__((used)) static void FUNC_8(void)
{
    GpImage *VAR_5;
    GpStatus VAR_6;
    BYTE VAR_7[24];
    static const BYTE VAR_8[24] = {
        0,0,0xff, 0,0xff,0, 0xff,0,0, 23,23,23,
        0xff,0xff,0, 0xff,0,0xff, 0,0xff,0xff, 23,23,23};
    UINT VAR_9, VAR_10;
    ARGB VAR_11;

    FUNC_7(VAR_7, VAR_8, sizeof(VAR_7));
    VAR_6 = FUNC_1(3, 2, 12, VAR_1, VAR_7, (GpBitmap**)&VAR_5);
    FUNC_6(VAR_0, VAR_6);

    VAR_6 = FUNC_5(VAR_5, VAR_2);
    FUNC_6(VAR_0, VAR_6);

    VAR_6 = FUNC_4(VAR_5, &VAR_9);
    FUNC_6(VAR_0, VAR_6);
    VAR_6 = FUNC_3(VAR_5, &VAR_10);
    FUNC_6(VAR_0, VAR_6);
    FUNC_6(2, VAR_9);
    FUNC_6(3, VAR_10);

    VAR_6 = FUNC_0((GpBitmap*)VAR_5, 0, 0, &VAR_11);
    FUNC_6(VAR_0, VAR_6);
    FUNC_6(0xff00ffff, VAR_11);

    VAR_6 = FUNC_0((GpBitmap*)VAR_5, 1, 0, &VAR_11);
    FUNC_6(VAR_0, VAR_6);
    FUNC_6(0xffff0000, VAR_11);

    VAR_6 = FUNC_0((GpBitmap*)VAR_5, 0, 2, &VAR_11);
    FUNC_6(VAR_0, VAR_6);
    FUNC_6(0xffffff00, VAR_11);

    VAR_6 = FUNC_0((GpBitmap*)VAR_5, 1, 2, &VAR_11);
    FUNC_6(VAR_0, VAR_6);
    FUNC_6(0xff0000ff, VAR_11);

    FUNC_6(0, VAR_7[0]);
    FUNC_6(0, VAR_7[1]);
    FUNC_6(0xff, VAR_7[2]);

    FUNC_2(VAR_5);

    FUNC_7(VAR_7, VAR_8, sizeof(VAR_7));
    VAR_6 = FUNC_1(3, 2, 12, VAR_1, VAR_7, (GpBitmap**)&VAR_5);
    FUNC_6(VAR_0, VAR_6);

    VAR_6 = FUNC_5(VAR_5, VAR_3);
    FUNC_6(VAR_0, VAR_6);

    VAR_6 = FUNC_4(VAR_5, &VAR_9);
    FUNC_6(VAR_0, VAR_6);
    VAR_6 = FUNC_3(VAR_5, &VAR_10);
    FUNC_6(VAR_0, VAR_6);
    FUNC_6(3, VAR_9);
    FUNC_6(2, VAR_10);

    VAR_6 = FUNC_0((GpBitmap*)VAR_5, 0, 0, &VAR_11);
    FUNC_6(VAR_0, VAR_6);
    FUNC_6(0xff0000ff, VAR_11);

    VAR_6 = FUNC_0((GpBitmap*)VAR_5, 2, 0, &VAR_11);
    FUNC_6(VAR_0, VAR_6);
    FUNC_6(0xffff0000, VAR_11);

    VAR_6 = FUNC_0((GpBitmap*)VAR_5, 0, 1, &VAR_11);
    FUNC_6(VAR_0, VAR_6);
    FUNC_6(0xffffff00, VAR_11);

    VAR_6 = FUNC_0((GpBitmap*)VAR_5, 2, 1, &VAR_11);
    FUNC_6(VAR_0, VAR_6);
    FUNC_6(0xff00ffff, VAR_11);

    FUNC_6(0, VAR_7[0]);
    FUNC_6(0, VAR_7[1]);
    FUNC_6(0xff, VAR_7[2]);

    FUNC_2(VAR_5);

    FUNC_7(VAR_7, VAR_8, sizeof(VAR_7));
    VAR_6 = FUNC_1(3, 2, 12, VAR_1, VAR_7, (GpBitmap**)&VAR_5);
    FUNC_6(VAR_0, VAR_6);

    VAR_6 = FUNC_5(VAR_5, VAR_4);
    FUNC_6(VAR_0, VAR_6);

    VAR_6 = FUNC_4(VAR_5, &VAR_9);
    FUNC_6(VAR_0, VAR_6);
    VAR_6 = FUNC_3(VAR_5, &VAR_10);
    FUNC_6(VAR_0, VAR_6);
    FUNC_6(3, VAR_9);
    FUNC_6(2, VAR_10);

    VAR_6 = FUNC_0((GpBitmap*)VAR_5, 0, 0, &VAR_11);
    FUNC_6(VAR_0, VAR_6);
    FUNC_6(0xff00ffff, VAR_11);

    VAR_6 = FUNC_0((GpBitmap*)VAR_5, 2, 0, &VAR_11);
    FUNC_6(VAR_0, VAR_6);
    FUNC_6(0xffffff00, VAR_11);

    VAR_6 = FUNC_0((GpBitmap*)VAR_5, 0, 1, &VAR_11);
    FUNC_6(VAR_0, VAR_6);
    FUNC_6(0xffff0000, VAR_11);

    VAR_6 = FUNC_0((GpBitmap*)VAR_5, 2, 1, &VAR_11);
    FUNC_6(VAR_0, VAR_6);
    FUNC_6(0xff0000ff, VAR_11);

    FUNC_6(0, VAR_7[0]);
    FUNC_6(0, VAR_7[1]);
    FUNC_6(0xff, VAR_7[2]);

    FUNC_2(VAR_5);
}
