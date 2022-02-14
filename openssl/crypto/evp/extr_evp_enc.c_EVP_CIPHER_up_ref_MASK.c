
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int refcnt; } ;
typedef TYPE_1__ EVP_CIPHER ;


 int FUNC_0 (int *,int*,int ) ;

int FUNC_1(EVP_CIPHER *VAR_0)
{
    int VAR_1 = 0;

    FUNC_0(&VAR_0->refcnt, &VAR_1, VAR_0->lock);
    return 1;
}
