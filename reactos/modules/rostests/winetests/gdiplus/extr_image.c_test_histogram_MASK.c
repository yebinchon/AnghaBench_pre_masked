
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;
typedef int HistogramFormat ;
typedef size_t GpStatus ;
typedef int GpImage ;
typedef int GpBitmap ;


 size_t FUNC_0 (int*) ;
 int FUNC_1 (int *,size_t,int,int) ;
 size_t FUNC_2 (size_t const,size_t const,int ,int ,int *,int **) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int,size_t) ;
 int FUNC_5 (int,char*,size_t) ;
 size_t FUNC_6 (int *,int,int,size_t*,size_t*,size_t*,size_t*) ;
 size_t FUNC_7 (int,size_t*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    UINT VAR_11[256], VAR_12[256], VAR_13[256], VAR_14[256];
    HistogramFormat VAR_15[] =
    {
        VAR_1,
        VAR_5,
        VAR_7,
        VAR_4,
        VAR_2,
        VAR_3,
        VAR_6,
        VAR_0,
    };
    const UINT VAR_16 = 8, VAR_17 = 16;
    UINT VAR_18, VAR_19, VAR_20;
    GpStatus VAR_21;
    GpBitmap *VAR_22;

    if (!&FUNC_7)
    {
        FUNC_8("GdipBitmapGetHistogramSize is not supported\n");
        return;
    }

    VAR_21 = FUNC_7(VAR_1, ((void*)0));
    FUNC_4(VAR_8, VAR_21);

    VAR_21 = FUNC_7(0xff, ((void*)0));
    FUNC_4(VAR_8, VAR_21);

    VAR_18 = 123;
    VAR_21 = FUNC_7(10, &VAR_18);
    FUNC_4(VAR_9, VAR_21);
    FUNC_4(256, VAR_18);

    for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_15); VAR_19++)
    {
        VAR_18 = 0;
        VAR_21 = FUNC_7(VAR_15[VAR_19], &VAR_18);
        FUNC_4(VAR_9, VAR_21);
        FUNC_4(256, VAR_18);
    }

    VAR_22 = ((void*)0);
    VAR_21 = FUNC_2(VAR_16, VAR_17, 0, VAR_10, ((void*)0), &VAR_22);
    FUNC_4(VAR_9, VAR_21);


    for (VAR_20 = 0; VAR_20 < VAR_16; VAR_20++)
    {
        FUNC_1(VAR_22, VAR_20, 0, 0xffff0000);
        FUNC_1(VAR_22, VAR_20, 1, 0xff00ff00);
        FUNC_1(VAR_22, VAR_20, 2, 0xff0000ff);

        FUNC_1(VAR_22, VAR_20, 3, 0xff010000);
        FUNC_1(VAR_22, VAR_20, 4, 0xff003f00);
        FUNC_1(VAR_22, VAR_20, 5, 0xff000020);
    }

    VAR_21 = FUNC_6(((void*)0), VAR_7, 256, VAR_11, VAR_12, VAR_13, VAR_14);
    FUNC_4(VAR_8, VAR_21);

    VAR_21 = FUNC_6(VAR_22, 123, 256, VAR_11, VAR_12, VAR_13, VAR_14);
    FUNC_4(VAR_8, VAR_21);

    VAR_21 = FUNC_6(VAR_22, 123, 256, VAR_11, VAR_12, VAR_13, ((void*)0));
    FUNC_4(VAR_8, VAR_21);

    VAR_21 = FUNC_6(VAR_22, 123, 256, VAR_11, VAR_12, ((void*)0), ((void*)0));
    FUNC_4(VAR_8, VAR_21);

    VAR_21 = FUNC_6(VAR_22, 123, 256, VAR_11, ((void*)0), ((void*)0), ((void*)0));
    FUNC_4(VAR_8, VAR_21);


    VAR_21 = FUNC_6(VAR_22, VAR_7, 256, VAR_11, VAR_12, VAR_13, VAR_14);
    FUNC_4(VAR_8, VAR_21);

    VAR_21 = FUNC_6(VAR_22, VAR_7, 100, VAR_11, VAR_12, VAR_13, ((void*)0));
    FUNC_4(VAR_8, VAR_21);

    VAR_21 = FUNC_6(VAR_22, VAR_7, 257, VAR_11, VAR_12, VAR_13, ((void*)0));
    FUNC_4(VAR_8, VAR_21);


    VAR_21 = FUNC_6(VAR_22, VAR_7, 256, VAR_11, VAR_12, VAR_13, ((void*)0));
    FUNC_4(VAR_9, VAR_21);

    FUNC_5(VAR_11[0xff] == VAR_16, "Got red (0xff) %u\n", VAR_11[0xff]);
    FUNC_5(VAR_12[0xff] == VAR_16, "Got green (0xff) %u\n", VAR_12[0xff]);
    FUNC_5(VAR_13[0xff] == VAR_16, "Got blue (0xff) %u\n", VAR_12[0xff]);
    FUNC_5(VAR_11[0x01] == VAR_16, "Got red (0x01) %u\n", VAR_11[0x01]);
    FUNC_5(VAR_12[0x3f] == VAR_16, "Got green (0x3f) %u\n", VAR_12[0x3f]);
    FUNC_5(VAR_13[0x20] == VAR_16, "Got blue (0x20) %u\n", VAR_12[0x20]);


    VAR_21 = FUNC_6(VAR_22, VAR_1, 256, VAR_11, VAR_12, VAR_13, ((void*)0));
    FUNC_4(VAR_8, VAR_21);

    VAR_21 = FUNC_6(VAR_22, VAR_1, 256, VAR_11, VAR_12, VAR_13, VAR_14);
    FUNC_4(VAR_9, VAR_21);

    FUNC_5(VAR_12[0xff] == VAR_16, "Got red (0xff) %u\n", VAR_12[0xff]);
    FUNC_5(VAR_13[0xff] == VAR_16, "Got green (0xff) %u\n", VAR_13[0xff]);
    FUNC_5(VAR_14[0xff] == VAR_16, "Got blue (0xff) %u\n", VAR_14[0xff]);
    FUNC_5(VAR_12[0x01] == VAR_16, "Got red (0x01) %u\n", VAR_12[0x01]);
    FUNC_5(VAR_13[0x3f] == VAR_16, "Got green (0x3f) %u\n", VAR_13[0x3f]);
    FUNC_5(VAR_14[0x20] == VAR_16, "Got blue (0x20) %u\n", VAR_14[0x20]);

    FUNC_5(VAR_11[0xff] == VAR_16 * VAR_17, "Got alpha (0xff) %u\n", VAR_11[0xff]);


    VAR_21 = FUNC_6(VAR_22, VAR_4, 256, VAR_11, VAR_12, VAR_13, VAR_14);
    FUNC_4(VAR_8, VAR_21);

    VAR_21 = FUNC_6(VAR_22, VAR_4, 256, VAR_11, VAR_12, VAR_13, ((void*)0));
    FUNC_4(VAR_8, VAR_21);

    VAR_21 = FUNC_6(VAR_22, VAR_4, 256, VAR_11, VAR_12, ((void*)0), ((void*)0));
    FUNC_4(VAR_8, VAR_21);

    VAR_21 = FUNC_6(VAR_22, VAR_4, 256, VAR_11, ((void*)0), ((void*)0), ((void*)0));
    FUNC_4(VAR_9, VAR_21);

    FUNC_3((GpImage*)VAR_22);
}
