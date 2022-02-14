
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* data; } ;
struct TYPE_6__ {int ctx; int output; TYPE_1__* params; } ;
struct TYPE_5__ {int data; int * key; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef TYPE_2__ KDF_DATA ;
typedef TYPE_3__ EVP_TEST ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(EVP_TEST *VAR_0)
{
    KDF_DATA *VAR_1 = VAR_0->data;
    OSSL_PARAM *VAR_2;

    for (VAR_2 = VAR_1->params; VAR_2->key != ((void*)0); VAR_2++)
        FUNC_1(VAR_2->data);
    FUNC_1(VAR_1->output);
    FUNC_0(VAR_1->ctx);
}
