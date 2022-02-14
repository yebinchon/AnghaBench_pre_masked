
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int ngx_int_t ;


 int FUNC_0 (int *,int *,size_t) ;

ngx_int_t
FUNC_1(u_char *VAR_0, u_char *VAR_1, size_t VAR_2, size_t VAR_3)
{
    size_t VAR_4;
    ngx_int_t VAR_5, VAR_6;

    if (VAR_2 <= VAR_3) {
        VAR_4 = VAR_2;
        VAR_6 = -1;

    } else {
        VAR_4 = VAR_3;
        VAR_6 = 1;
    }

    VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_4);

    if (VAR_5 || VAR_2 == VAR_3) {
        return VAR_5;
    }

    return VAR_6;
}
