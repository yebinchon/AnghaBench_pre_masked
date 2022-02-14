
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0) {
    char *VAR_1 = FUNC_2(VAR_0);

    char *VAR_2 = VAR_1;
    const char *VAR_3 = VAR_0;

    while(*VAR_3) {
        if(FUNC_3(*VAR_3 == '\\')) {
            VAR_3++;
            if(FUNC_1(FUNC_0(*VAR_3) && FUNC_0(VAR_3[1]) && FUNC_0(VAR_3[2]))) {
                char VAR_4 = *VAR_3++ - '0';
                VAR_4 <<= 3;
                VAR_4 |= *VAR_3++ - '0';
                VAR_4 <<= 3;
                VAR_4 |= *VAR_3++ - '0';
                *VAR_2++ = VAR_4;
            }
            else *VAR_2++ = '_';
        }
        else *VAR_2++ = *VAR_3++;
    }
    *VAR_2 = '\0';

    return VAR_1;
}
