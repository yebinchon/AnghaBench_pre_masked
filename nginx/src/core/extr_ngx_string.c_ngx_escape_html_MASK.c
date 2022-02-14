
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;



uintptr_t
FUNC_0(u_char *VAR_0, u_char *VAR_1, size_t VAR_2)
{
    u_char VAR_3;
    ngx_uint_t VAR_4;

    if (VAR_0 == ((void*)0)) {

        VAR_4 = 0;

        while (VAR_2) {
            switch (*VAR_1++) {

            case '<':
                VAR_4 += sizeof("&lt;") - 2;
                break;

            case '>':
                VAR_4 += sizeof("&gt;") - 2;
                break;

            case '&':
                VAR_4 += sizeof("&amp;") - 2;
                break;

            case '"':
                VAR_4 += sizeof("&quot;") - 2;
                break;

            default:
                break;
            }
            VAR_2--;
        }

        return (uintptr_t) VAR_4;
    }

    while (VAR_2) {
        VAR_3 = *VAR_1++;

        switch (VAR_3) {

        case '<':
            *VAR_0++ = '&'; *VAR_0++ = 'l'; *VAR_0++ = 't'; *VAR_0++ = ';';
            break;

        case '>':
            *VAR_0++ = '&'; *VAR_0++ = 'g'; *VAR_0++ = 't'; *VAR_0++ = ';';
            break;

        case '&':
            *VAR_0++ = '&'; *VAR_0++ = 'a'; *VAR_0++ = 'm'; *VAR_0++ = 'p';
            *VAR_0++ = ';';
            break;

        case '"':
            *VAR_0++ = '&'; *VAR_0++ = 'q'; *VAR_0++ = 'u'; *VAR_0++ = 'o';
            *VAR_0++ = 't'; *VAR_0++ = ';';
            break;

        default:
            *VAR_0++ = VAR_3;
            break;
        }
        VAR_2--;
    }

    return (uintptr_t) VAR_0;
}
