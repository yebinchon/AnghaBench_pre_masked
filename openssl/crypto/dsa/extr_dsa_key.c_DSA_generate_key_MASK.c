
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* meth; } ;
struct TYPE_6__ {int (* dsa_keygen ) (TYPE_2__*) ;} ;
typedef TYPE_2__ DSA ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(DSA *VAR_0)
{
    if (VAR_0->meth->dsa_keygen)
        return VAR_0->meth->dsa_keygen(VAR_0);
    return FUNC_0(VAR_0);
}
