
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_9__ {int algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
struct TYPE_11__ {TYPE_1__* hash_algo; } ;
struct TYPE_10__ {TYPE_3__* msg_imprint; } ;
typedef TYPE_2__ TS_TST_INFO ;
typedef TYPE_3__ TS_MSG_IMPRINT ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int BIO ;


 int FUNC_0 (int *,unsigned char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned char*,int *) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int const*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (unsigned char*) ;
 unsigned char* FUNC_9 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int ,int ) ;
 TYPE_1__* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(BIO *VAR_3, TS_TST_INFO *VAR_4,
                              X509_ALGOR **VAR_5,
                              unsigned char **VAR_6, unsigned *VAR_7)
{
    TS_MSG_IMPRINT *VAR_8 = VAR_4->msg_imprint;
    X509_ALGOR *VAR_9 = VAR_8->hash_algo;
    const EVP_MD *VAR_10;
    EVP_MD_CTX *VAR_11 = ((void*)0);
    unsigned char VAR_12[4096];
    int VAR_13;

    *VAR_5 = ((void*)0);
    *VAR_6 = ((void*)0);

    if ((*VAR_5 = FUNC_11(VAR_9)) == ((void*)0))
        goto err;
    if ((VAR_10 = FUNC_7((*VAR_5)->algorithm)) == ((void*)0)) {
        FUNC_10(VAR_1, VAR_2);
        goto err;
    }
    VAR_13 = FUNC_6(VAR_10);
    if (VAR_13 < 0)
        goto err;
    *VAR_7 = VAR_13;
    if ((*VAR_6 = FUNC_9(*VAR_7)) == ((void*)0)) {
        FUNC_10(VAR_1, VAR_0);
        goto err;
    }

    VAR_11 = FUNC_5();
    if (VAR_11 == ((void*)0)) {
        FUNC_10(VAR_1, VAR_0);
        goto err;
    }
    if (!FUNC_2(VAR_11, VAR_10))
        goto err;
    while ((VAR_13 = FUNC_0(VAR_3, VAR_12, sizeof(VAR_12))) > 0) {
        if (!FUNC_3(VAR_11, VAR_12, VAR_13))
            goto err;
    }
    if (!FUNC_1(VAR_11, *VAR_6, ((void*)0)))
        goto err;
    FUNC_4(VAR_11);

    return 1;
 err:
    FUNC_4(VAR_11);
    FUNC_12(*VAR_5);
    FUNC_8(*VAR_6);
    *VAR_7 = 0;
    *VAR_6 = 0;
    return 0;
}
