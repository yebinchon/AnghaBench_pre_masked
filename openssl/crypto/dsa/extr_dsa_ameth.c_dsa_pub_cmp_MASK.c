
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* dsa; } ;
struct TYPE_8__ {TYPE_2__ pkey; } ;
struct TYPE_6__ {int pub_key; } ;
typedef TYPE_3__ EVP_PKEY ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const EVP_PKEY *VAR_0, const EVP_PKEY *VAR_1)
{
    if (FUNC_0(VAR_1->pkey.dsa->pub_key, VAR_0->pkey.dsa->pub_key) != 0)
        return 0;
    else
        return 1;
}
