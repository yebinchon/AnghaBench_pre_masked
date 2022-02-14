
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int refcnt; } ;
typedef TYPE_1__ EVP_MAC ;


 int FUNC_0 (int *,int*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
    EVP_MAC *VAR_1 = VAR_0;
    int VAR_2 = 0;

    FUNC_0(&VAR_1->refcnt, &VAR_2, VAR_1->lock);
    return 1;
}
