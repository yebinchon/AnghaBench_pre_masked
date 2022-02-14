
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* meth; } ;
struct TYPE_5__ {int (* blind_coordinates ) (TYPE_2__ const*,int *,int *) ;} ;
typedef int EC_POINT ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;


 int FUNC_0 (TYPE_2__ const*,int *,int *) ;

int FUNC_1(const EC_GROUP *VAR_0, EC_POINT *VAR_1, BN_CTX *VAR_2)
{
    if (VAR_0->meth->blind_coordinates == ((void*)0))
        return 1;

    return VAR_0->meth->blind_coordinates(VAR_0, VAR_1, VAR_2);
}
