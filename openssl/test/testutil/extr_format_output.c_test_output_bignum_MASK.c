
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int BIGNUM ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*,unsigned char*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (unsigned char*,int,char*,scalar_t__) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (char*,int *,int ,int *,int *,int *,char const*,int const*,int const*) ;
 int FUNC_7 (char*,char const*,char*,...) ;

void FUNC_8(const char *VAR_1, const BIGNUM *VAR_2)
{
    if (VAR_2 == ((void*)0) || FUNC_2(VAR_2)) {
        FUNC_7("bignum: '%s' = %s\n", VAR_1,
                           FUNC_5(VAR_2));
    } else if (FUNC_3(VAR_2) <= VAR_0) {
        unsigned char VAR_3[VAR_0];
        char VAR_4[2 * sizeof(VAR_3) + 1];
        char *VAR_5 = VAR_4;
        int VAR_6 = FUNC_0(VAR_2, VAR_3);

        FUNC_4(VAR_3, VAR_6, VAR_5, VAR_0);
        while (*VAR_5 == '0' && *++VAR_5 != '\0')
            ;
        FUNC_7("bignum: '%s' = %s0x%s\n", VAR_1,
                           FUNC_1(VAR_2) ? "-" : "", VAR_5);
    } else {
        FUNC_6("bignum", ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0), VAR_1,
                                VAR_2, VAR_2);
    }
}
