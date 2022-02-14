
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * v; int * s; } ;
typedef TYPE_1__ SRP_user_pwd ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(SRP_user_pwd *VAR_0, BIGNUM *VAR_1, BIGNUM *VAR_2)
{
    FUNC_1(VAR_0->s);
    FUNC_0(VAR_0->v);
    VAR_0->v = VAR_2;
    VAR_0->s = VAR_1;
    return (VAR_0->s != ((void*)0) && VAR_0->v != ((void*)0));
}
