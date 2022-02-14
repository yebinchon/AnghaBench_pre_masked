
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int**,int) ;

size_t
FUNC_1(u_char *VAR_0, size_t VAR_1)
{
    u_char VAR_2, *VAR_3;
    size_t VAR_4;

    VAR_3 = VAR_0 + VAR_1;

    for (VAR_4 = 0; VAR_0 < VAR_3; VAR_4++) {

        VAR_2 = *VAR_0;

        if (VAR_2 < 0x80) {
            VAR_0++;
            continue;
        }

        if (FUNC_0(&VAR_0, VAR_3 - VAR_0) > 0x10ffff) {

            return VAR_1;
        }
    }

    return VAR_4;
}
