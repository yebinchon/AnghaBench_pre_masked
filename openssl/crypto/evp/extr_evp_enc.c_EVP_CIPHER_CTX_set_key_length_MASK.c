
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int key_len; TYPE_2__* cipher; int provctx; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_CIPHER_CTX ;


 int FUNC_0 (TYPE_1__*,int ,int,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,size_t*) ;
 int FUNC_4 (TYPE_2__*,int ,int *) ;

int FUNC_5(EVP_CIPHER_CTX *VAR_8, int VAR_9)
{
    int VAR_10;
    OSSL_PARAM VAR_11[2] = { VAR_7, VAR_7 };
    size_t VAR_12 = VAR_9;

    VAR_11[0] = FUNC_3(VAR_6, &VAR_12);
    VAR_10 = FUNC_4(VAR_8->cipher, VAR_8->provctx, VAR_11);

    if (VAR_10 != VAR_2)
        return VAR_10;


    if (VAR_8->cipher->flags & VAR_0)
        return FUNC_0(VAR_8, VAR_3, VAR_9, ((void*)0));
    if (FUNC_1(VAR_8) == VAR_9)
        return 1;
    if ((VAR_9 > 0) && (VAR_8->cipher->flags & VAR_1)) {
        VAR_8->key_len = VAR_9;
        return 1;
    }
    FUNC_2(VAR_4, VAR_5);
    return 0;
}
