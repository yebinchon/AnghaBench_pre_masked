
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * group; TYPE_1__* meth; } ;
struct TYPE_7__ {scalar_t__ (* set_group ) (TYPE_2__*,int *) ;} ;
typedef int OPENSSL_CTX ;
typedef TYPE_2__ EC_KEY ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;

EC_KEY *FUNC_4(OPENSSL_CTX *VAR_0, int VAR_1)
{
    EC_KEY *VAR_2 = FUNC_2(VAR_0);
    if (VAR_2 == ((void*)0))
        return ((void*)0);
    VAR_2->group = FUNC_0(VAR_0, VAR_1);
    if (VAR_2->group == ((void*)0)) {
        FUNC_1(VAR_2);
        return ((void*)0);
    }
    if (VAR_2->meth->set_group != ((void*)0)
        && VAR_2->meth->set_group(VAR_2, VAR_2->group) == 0) {
        FUNC_1(VAR_2);
        return ((void*)0);
    }
    return VAR_2;
}
