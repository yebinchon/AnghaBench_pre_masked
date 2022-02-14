
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int refcnt_lock; int refcnt; } ;
typedef TYPE_1__ OSSL_PROVIDER ;


 scalar_t__ FUNC_0 (int *,int*,int ) ;

int FUNC_1(OSSL_PROVIDER *VAR_0)
{
    int VAR_1 = 0;

    if (FUNC_0(&VAR_0->refcnt, &VAR_1, VAR_0->refcnt_lock) <= 0)
        return 0;
    return VAR_1;
}
