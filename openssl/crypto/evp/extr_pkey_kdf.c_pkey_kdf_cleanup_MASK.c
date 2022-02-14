
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* data; } ;
struct TYPE_6__ {int kctx; } ;
typedef TYPE_1__ EVP_PKEY_KDF_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(EVP_PKEY_CTX *VAR_0)
{
    EVP_PKEY_KDF_CTX *VAR_1 = VAR_0->data;

    FUNC_0(VAR_1->kctx);
    FUNC_2(VAR_1);
    FUNC_1(VAR_1);
}
