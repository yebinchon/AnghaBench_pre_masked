
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * mont_data; int order; int libctx; } ;
typedef TYPE_1__ EC_GROUP ;
typedef int BN_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_5(EC_GROUP *VAR_0)
{
    BN_CTX *VAR_1 = FUNC_1(VAR_0->libctx);
    int VAR_2 = 0;

    FUNC_2(VAR_0->mont_data);
    VAR_0->mont_data = ((void*)0);

    if (VAR_1 == ((void*)0))
        goto err;

    VAR_0->mont_data = FUNC_3();
    if (VAR_0->mont_data == ((void*)0))
        goto err;

    if (!FUNC_4(VAR_0->mont_data, VAR_0->order, VAR_1)) {
        FUNC_2(VAR_0->mont_data);
        VAR_0->mont_data = ((void*)0);
        goto err;
    }

    VAR_2 = 1;

 err:

    FUNC_0(VAR_1);
    return VAR_2;
}
