
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef char ngx_uint_t ;


 scalar_t__ FUNC_0 (int *,int *,size_t) ;

u_char *
FUNC_1(u_char *VAR_0, u_char *VAR_1, u_char *VAR_2, size_t VAR_3)
{
    ngx_uint_t VAR_4, VAR_5;

    VAR_5 = (ngx_uint_t) *VAR_2++;
    VAR_5 = (VAR_5 >= 'A' && VAR_5 <= 'Z') ? (VAR_5 | 0x20) : VAR_5;
    VAR_1 -= VAR_3;

    do {
        do {
            if (VAR_0 >= VAR_1) {
                return ((void*)0);
            }

            VAR_4 = (ngx_uint_t) *VAR_0++;

            VAR_4 = (VAR_4 >= 'A' && VAR_4 <= 'Z') ? (VAR_4 | 0x20) : VAR_4;

        } while (VAR_4 != VAR_5);

    } while (FUNC_0(VAR_0, VAR_2, VAR_3) != 0);

    return --VAR_0;
}
