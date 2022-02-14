
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int prime_len; int subprime_len; int generator; int gentmp; int kdf_type; } ;
struct TYPE_5__ {int keygen_info_count; int keygen_info; TYPE_2__* data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef TYPE_2__ DH_PKEY_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_3)
{
    DH_PKEY_CTX *VAR_4;

    if ((VAR_4 = FUNC_1(sizeof(*VAR_4))) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    VAR_4->prime_len = 2048;
    VAR_4->subprime_len = -1;
    VAR_4->generator = 2;
    VAR_4->kdf_type = VAR_2;

    VAR_3->data = VAR_4;
    VAR_3->keygen_info = VAR_4->gentmp;
    VAR_3->keygen_info_count = 2;

    return 1;
}
