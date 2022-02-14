
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * pub_key; int group; TYPE_1__* meth; } ;
struct TYPE_5__ {scalar_t__ (* set_public ) (TYPE_2__*,int const*) ;} ;
typedef int EC_POINT ;
typedef TYPE_2__ EC_KEY ;


 int * FUNC_0 (int const*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int const*) ;

int FUNC_3(EC_KEY *VAR_0, const EC_POINT *VAR_1)
{
    if (VAR_0->meth->set_public != ((void*)0)
        && VAR_0->meth->set_public(VAR_0, VAR_1) == 0)
        return 0;
    FUNC_1(VAR_0->pub_key);
    VAR_0->pub_key = FUNC_0(VAR_1, VAR_0->group);
    return (VAR_0->pub_key == ((void*)0)) ? 0 : 1;
}
