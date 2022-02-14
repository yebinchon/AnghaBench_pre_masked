
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * priv_key; int * pub_key; } ;
typedef TYPE_1__ DSA ;
typedef int BIGNUM ;



int FUNC_0(DSA *VAR_0, BIGNUM *VAR_1, BIGNUM *VAR_2)
{
 VAR_0->pub_key = VAR_1;
 VAR_0->priv_key = VAR_2;

 return 1;
}
