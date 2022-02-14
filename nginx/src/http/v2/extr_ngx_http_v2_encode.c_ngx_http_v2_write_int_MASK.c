
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int ngx_uint_t ;



__attribute__((used)) static u_char *
FUNC_0(u_char *VAR_0, ngx_uint_t VAR_1, ngx_uint_t VAR_2)
{
    if (VAR_2 < VAR_1) {
        *VAR_0++ |= VAR_2;
        return VAR_0;
    }

    *VAR_0++ |= VAR_1;
    VAR_2 -= VAR_1;

    while (VAR_2 >= 128) {
        *VAR_0++ = VAR_2 % 128 + 128;
        VAR_2 /= 128;
    }

    *VAR_0++ = (u_char) VAR_2;

    return VAR_0;
}
