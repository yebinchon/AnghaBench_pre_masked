
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int const*) ;
 int * FUNC_1 (int const*,int const*) ;
 int FUNC_2 (int const*,int const*,int) ;
 int FUNC_3 (int const*,int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*,int const*,int const*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int const*) ;

int FUNC_8(BIGNUM *VAR_2, const BIGNUM *VAR_3, int VAR_4, const BIGNUM *VAR_5)
{
    if (VAR_2 != VAR_3) {
        if (FUNC_1(VAR_2, VAR_3) == ((void*)0))
            return 0;
    }

    while (VAR_4 > 0) {
        int VAR_6;


        VAR_6 = FUNC_4(VAR_5) - FUNC_4(VAR_2);


        if (VAR_6 < 0) {
            FUNC_6(VAR_0, VAR_1);
            return 0;
        }

        if (VAR_6 > VAR_4)
            VAR_6 = VAR_4;

        if (VAR_6) {
            if (!FUNC_2(VAR_2, VAR_2, VAR_6))
                return 0;
            VAR_4 -= VAR_6;
        } else {
            if (!FUNC_3(VAR_2, VAR_2))
                return 0;
            --VAR_4;
        }



        if (FUNC_0(VAR_2, VAR_5) >= 0) {
            if (!FUNC_5(VAR_2, VAR_2, VAR_5))
                return 0;
        }
    }
    FUNC_7(VAR_2);

    return 1;
}
