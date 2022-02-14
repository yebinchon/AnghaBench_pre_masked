
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* reqdigest; } ;
typedef TYPE_1__ EVP_MD_CTX ;
typedef int EVP_MD ;



const EVP_MD *FUNC_0(const EVP_MD_CTX *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return ((void*)0);
    return VAR_0->reqdigest;
}
