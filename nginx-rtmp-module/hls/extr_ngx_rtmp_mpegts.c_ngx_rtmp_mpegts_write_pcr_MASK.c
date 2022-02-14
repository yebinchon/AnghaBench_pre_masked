
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef void* u_char ;



__attribute__((used)) static u_char *
FUNC_0(u_char *VAR_0, uint64_t VAR_1)
{
    *VAR_0++ = (u_char) (VAR_1 >> 25);
    *VAR_0++ = (u_char) (VAR_1 >> 17);
    *VAR_0++ = (u_char) (VAR_1 >> 9);
    *VAR_0++ = (u_char) (VAR_1 >> 1);
    *VAR_0++ = (u_char) (VAR_1 << 7 | 0x7e);
    *VAR_0++ = 0;

    return VAR_0;
}
