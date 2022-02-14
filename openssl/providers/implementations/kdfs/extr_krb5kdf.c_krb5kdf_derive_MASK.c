
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int constant_len; int * constant; int key_len; int * key; int cipher; } ;
typedef TYPE_1__ KRB5KDF_CTX ;
typedef int EVP_CIPHER ;
typedef int ENGINE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const*,int *,int *,int ,int *,int ,unsigned char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_4, unsigned char *VAR_5,
                              size_t VAR_6)
{
    KRB5KDF_CTX *VAR_7 = (KRB5KDF_CTX *)VAR_4;
    const EVP_CIPHER *VAR_8 = FUNC_2(&VAR_7->cipher);
    ENGINE *VAR_9 = FUNC_3(&VAR_7->cipher);

    if (VAR_8 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    if (VAR_7->key == ((void*)0)) {
        FUNC_0(VAR_0, VAR_3);
        return 0;
    }
    if (VAR_7->constant == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    return FUNC_1(VAR_8, VAR_9, VAR_7->key, VAR_7->key_len,
                   VAR_7->constant, VAR_7->constant_len,
                   VAR_5, VAR_6);
}
