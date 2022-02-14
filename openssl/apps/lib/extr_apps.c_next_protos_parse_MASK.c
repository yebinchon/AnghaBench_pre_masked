
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (size_t,char*) ;
 size_t FUNC_2 (char const*) ;

unsigned char *FUNC_3(size_t *VAR_0, const char *VAR_1)
{
    size_t VAR_2;
    unsigned char *VAR_3;
    size_t VAR_4, VAR_5 = 0;
    size_t VAR_6 = 0;

    VAR_2 = FUNC_2(VAR_1);
    if (VAR_2 == 0 || VAR_2 >= 65535)
        return ((void*)0);

    VAR_3 = FUNC_1(VAR_2 + 1, "NPN buffer");
    for (VAR_4 = 0; VAR_4 <= VAR_2; ++VAR_4) {
        if (VAR_4 == VAR_2 || VAR_1[VAR_4] == ',') {
            if (VAR_4 == VAR_5) {
                ++VAR_5;
                ++VAR_6;
                continue;
            }
            if (VAR_4 - VAR_5 > 255) {
                FUNC_0(VAR_3);
                return ((void*)0);
            }
            VAR_3[VAR_5-VAR_6] = (unsigned char)(VAR_4 - VAR_5);
            VAR_5 = VAR_4 + 1;
        } else {
            VAR_3[VAR_4 + 1 - VAR_6] = VAR_1[VAR_4];
        }
    }

    if (VAR_2 <= VAR_6) {
        FUNC_0(VAR_3);
        return ((void*)0);
    }

    *VAR_0 = VAR_2 + 1 - VAR_6;
    return VAR_3;
}
