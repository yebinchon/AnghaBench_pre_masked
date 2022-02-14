
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, const BIGNUM *VAR_1,
                             const BIGNUM *VAR_2)
{
    if (!FUNC_0(VAR_1)) {
        FUNC_2("%s failed: a ** 0 mod 1 = r (should be 0)", VAR_0);
        FUNC_1(VAR_2);
        FUNC_1(VAR_1);
        return 0;
    }
    return 1;
}
