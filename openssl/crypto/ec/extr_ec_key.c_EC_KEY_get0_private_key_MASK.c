
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* priv_key; } ;
typedef TYPE_1__ EC_KEY ;
typedef int BIGNUM ;



const BIGNUM *FUNC_0(const EC_KEY *VAR_0)
{
    return VAR_0->priv_key;
}
