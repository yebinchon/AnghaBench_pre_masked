
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int prov; int refcnt; } ;
typedef TYPE_1__ EVP_KEYMGMT ;


 int FUNC_0 (int *,int*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(EVP_KEYMGMT *VAR_0)
{
    int VAR_1 = 0;

    if (VAR_0 == ((void*)0))
        return;

    FUNC_0(&VAR_0->refcnt, &VAR_1, VAR_0->lock);
    if (VAR_1 > 0)
        return;
    FUNC_3(VAR_0->prov);
    FUNC_1(VAR_0->lock);
    FUNC_2(VAR_0);
}
