
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key_len; int digest; int data_len; int data; int * key; } ;
typedef int HMAC_CTX ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*,unsigned int*) ;
 int FUNC_7 (int *,int *,int,int *,int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int ) ;
 char* FUNC_15 (unsigned char*,unsigned int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_16(void)
{
    char *VAR_2;
    HMAC_CTX *VAR_3 = ((void*)0);
    unsigned char VAR_4[VAR_0];
    unsigned int VAR_5;
    int VAR_6 = 0;

    VAR_3 = FUNC_4();
    FUNC_5(VAR_3);

    if (!FUNC_10(VAR_3)
        || !FUNC_12(FUNC_3(VAR_3))
        || !FUNC_9(FUNC_7(VAR_3, ((void*)0), 0, ((void*)0), ((void*)0)))
        || !FUNC_9(FUNC_8(VAR_3, VAR_1[4].data, VAR_1[4].data_len))
        || !FUNC_9(FUNC_7(VAR_3, VAR_1[4].key, -1, FUNC_0(), ((void*)0))))
        goto err;

    if (!FUNC_14(FUNC_7(VAR_3, VAR_1[4].key, VAR_1[4].key_len, FUNC_0(), ((void*)0)))
        || !FUNC_14(FUNC_8(VAR_3, VAR_1[4].data, VAR_1[4].data_len))
        || !FUNC_14(FUNC_6(VAR_3, VAR_4, &VAR_5)))
        goto err;

    VAR_2 = FUNC_15(VAR_4, VAR_5);
    if (!FUNC_13(VAR_2, VAR_1[4].digest))
        goto err;

    if (!FUNC_9(FUNC_7(VAR_3, ((void*)0), 0, FUNC_1(), ((void*)0))))
        goto err;

    if (!FUNC_14(FUNC_7(VAR_3, VAR_1[5].key, VAR_1[5].key_len, FUNC_1(), ((void*)0)))
        || !FUNC_11(FUNC_3(VAR_3), FUNC_1())
        || !FUNC_14(FUNC_8(VAR_3, VAR_1[5].data, VAR_1[5].data_len))
        || !FUNC_14(FUNC_6(VAR_3, VAR_4, &VAR_5)))
        goto err;

    VAR_2 = FUNC_15(VAR_4, VAR_5);
    if (!FUNC_13(VAR_2, VAR_1[5].digest))
        goto err;

    if (!FUNC_14(FUNC_7(VAR_3, VAR_1[6].key, VAR_1[6].key_len, ((void*)0), ((void*)0)))
        || !FUNC_14(FUNC_8(VAR_3, VAR_1[6].data, VAR_1[6].data_len))
        || !FUNC_14(FUNC_6(VAR_3, VAR_4, &VAR_5)))
        goto err;
    VAR_2 = FUNC_15(VAR_4, VAR_5);
    if (!FUNC_13(VAR_2, VAR_1[6].digest))
        goto err;

    VAR_6 = 1;
err:
    FUNC_2(VAR_3);
    return VAR_6;
}
