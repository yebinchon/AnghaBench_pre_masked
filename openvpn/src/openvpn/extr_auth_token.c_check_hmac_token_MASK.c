
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int hmac_ctx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,int) ;
 scalar_t__ FUNC_5 (int const**,int const*,int) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static bool
FUNC_7(hmac_ctx_t *VAR_1, const uint8_t *VAR_2, const char *VAR_3)
{
    FUNC_0(FUNC_3(VAR_1) == 256/8);

    uint8_t VAR_4[256/8];

    FUNC_2(VAR_1);
    FUNC_4(VAR_1, (uint8_t *) VAR_3, (int)FUNC_6(VAR_3));
    FUNC_4(VAR_1, VAR_2, VAR_0 - 256/8);
    FUNC_1(VAR_1, VAR_4);

    const uint8_t *VAR_5 = VAR_2 + VAR_0 - 256/8;
    return FUNC_5(&VAR_4, VAR_5, 32) == 0;
}
