
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_11__ {int wbio; } ;
typedef int SSL_CTX ;
typedef TYPE_1__ SSL ;
typedef int FILE ;
typedef unsigned char BIO ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*,int **) ;
 int FUNC_2 (int ) ;
 unsigned char* FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (unsigned char*,unsigned char*,scalar_t__) ;
 int FUNC_5 (unsigned char*) ;
 unsigned char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (unsigned char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_13 (TYPE_1__*,int,scalar_t__,int,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (unsigned char*,int,unsigned char*,int) ;
 int FUNC_16 (unsigned char*) ;
 int FUNC_17 (int ) ;
 int VAR_5 ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int VAR_6 ;
 int FUNC_20 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_21 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_22 (int *,int *,TYPE_1__**,TYPE_1__**,int,int) ;
 int FUNC_23 (int*,int*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int) ;
 int FUNC_26 (int ,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_27(void)
{
    SSL_CTX *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    SSL *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    unsigned char *VAR_13, *VAR_14;
    BIO *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
    int VAR_17, VAR_18, VAR_19, VAR_20;
    ssize_t VAR_21 = 0;
    off_t VAR_22 = 0;
    int VAR_23 = 0;
    FILE *VAR_24;

    VAR_13 = FUNC_6(VAR_1);
    VAR_14 = FUNC_6(VAR_1);
    if (!FUNC_16(VAR_13) || !FUNC_16(VAR_14)
        || !FUNC_17(FUNC_23(&VAR_17, &VAR_18)))
        goto end;


    if (!FUNC_25(VAR_18)) {
        VAR_23 = 1;
        goto end;
    }


    if (!FUNC_17(FUNC_21(FUNC_19(),
                                       FUNC_18(),
                                       VAR_5, VAR_5,
                                       &VAR_10, &VAR_9, VAR_6, VAR_7))
        || !FUNC_17(FUNC_9(VAR_9,
                                              "AES128-GCM-SHA256"))
        || !FUNC_17(FUNC_22(VAR_10, VAR_9, &VAR_12,
                                          &VAR_11, VAR_18, VAR_17)))
        goto end;

    if (!FUNC_17(FUNC_20(VAR_12, VAR_11,
                                         VAR_2))
        || !FUNC_17(FUNC_2(VAR_12->wbio)))
        goto end;

    FUNC_7(VAR_13, VAR_1);
    VAR_15 = FUNC_3(VAR_8, "wb");
    if (!FUNC_16(VAR_15))
        goto end;

    if (FUNC_4(VAR_15, VAR_13, VAR_1) != VAR_1)
        goto end;

    FUNC_0(VAR_15);
    VAR_15 = ((void*)0);
    VAR_16 = FUNC_3(VAR_8, "rb");
    FUNC_1(VAR_16, &VAR_24);
    VAR_19 = FUNC_24(VAR_24);

    while (VAR_22 < VAR_1) {
        VAR_21 = FUNC_26(VAR_0, VAR_1 - VAR_22);
        while ((VAR_20 = FUNC_13(VAR_12,
                                   VAR_19,
                                   VAR_22,
                                   VAR_21,
                                   0)) != VAR_21) {
            if (FUNC_11(VAR_12, VAR_20) != VAR_4)
                goto end;
        }
        while ((VAR_20 = FUNC_12(VAR_11,
                               VAR_14 + VAR_22,
                               VAR_21)) != VAR_21) {
            if (FUNC_11(VAR_11, VAR_20) != VAR_3)
                goto end;
        }


        if (!FUNC_15(VAR_14 + VAR_22,
                         VAR_21,
                         VAR_13 + VAR_22,
                         VAR_21))
            goto end;

        VAR_22 += VAR_21;
    }

    VAR_23 = 1;
end:
    if (VAR_11) {
        FUNC_14(VAR_11);
        FUNC_10(VAR_11);
    }
    if (VAR_12) {
        FUNC_14(VAR_12);
        FUNC_10(VAR_12);
    }
    FUNC_8(VAR_10);
    FUNC_8(VAR_9);
    VAR_12 = VAR_11 = ((void*)0);
    FUNC_0(VAR_15);
    FUNC_0(VAR_16);
    FUNC_5(VAR_13);
    FUNC_5(VAR_14);
    return VAR_23;
}
