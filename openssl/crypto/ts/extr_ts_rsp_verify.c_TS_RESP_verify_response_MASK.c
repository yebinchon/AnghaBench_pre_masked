
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * tst_info; int * token; } ;
typedef int TS_VERIFY_CTX ;
typedef int TS_TST_INFO ;
typedef TYPE_1__ TS_RESP ;
typedef int PKCS7 ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(TS_VERIFY_CTX *VAR_0, TS_RESP *VAR_1)
{
    PKCS7 *VAR_2 = VAR_1->token;
    TS_TST_INFO *VAR_3 = VAR_1->tst_info;
    int VAR_4 = 0;

    if (!FUNC_1(VAR_1))
        goto err;
    if (!FUNC_0(VAR_0, VAR_2, VAR_3))
        goto err;
    VAR_4 = 1;

 err:
    return VAR_4;
}
