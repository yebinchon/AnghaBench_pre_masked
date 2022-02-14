
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* group; } ;
struct TYPE_7__ {TYPE_1__* meth; } ;
struct TYPE_6__ {int (* keygen ) (TYPE_3__*) ;} ;
typedef TYPE_3__ EC_KEY ;


 int FUNC_0 (TYPE_3__*) ;

int FUNC_1(EC_KEY *VAR_0)
{
    return VAR_0->group->meth->keygen(VAR_0);
}
