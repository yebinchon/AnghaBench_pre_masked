
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nid; } ;
typedef int EC_GROUP ;
typedef int ECPARAMETERS ;
typedef int BN_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *) ;
 int * FUNC_7 (int) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_12(int VAR_1)
{
    int VAR_2 = 0, VAR_3, VAR_4 = 0;
    EC_GROUP *VAR_5 = ((void*)0) , *VAR_6 = ((void*)0);
    ECPARAMETERS *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    BN_CTX *VAR_9 = ((void*)0);


    VAR_3 = VAR_0[VAR_1].nid;
    if (!FUNC_11(VAR_9 = FUNC_1())
        || !FUNC_11(VAR_5 = FUNC_7(VAR_3))
        || !FUNC_11(VAR_7 = FUNC_6(VAR_5, ((void*)0))))
        goto err;


    FUNC_5(VAR_5);
    if (!FUNC_11(VAR_5 = FUNC_8(VAR_7)))
        goto err;

    if (!FUNC_10(VAR_4 = FUNC_3(VAR_5, 0, ((void*)0)), 0))
        goto err;
    if (VAR_4 != VAR_3) {
        if (!FUNC_11(VAR_6 = FUNC_7(VAR_4))
                || !FUNC_11(VAR_8 = FUNC_6(VAR_6, ((void*)0))))
            goto err;


        FUNC_5(VAR_6);
        if (!FUNC_11(VAR_6 = FUNC_8(VAR_8))
                || !FUNC_9(FUNC_4(VAR_5, VAR_6, VAR_9), 0))
            goto err;
    }

    VAR_2 = 1;

 err:
    FUNC_5(VAR_5);
    FUNC_5(VAR_6);
    FUNC_2(VAR_7);
    FUNC_2(VAR_8);
    FUNC_0(VAR_9);

    return VAR_2;
}
