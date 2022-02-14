
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int) ;

int FUNC_4(BIGNUM *VAR_2, const BIGNUM *VAR_3, int VAR_4)
{
    int VAR_5 = 0;

    if (VAR_4 < 0) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);

    FUNC_2(VAR_2);
    FUNC_1(VAR_2);

    return VAR_5;
}
