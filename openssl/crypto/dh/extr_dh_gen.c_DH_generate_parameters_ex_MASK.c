
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* meth; } ;
struct TYPE_6__ {int (* generate_params ) (TYPE_2__*,int,int,int *) ;} ;
typedef TYPE_2__ DH ;
typedef int BN_GENCB ;


 int FUNC_0 (TYPE_2__*,int,int,int *) ;
 int FUNC_1 (TYPE_2__*,int,int,int *) ;

int FUNC_2(DH *VAR_0, int VAR_1, int VAR_2,
                              BN_GENCB *VAR_3)
{
    if (VAR_0->meth->generate_params)
        return VAR_0->meth->generate_params(VAR_0, VAR_1, VAR_2, VAR_3);
    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
