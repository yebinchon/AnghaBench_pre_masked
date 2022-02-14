
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const) ;
 int VAR_0 ;
 char const FUNC_3 (unsigned char) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, uint64_t *VAR_2)
{
    const char *VAR_3 = VAR_1;

    if (!FUNC_2(*VAR_3)) {
        FUNC_1("Invalid empty integer value");
        return -1;
    }
    for (*VAR_2 = 0; *VAR_3; ) {
        if (*VAR_2 > VAR_0 / 10) {
            FUNC_0("Integer overflow in string %s", VAR_1);
            return -1;
        }
        *VAR_2 *= 10;
        if (!FUNC_2(FUNC_3((unsigned char)*VAR_3))) {
            FUNC_0("Invalid character in string %s", VAR_1);
            return -1;
        }
        *VAR_2 += *VAR_3 - '0';
        VAR_3++;
    }
    return 1;
}
