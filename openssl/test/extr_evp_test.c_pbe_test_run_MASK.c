
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* err; TYPE_1__* data; } ;
struct TYPE_5__ {scalar_t__ pbe_type; int key_len; int key; int md; int iter; int id; int salt_len; int salt; int pass_len; scalar_t__ pass; int maxmem; int p; int r; int N; } ;
typedef TYPE_1__ PBE_DATA ;
typedef TYPE_2__ EVP_TEST ;


 scalar_t__ FUNC_0 (char const*,int ,int ,int ,int ,int ,int ,int ,unsigned char*,int ) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ,int ,int ,int ,int ,unsigned char*,int ) ;
 scalar_t__ FUNC_4 (char*,int ,int ,int ,int ,int ,int ,unsigned char*) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (TYPE_2__*,char*,int ,int ,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_7(EVP_TEST *VAR_3)
{
    PBE_DATA *VAR_4 = VAR_3->data;
    unsigned char *VAR_5;

    if (!FUNC_5(VAR_5 = FUNC_2(VAR_4->key_len))) {
        VAR_3->err = "INTERNAL_ERROR";
        goto err;
    }
    if (VAR_4->pbe_type == VAR_0) {
        if (FUNC_4((char *)VAR_4->pass, VAR_4->pass_len,
                              VAR_4->salt, VAR_4->salt_len,
                              VAR_4->iter, VAR_4->md,
                              VAR_4->key_len, VAR_5) == 0) {
            VAR_3->err = "PBKDF2_ERROR";
            goto err;
        }

    } else if (VAR_4->pbe_type == VAR_2) {
        if (FUNC_0((const char *)VAR_4->pass, VAR_4->pass_len,
                           VAR_4->salt, VAR_4->salt_len, VAR_4->N,
                           VAR_4->r, VAR_4->p, VAR_4->maxmem,
                           VAR_5, VAR_4->key_len) == 0) {
            VAR_3->err = "SCRYPT_ERROR";
            goto err;
        }

    } else if (VAR_4->pbe_type == VAR_1) {
        if (FUNC_3(VAR_4->pass, VAR_4->pass_len,
                               VAR_4->salt, VAR_4->salt_len,
                               VAR_4->id, VAR_4->iter, VAR_4->key_len,
                               VAR_5, VAR_4->md) == 0) {
            VAR_3->err = "PKCS12_ERROR";
            goto err;
        }
    }
    if (!FUNC_6(VAR_3, "KEY_MISMATCH", VAR_4->key, VAR_4->key_len,
                            VAR_5, VAR_4->key_len))
        goto err;

    VAR_3->err = ((void*)0);
err:
    FUNC_1(VAR_5);
    return 1;
}
