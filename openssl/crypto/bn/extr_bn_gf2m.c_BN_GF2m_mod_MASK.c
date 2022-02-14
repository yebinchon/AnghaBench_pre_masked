
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*,int*) ;
 int FUNC_1 (int const*,int*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (int const*) ;

int FUNC_5(BIGNUM *VAR_2, const BIGNUM *VAR_3, const BIGNUM *VAR_4)
{
    int VAR_5 = 0;
    int VAR_6[6];
    FUNC_4(VAR_3);
    FUNC_4(VAR_4);
    VAR_5 = FUNC_1(VAR_4, VAR_6, FUNC_3(VAR_6));
    if (!VAR_5 || VAR_5 > (int)FUNC_3(VAR_6)) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }
    VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_6);
    FUNC_4(VAR_2);
    return VAR_5;
}
