
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* get_params ) (int ,int *) ;int provctx; } ;
typedef TYPE_1__ OSSL_PROVIDER ;
typedef int OSSL_PARAM ;


 int FUNC_0 (int ,int *) ;

int FUNC_1(const OSSL_PROVIDER *VAR_0, OSSL_PARAM VAR_1[])
{
    return VAR_0->get_params == ((void*)0)
        ? 0 : VAR_0->get_params(VAR_0->provctx, VAR_1);
}
