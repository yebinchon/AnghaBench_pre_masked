
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef scalar_t__ ngx_uint_t ;



uintptr_t
FUNC_0(u_char *VAR_0, u_char *VAR_1, size_t VAR_2)
{
    u_char VAR_3;
    ngx_uint_t VAR_4;

    if (VAR_0 == ((void*)0)) {
        VAR_4 = 0;

        while (VAR_2) {
            VAR_3 = *VAR_1++;

            if (VAR_3 == '\\' || VAR_3 == '"') {
                VAR_4++;

            } else if (VAR_3 <= 0x1f) {

                switch (VAR_3) {
                case '\n':
                case '\r':
                case '\t':
                case '\b':
                case '\f':
                    VAR_4++;
                    break;

                default:
                    VAR_4 += sizeof("\\u001F") - 2;
                }
            }

            VAR_2--;
        }

        return (uintptr_t) VAR_4;
    }

    while (VAR_2) {
        VAR_3 = *VAR_1++;

        if (VAR_3 > 0x1f) {

            if (VAR_3 == '\\' || VAR_3 == '"') {
                *VAR_0++ = '\\';
            }

            *VAR_0++ = VAR_3;

        } else {
            *VAR_0++ = '\\';

            switch (VAR_3) {
            case '\n':
                *VAR_0++ = 'n';
                break;

            case '\r':
                *VAR_0++ = 'r';
                break;

            case '\t':
                *VAR_0++ = 't';
                break;

            case '\b':
                *VAR_0++ = 'b';
                break;

            case '\f':
                *VAR_0++ = 'f';
                break;

            default:
                *VAR_0++ = 'u'; *VAR_0++ = '0'; *VAR_0++ = '0';
                *VAR_0++ = '0' + (VAR_3 >> 4);

                VAR_3 &= 0xf;

                *VAR_0++ = (VAR_3 < 10) ? ('0' + VAR_3) : ('A' + VAR_3 - 10);
            }
        }

        VAR_2--;
    }

    return (uintptr_t) VAR_0;
}
