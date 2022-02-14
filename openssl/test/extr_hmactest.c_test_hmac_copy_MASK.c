
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int digest; int data_len; int data; int key_len; int key; } ;
typedef int HMAC_CTX ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,unsigned char*,unsigned int*) ;
 int FUNC_5 (int *,int ,int ,int ,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (unsigned char*,unsigned int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_11(void)
{
    char *VAR_2;
    HMAC_CTX *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
    unsigned char VAR_5[VAR_0];
    unsigned int VAR_6;
    int VAR_7 = 0;

    VAR_3 = FUNC_3();
    VAR_4 = FUNC_3();
    if (!FUNC_7(VAR_3) || !FUNC_7(VAR_4))
        goto err;

    if (!FUNC_9(FUNC_5(VAR_3, VAR_1[7].key, VAR_1[7].key_len, FUNC_0(), ((void*)0)))
        || !FUNC_9(FUNC_6(VAR_3, VAR_1[7].data, VAR_1[7].data_len))
        || !FUNC_9(FUNC_1(VAR_4, VAR_3))
        || !FUNC_9(FUNC_4(VAR_4, VAR_5, &VAR_6)))
        goto err;

    VAR_2 = FUNC_10(VAR_5, VAR_6);
    if (!FUNC_8(VAR_2, VAR_1[7].digest))
        goto err;

    VAR_7 = 1;
err:
    FUNC_2(VAR_4);
    FUNC_2(VAR_3);
    return VAR_7;
}
