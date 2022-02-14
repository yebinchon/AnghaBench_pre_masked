
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

const char *
FUNC_1(const unsigned char *VAR_0, size_t VAR_1,
                 char *VAR_2, size_t VAR_3)
{
    size_t VAR_4=0;
    size_t VAR_5 = 0;


    for (VAR_4=0; VAR_4<VAR_1; VAR_4++) {
        unsigned char VAR_6 = VAR_0[VAR_4];

        if (FUNC_0(VAR_6) && VAR_6 != '<' && VAR_6 != '>' && VAR_6 != '&' && VAR_6 != '\\' && VAR_6 != '\"' && VAR_6 != '\'') {
            if (VAR_5 + 2 < VAR_3)
                VAR_2[VAR_5++] = VAR_0[VAR_4];
        } else {
            if (VAR_5 + 5 < VAR_3) {
                VAR_2[VAR_5++] = '\\';
                VAR_2[VAR_5++] = 'x';
                VAR_2[VAR_5++] = "0123456789abcdef"[VAR_0[VAR_4]>>4];
                VAR_2[VAR_5++] = "0123456789abcdef"[VAR_0[VAR_4]&0xF];
            }
        }
    }

    VAR_2[VAR_5] = '\0';

    return VAR_2;
}
