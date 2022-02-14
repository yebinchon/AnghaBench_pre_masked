
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int const*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,char const*) ;
 int FUNC_3 (int const*,int *) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(const char *VAR_0, const BIGNUM *VAR_1, const char *VAR_2)
{
    BIGNUM *VAR_3 = ((void*)0);
    int VAR_4;

    if (!FUNC_5(FUNC_2(&VAR_3, VAR_2)))
        return 0;

    if (FUNC_0(VAR_1, VAR_3) != 0)
        FUNC_4("unexpected %s value", VAR_0);
    VAR_4 = FUNC_3(VAR_1, VAR_3);
    FUNC_1(VAR_3);
    return VAR_4;
}
