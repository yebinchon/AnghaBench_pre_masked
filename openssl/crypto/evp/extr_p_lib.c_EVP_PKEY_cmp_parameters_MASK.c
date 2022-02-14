
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; TYPE_1__* ameth; } ;
struct TYPE_7__ {int (* param_cmp ) (TYPE_2__ const*,TYPE_2__ const*) ;} ;
typedef TYPE_2__ EVP_PKEY ;


 int FUNC_0 (TYPE_2__ const*,TYPE_2__ const*) ;

int FUNC_1(const EVP_PKEY *VAR_0, const EVP_PKEY *VAR_1)
{
    if (VAR_0->type != VAR_1->type)
        return -1;
    if (VAR_0->ameth && VAR_0->ameth->param_cmp)
        return VAR_0->ameth->param_cmp(VAR_0, VAR_1);
    return -2;
}
