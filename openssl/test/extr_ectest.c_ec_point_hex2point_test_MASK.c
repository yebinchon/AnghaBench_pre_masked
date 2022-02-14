
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nid; } ;
typedef int const EC_POINT ;
typedef int const EC_GROUP ;
typedef int const BN_CTX ;


 int FUNC_0 (int const*) ;
 int const* FUNC_1 () ;
 int FUNC_2 (int const*) ;
 int const* FUNC_3 (int const*) ;
 int const* FUNC_4 (int) ;
 int const* FUNC_5 (int const*,int const*) ;
 int FUNC_6 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_9 (int const*,int const*,int ,int const*) ;

__attribute__((used)) static int FUNC_10(int VAR_4)
{
    int VAR_5 = 0, VAR_6;
    EC_GROUP *VAR_7 = ((void*)0);
    const EC_POINT *VAR_8 = ((void*)0);
    EC_POINT *VAR_9 = ((void*)0);
    BN_CTX * VAR_10 = ((void*)0);


    VAR_6 = VAR_3[VAR_4].nid;
    if (!FUNC_7(VAR_10 = FUNC_1())
            || !FUNC_7(VAR_7 = FUNC_4(VAR_6))
            || !FUNC_7(VAR_8 = FUNC_3(VAR_7))
            || !FUNC_7(VAR_9 = FUNC_5(VAR_8, VAR_7)))
        goto err;

    if (!FUNC_8(FUNC_9(VAR_7, VAR_9,
                                                  VAR_0,
                                                  VAR_10))
            || !FUNC_8(FUNC_9(VAR_7, ((void*)0),
                                                         VAR_0,
                                                         VAR_10))
            || !FUNC_8(FUNC_9(VAR_7, VAR_9,
                                                         VAR_2,
                                                         VAR_10))
            || !FUNC_8(FUNC_9(VAR_7, ((void*)0),
                                                         VAR_2,
                                                         VAR_10))
            || !FUNC_8(FUNC_9(VAR_7, VAR_9,
                                                         VAR_1,
                                                         VAR_10))
            || !FUNC_8(FUNC_9(VAR_7, ((void*)0),
                                                         VAR_1,
                                                         VAR_10)))
        goto err;

    VAR_5 = 1;

 err:
    FUNC_6(VAR_9);
    FUNC_2(VAR_7);
    FUNC_0(VAR_10);

    return VAR_5;
}
