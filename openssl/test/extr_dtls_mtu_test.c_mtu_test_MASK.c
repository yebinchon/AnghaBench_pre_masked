
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 size_t FUNC_0 (int *,unsigned char*,int) ;
 size_t FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,unsigned char*,size_t) ;
 int FUNC_9 (char*,char const*,unsigned long,unsigned long,unsigned long,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (size_t,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,int *,int ) ;
 int FUNC_17 (int *,int *,int **,int **,int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_18 (unsigned char*,int,int) ;

__attribute__((used)) static int FUNC_19(SSL_CTX *VAR_3, const char *VAR_4, int VAR_5)
{
    SSL *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    BIO *VAR_8 = ((void*)0);
    int VAR_9;
    size_t VAR_10;
    size_t VAR_11[30];
    unsigned char VAR_12[600];
    int VAR_13 = 0;

    FUNC_18(VAR_12, 0x5a, sizeof(VAR_12));

    if (!FUNC_15(FUNC_17(VAR_3, VAR_3, &VAR_6, &VAR_7,
                                      ((void*)0), ((void*)0))))
        goto end;

    if (VAR_5)
        FUNC_7(VAR_6, VAR_1);

    if (!FUNC_15(FUNC_5(VAR_6, VAR_4))
            || !FUNC_15(FUNC_5(VAR_7, VAR_4))
            || !FUNC_13(VAR_8 = FUNC_4(VAR_6))
            || !FUNC_15(FUNC_16(VAR_7, VAR_6,
                                                VAR_0)))
        goto end;

    if (VAR_2)
        FUNC_11("Channel established");



    for (VAR_9 = 0; VAR_9 < 30; VAR_9++) {
        FUNC_6(VAR_7, 500 + VAR_9);
        VAR_11[VAR_9] = FUNC_1(VAR_7);
        if (VAR_2)
            FUNC_11("%s%s MTU for record mtu %d = %lu",
                      VAR_4, VAR_5 ? "-noEtM" : "",
                      500 + VAR_9, (unsigned long)VAR_11[VAR_9]);
        if (!FUNC_14(VAR_11[VAR_9], 0)) {
            FUNC_11("Cipher %s MTU %d", VAR_4, 500 + VAR_9);
            goto end;
        }
    }


    FUNC_6(VAR_7, 1000);





    for (VAR_10 = VAR_11[0]; VAR_10 <= VAR_11[29]; VAR_10++) {
        size_t VAR_14;

        if (!FUNC_12(FUNC_8(VAR_7, VAR_12, VAR_10), (int)VAR_10))
            goto end;
        VAR_14 = FUNC_0(VAR_8, VAR_12, sizeof(VAR_12));
        if (VAR_2)
            FUNC_11("record %zu for payload %zu", VAR_14, VAR_10);

        for (VAR_9 = 0; VAR_9 < 30; VAR_9++) {


            if (!FUNC_10(VAR_10 <= VAR_11[VAR_9] && VAR_14 > (size_t)(500 + VAR_9))) {




                FUNC_9("%s: s=%lu, mtus[i]=%lu, reclen=%lu, i=%d",
                           VAR_4, (unsigned long)VAR_10, (unsigned long)VAR_11[VAR_9],
                           (unsigned long)VAR_14, 500 + VAR_9);
                goto end;
            }
            if (!FUNC_10(VAR_10 > VAR_11[VAR_9] && VAR_14 <= (size_t)(500 + VAR_9))) {





                FUNC_9("%s: s=%lu, mtus[i]=%lu, reclen=%lu, i=%d",
                           VAR_4, (unsigned long)VAR_10, (unsigned long)VAR_11[VAR_9],
                           (unsigned long)VAR_14, 500 + VAR_9);
                goto end;
            }
        }
    }
    VAR_13 = 1;
    if (FUNC_2(VAR_7))
        VAR_13 = 2;
 end:
    FUNC_3(VAR_7);
    FUNC_3(VAR_6);
    return VAR_13;
}
