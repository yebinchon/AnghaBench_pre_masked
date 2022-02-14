
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int * priv_key; TYPE_2__* meth; TYPE_3__* group; } ;
struct TYPE_10__ {TYPE_1__* meth; } ;
struct TYPE_9__ {scalar_t__ (* set_private ) (TYPE_4__*,int const*) ;} ;
struct TYPE_8__ {scalar_t__ (* set_private ) (TYPE_4__*,int const*) ;} ;
typedef TYPE_4__ EC_KEY ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int const*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int const*) ;

int FUNC_4(EC_KEY *VAR_0, const BIGNUM *VAR_1)
{
    if (VAR_0->group == ((void*)0) || VAR_0->group->meth == ((void*)0))
        return 0;
    if (VAR_0->group->meth->set_private != ((void*)0)
        && VAR_0->group->meth->set_private(VAR_0, VAR_1) == 0)
        return 0;
    if (VAR_0->meth->set_private != ((void*)0)
        && VAR_0->meth->set_private(VAR_0, VAR_1) == 0)
        return 0;
    FUNC_0(VAR_0->priv_key);
    VAR_0->priv_key = FUNC_1(VAR_1);
    return (VAR_0->priv_key == ((void*)0)) ? 0 : 1;
}
