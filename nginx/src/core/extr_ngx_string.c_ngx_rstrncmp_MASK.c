
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
typedef scalar_t__ ngx_int_t ;



ngx_int_t
FUNC_0(u_char *VAR_0, u_char *VAR_1, size_t VAR_2)
{
    if (VAR_2 == 0) {
        return 0;
    }

    VAR_2--;

    for ( ;; ) {
        if (VAR_0[VAR_2] != VAR_1[VAR_2]) {
            return VAR_0[VAR_2] - VAR_1[VAR_2];
        }

        if (VAR_2 == 0) {
            return 0;
        }

        VAR_2--;
    }
}
