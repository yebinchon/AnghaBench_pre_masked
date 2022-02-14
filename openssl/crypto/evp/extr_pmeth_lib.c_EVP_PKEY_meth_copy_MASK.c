
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int check; int ctrl_str; int ctrl; int derive; int derive_init; int decrypt; int decrypt_init; int encrypt; int encrypt_init; int verifyctx; int verifyctx_init; int signctx; int signctx_init; int verify_recover; int verify_recover_init; int verify; int verify_init; int sign; int sign_init; int keygen; int keygen_init; int paramgen; int paramgen_init; int cleanup; int copy; int init; } ;
typedef TYPE_1__ EVP_PKEY_METHOD ;



void FUNC_0(EVP_PKEY_METHOD *VAR_0, const EVP_PKEY_METHOD *VAR_1)
{

    VAR_0->init = VAR_1->init;
    VAR_0->copy = VAR_1->copy;
    VAR_0->cleanup = VAR_1->cleanup;

    VAR_0->paramgen_init = VAR_1->paramgen_init;
    VAR_0->paramgen = VAR_1->paramgen;

    VAR_0->keygen_init = VAR_1->keygen_init;
    VAR_0->keygen = VAR_1->keygen;

    VAR_0->sign_init = VAR_1->sign_init;
    VAR_0->sign = VAR_1->sign;

    VAR_0->verify_init = VAR_1->verify_init;
    VAR_0->verify = VAR_1->verify;

    VAR_0->verify_recover_init = VAR_1->verify_recover_init;
    VAR_0->verify_recover = VAR_1->verify_recover;

    VAR_0->signctx_init = VAR_1->signctx_init;
    VAR_0->signctx = VAR_1->signctx;

    VAR_0->verifyctx_init = VAR_1->verifyctx_init;
    VAR_0->verifyctx = VAR_1->verifyctx;

    VAR_0->encrypt_init = VAR_1->encrypt_init;
    VAR_0->encrypt = VAR_1->encrypt;

    VAR_0->decrypt_init = VAR_1->decrypt_init;
    VAR_0->decrypt = VAR_1->decrypt;

    VAR_0->derive_init = VAR_1->derive_init;
    VAR_0->derive = VAR_1->derive;

    VAR_0->ctrl = VAR_1->ctrl;
    VAR_0->ctrl_str = VAR_1->ctrl_str;

    VAR_0->check = VAR_1->check;
}
