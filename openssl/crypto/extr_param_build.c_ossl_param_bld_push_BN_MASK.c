
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* bn; } ;
typedef TYPE_1__ OSSL_PARAM_BLD_DEF ;
typedef int OSSL_PARAM_BLD ;
typedef int BIGNUM ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*,scalar_t__) ;
 int FUNC_1 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 (int *,char const*,int,int,int ,int) ;

int FUNC_4(OSSL_PARAM_BLD *VAR_4, const char *VAR_5,
                           const BIGNUM *VAR_6)
{
    int VAR_7 = -1, VAR_8 = 0;
    OSSL_PARAM_BLD_DEF *VAR_9;

    if (VAR_6 != ((void*)0)) {
        VAR_7 = FUNC_1(VAR_6);
        if (VAR_7 < 0) {
            FUNC_2(VAR_1,
                      VAR_2);
            return 0;
        }
        if (FUNC_0(VAR_6, VAR_0) == VAR_0)
            VAR_8 = 1;
    }
    VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_7, VAR_7 >= 0 ? VAR_7 : 0,
                    VAR_3, VAR_8);
    if (VAR_9 == ((void*)0))
        return 0;
    VAR_9->bn = VAR_6;
    return 1;
}
