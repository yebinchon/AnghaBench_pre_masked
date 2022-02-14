
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef char ngx_int_t ;



ngx_int_t
FUNC_0(u_char *VAR_0, u_char *VAR_1, size_t VAR_2)
{
    u_char VAR_3, VAR_4;

    if (VAR_2 == 0) {
        return 0;
    }

    VAR_2--;

    for ( ;; ) {
        VAR_3 = VAR_0[VAR_2];
        if (VAR_3 >= 'a' && VAR_3 <= 'z') {
            VAR_3 -= 'a' - 'A';
        }

        VAR_4 = VAR_1[VAR_2];
        if (VAR_4 >= 'a' && VAR_4 <= 'z') {
            VAR_4 -= 'a' - 'A';
        }

        if (VAR_3 != VAR_4) {
            return VAR_3 - VAR_4;
        }

        if (VAR_2 == 0) {
            return 0;
        }

        VAR_2--;
    }
}
