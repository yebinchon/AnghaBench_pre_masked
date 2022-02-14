
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int rbio; int wbio; } ;
typedef int SSL_CTX ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_4 ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_12 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_13 (int *,int *,TYPE_1__**,TYPE_1__**,int,int) ;
 int FUNC_14 (int*,int*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (TYPE_1__*,TYPE_1__*,int,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_17(int VAR_6, int VAR_7,
                             int VAR_8, int VAR_9)
{
    SSL_CTX *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    SSL *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    int VAR_14 = 0;
    int VAR_15, VAR_16;

    if (!FUNC_8(FUNC_14(&VAR_15, &VAR_16)))
        goto end;


    if (!FUNC_15(VAR_15))
        return 1;


    if (!FUNC_8(FUNC_12(FUNC_10(),
                                       FUNC_9(),
                                       VAR_3, VAR_3,
                                       &VAR_11, &VAR_10, VAR_4, VAR_5))
            || !FUNC_8(FUNC_3(VAR_10,
                                                  "AES128-GCM-SHA256"))
            || !FUNC_8(FUNC_13(VAR_11, VAR_10, &VAR_13,
                                          &VAR_12, VAR_16, VAR_15)))
        goto end;

    if (!VAR_6) {
        if (!FUNC_8(FUNC_5(VAR_12, VAR_2)))
            goto end;
    }

    if (!VAR_8) {
        if (!FUNC_8(FUNC_5(VAR_13, VAR_2)))
            goto end;
    }

    if (!VAR_7) {
        if (!FUNC_8(FUNC_5(VAR_12, VAR_1)))
            goto end;
    }

    if (!VAR_9) {
        if (!FUNC_8(FUNC_5(VAR_13, VAR_1)))
            goto end;
    }

    if (!FUNC_8(FUNC_11(VAR_13, VAR_12,
                                                VAR_0)))
        goto end;

    if (!VAR_6) {
        if (!FUNC_7(FUNC_1(VAR_12->wbio)))
            goto end;
    } else {
        if (!FUNC_8(FUNC_1(VAR_12->wbio)))
            goto end;
    }

    if (!VAR_8) {
        if (!FUNC_7(FUNC_1(VAR_13->wbio)))
            goto end;
    } else {
        if (!FUNC_8(FUNC_1(VAR_13->wbio)))
            goto end;
    }

    if (!VAR_7) {
        if (!FUNC_7(FUNC_0(VAR_12->rbio)))
            goto end;
    } else {
        if (!FUNC_8(FUNC_0(VAR_12->rbio)))
            goto end;
    }

    if (!VAR_9) {
        if (!FUNC_7(FUNC_0(VAR_13->rbio)))
            goto end;
    } else {
        if (!FUNC_8(FUNC_0(VAR_13->rbio)))
            goto end;
    }

    if (!FUNC_8(FUNC_16(VAR_12, VAR_13, VAR_15, VAR_16)))
        goto end;

    VAR_14 = 1;
end:
    if (VAR_12) {
        FUNC_6(VAR_12);
        FUNC_4(VAR_12);
    }
    if (VAR_13) {
        FUNC_6(VAR_13);
        FUNC_4(VAR_13);
    }
    FUNC_2(VAR_11);
    FUNC_2(VAR_10);
    VAR_13 = VAR_12 = ((void*)0);
    return VAR_14;
}
