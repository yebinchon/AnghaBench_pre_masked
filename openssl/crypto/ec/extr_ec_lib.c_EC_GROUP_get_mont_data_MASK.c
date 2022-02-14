
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * mont_data; } ;
typedef TYPE_1__ EC_GROUP ;
typedef int BN_MONT_CTX ;



BN_MONT_CTX *FUNC_0(const EC_GROUP *VAR_0)
{
    return VAR_0->mont_data;
}
