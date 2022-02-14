
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef char ssize_t ;


 char VAR_0 ;
 int VAR_1 ;

ssize_t
FUNC_0(u_char *VAR_2, size_t VAR_3)
{
    ssize_t VAR_4, VAR_5, VAR_6;

    if (VAR_3 == 0) {
        return VAR_0;
    }

    VAR_5 = VAR_1 / 10;
    VAR_6 = VAR_1 % 10;

    for (VAR_4 = 0; VAR_3--; VAR_2++) {
        if (*VAR_2 < '0' || *VAR_2 > '9') {
            return VAR_0;
        }

        if (VAR_4 >= VAR_5 && (VAR_4 > VAR_5 || *VAR_2 - '0' > VAR_6)) {
            return VAR_0;
        }

        VAR_4 = VAR_4 * 10 + (*VAR_2 - '0');
    }

    return VAR_4;
}
