
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* meth; } ;
struct TYPE_5__ {int (* group_order_bits ) (TYPE_2__ const*) ;} ;
typedef TYPE_2__ EC_GROUP ;


 int FUNC_0 (TYPE_2__ const*) ;

int FUNC_1(const EC_GROUP *VAR_0)
{
    return VAR_0->meth->group_order_bits(VAR_0);
}
