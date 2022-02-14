
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int *,int const) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(const int VAR_0[], BIGNUM *VAR_1)
{
    int VAR_2;

    FUNC_2(VAR_1);
    FUNC_1(VAR_1);
    for (VAR_2 = 0; VAR_0[VAR_2] != -1; VAR_2++) {
        if (FUNC_0(VAR_1, VAR_0[VAR_2]) == 0)
            return 0;
    }
    FUNC_2(VAR_1);

    return 1;
}
