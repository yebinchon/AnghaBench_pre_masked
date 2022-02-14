
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;
typedef int EC_KEY ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 size_t FUNC_3 (int ) ;

int FUNC_4(const EC_KEY *VAR_4, const EVP_MD *VAR_5, size_t VAR_6,
                       size_t *VAR_7)
{
    const size_t VAR_8 = FUNC_3(FUNC_0(VAR_4));
    const int VAR_9 = FUNC_1(VAR_5);
    size_t VAR_10;

    if (VAR_9 < 0) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }
    if (VAR_8 == 0) {
        FUNC_2(VAR_0, VAR_3);
        return 0;
    }

    VAR_10 = 10 + 2 * VAR_8 + (size_t)VAR_9;
    if (VAR_6 <= VAR_10) {
        FUNC_2(VAR_0, VAR_2);
        return 0;
    }

    *VAR_7 = VAR_6 - VAR_10;
    return 1;
}
