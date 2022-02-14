
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int g_l; int g; int q_l; int q; int p_l; int p; int pub_l; int pub; int priv_l; int priv; } ;
typedef TYPE_1__ testdsa ;
typedef int DSA ;
typedef int BIGNUM ;


 int * FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (TYPE_1__,int) ;

DSA *FUNC_7(int VAR_0)
{
    DSA *VAR_1;
    BIGNUM *VAR_2, *VAR_3, *VAR_4, *VAR_5, *VAR_6;
    testdsa VAR_7;

    switch (VAR_0) {
    case 512:
        FUNC_6(VAR_7, 512);
        break;
    case 1024:
        FUNC_6(VAR_7, 1024);
        break;
    case 2048:
        FUNC_6(VAR_7, 2048);
        break;
    default:
        return ((void*)0);
    }

    if ((VAR_1 = FUNC_3()) == ((void*)0))
        return ((void*)0);
    VAR_2 = FUNC_0(VAR_7.priv, VAR_7.priv_l, ((void*)0));
    VAR_3 = FUNC_0(VAR_7.pub, VAR_7.pub_l, ((void*)0));
    VAR_4 = FUNC_0(VAR_7.p, VAR_7.p_l, ((void*)0));
    VAR_5 = FUNC_0(VAR_7.q, VAR_7.q_l, ((void*)0));
    VAR_6 = FUNC_0(VAR_7.g, VAR_7.g_l, ((void*)0));
    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0))
         || (VAR_6 == ((void*)0))) {
        goto err;
    }
    if (!FUNC_5(VAR_1, VAR_4, VAR_5, VAR_6))
        goto err;

    if (!FUNC_4(VAR_1, VAR_3, VAR_2))
        goto err;

    return VAR_1;
 err:
    FUNC_2(VAR_1);
    FUNC_1(VAR_2);
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
    FUNC_1(VAR_5);
    FUNC_1(VAR_6);
    return ((void*)0);
}
