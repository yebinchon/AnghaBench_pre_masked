
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * mont_data; int order; int cofactor; int * generator; int const* field; } ;
typedef int EC_POINT ;
typedef TYPE_1__ EC_GROUP ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int FUNC_7 (int *,int const*) ;
 int * FUNC_8 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ,int ) ;
 int VAR_4 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;

int FUNC_12(EC_GROUP *VAR_5, const EC_POINT *VAR_6,
                           const BIGNUM *VAR_7, const BIGNUM *VAR_8)
{
    if (VAR_6 == ((void*)0)) {
        FUNC_9(VAR_0, VAR_4);
        return 0;
    }


    if (VAR_5->field == ((void*)0) || FUNC_4(VAR_5->field)
        || FUNC_2(VAR_5->field)) {
        FUNC_9(VAR_0, VAR_1);
        return 0;
    }






    if (VAR_7 == ((void*)0) || FUNC_4(VAR_7) || FUNC_2(VAR_7)
        || FUNC_5(VAR_7) > FUNC_5(VAR_5->field) + 1) {
        FUNC_9(VAR_0, VAR_2);
        return 0;
    }






    if (VAR_8 != ((void*)0) && FUNC_2(VAR_8)) {
        FUNC_9(VAR_0, VAR_3);
        return 0;
    }

    if (VAR_5->generator == ((void*)0)) {
        VAR_5->generator = FUNC_8(VAR_5);
        if (VAR_5->generator == ((void*)0))
            return 0;
    }
    if (!FUNC_7(VAR_5->generator, VAR_6))
        return 0;

    if (!FUNC_1(VAR_5->order, VAR_7))
        return 0;


    if (VAR_8 != ((void*)0) && !FUNC_4(VAR_8)) {
        if (!FUNC_1(VAR_5->cofactor, VAR_8))
            return 0;
    } else if (!FUNC_10(VAR_5)) {
        FUNC_6(VAR_5->cofactor);
        return 0;
    }






    if (FUNC_3(VAR_5->order)) {
        return FUNC_11(VAR_5);
    }

    FUNC_0(VAR_5->mont_data);
    VAR_5->mont_data = ((void*)0);
    return 1;
}
