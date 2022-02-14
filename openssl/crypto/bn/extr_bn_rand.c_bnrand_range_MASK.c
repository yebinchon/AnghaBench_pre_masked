
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ neg; } ;
typedef int BN_CTX ;
typedef int BNRAND_FLAG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,TYPE_1__*,int,int ,int ,int *) ;

__attribute__((used)) static int FUNC_9(BNRAND_FLAG VAR_5, BIGNUM *VAR_6, const BIGNUM *VAR_7,
                        BN_CTX *VAR_8)
{
    int VAR_9;
    int VAR_10 = 100;

    if (VAR_7->neg || FUNC_2(VAR_7)) {
        FUNC_6(VAR_0, VAR_3);
        return 0;
    }

    VAR_9 = FUNC_3(VAR_7);



    if (VAR_9 == 1)
        FUNC_5(VAR_6);
    else if (!FUNC_1(VAR_7, VAR_9 - 2) && !FUNC_1(VAR_7, VAR_9 - 3)) {




        do {
            if (!FUNC_8(VAR_5, VAR_6, VAR_9 + 1, VAR_2, VAR_1,
                        VAR_8))
                return 0;







            if (FUNC_0(VAR_6, VAR_7) >= 0) {
                if (!FUNC_4(VAR_6, VAR_6, VAR_7))
                    return 0;
                if (FUNC_0(VAR_6, VAR_7) >= 0)
                    if (!FUNC_4(VAR_6, VAR_6, VAR_7))
                        return 0;
            }

            if (!--VAR_10) {
                FUNC_6(VAR_0, VAR_4);
                return 0;
            }

        }
        while (FUNC_0(VAR_6, VAR_7) >= 0);
    } else {
        do {

            if (!FUNC_8(VAR_5, VAR_6, VAR_9, VAR_2, VAR_1, VAR_8))
                return 0;

            if (!--VAR_10) {
                FUNC_6(VAR_0, VAR_4);
                return 0;
            }
        }
        while (FUNC_0(VAR_6, VAR_7) >= 0);
    }

    FUNC_7(VAR_6);
    return 1;
}
