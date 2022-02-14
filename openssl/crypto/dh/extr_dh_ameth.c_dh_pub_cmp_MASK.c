
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* dh; } ;
struct TYPE_10__ {TYPE_2__ pkey; } ;
struct TYPE_8__ {int pub_key; } ;
typedef TYPE_3__ EVP_PKEY ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__ const*,TYPE_3__ const*) ;

__attribute__((used)) static int FUNC_2(const EVP_PKEY *VAR_0, const EVP_PKEY *VAR_1)
{
    if (FUNC_1(VAR_0, VAR_1) == 0)
        return 0;
    if (FUNC_0(VAR_1->pkey.dh->pub_key, VAR_0->pkey.dh->pub_key) != 0)
        return 0;
    else
        return 1;
}
