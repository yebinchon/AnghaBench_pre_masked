
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * n; int * d; } ;
typedef TYPE_1__ RSA ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int * FUNC_1 () ;

int FUNC_2(const RSA *VAR_0)
{
    if (VAR_0->d == ((void*)0) || VAR_0->n == ((void*)0))
        return 0;
    return FUNC_0(VAR_0->d, FUNC_1()) >= 0 && FUNC_0(VAR_0->d, VAR_0->n) < 0;
}
