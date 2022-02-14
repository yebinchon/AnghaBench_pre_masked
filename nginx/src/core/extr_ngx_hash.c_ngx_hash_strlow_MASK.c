
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;

ngx_uint_t
FUNC_2(u_char *VAR_0, u_char *VAR_1, size_t VAR_2)
{
    ngx_uint_t VAR_3;

    VAR_3 = 0;

    while (VAR_2--) {
        *VAR_0 = FUNC_1(*VAR_1);
        VAR_3 = FUNC_0(VAR_3, *VAR_0);
        VAR_0++;
        VAR_1++;
    }

    return VAR_3;
}
