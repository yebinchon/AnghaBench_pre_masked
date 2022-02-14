
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* meth; } ;
struct TYPE_5__ {int (* make_affine ) (TYPE_2__ const*,int *,int *) ;} ;
typedef int EC_POINT ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;


 int FUNC_0 (TYPE_2__ const*,int *,int *) ;

int FUNC_1(const EC_GROUP *VAR_0, size_t VAR_1,
                                      EC_POINT *VAR_2[], BN_CTX *VAR_3)
{
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        if (!VAR_0->meth->make_affine(VAR_0, VAR_2[VAR_4], VAR_3))
            return 0;
    }

    return 1;
}
