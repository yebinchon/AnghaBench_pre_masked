
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef void* u_char ;
typedef int pts ;
typedef int ngx_uint_t ;



__attribute__((used)) static u_char *
FUNC_0(u_char *VAR_0, ngx_uint_t VAR_1, uint64_t VAR_2)
{
    ngx_uint_t VAR_3;

    VAR_3 = VAR_1 << 4 | (((VAR_2 >> 30) & 0x07) << 1) | 1;
    *VAR_0++ = (u_char) VAR_3;

    VAR_3 = (((VAR_2 >> 15) & 0x7fff) << 1) | 1;
    *VAR_0++ = (u_char) (VAR_3 >> 8);
    *VAR_0++ = (u_char) VAR_3;

    VAR_3 = (((VAR_2) & 0x7fff) << 1) | 1;
    *VAR_0++ = (u_char) (VAR_3 >> 8);
    *VAR_0++ = (u_char) VAR_3;

    return VAR_0;
}
