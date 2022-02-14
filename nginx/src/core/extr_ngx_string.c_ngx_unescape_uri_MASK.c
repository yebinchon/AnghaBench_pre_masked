
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int ngx_uint_t ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(u_char **VAR_2, u_char **VAR_3, size_t VAR_4, ngx_uint_t VAR_5)
{
    u_char *VAR_6, *VAR_7, VAR_8, VAR_9, VAR_10;
    enum {
        sw_usual = 0,
        sw_quoted,
        sw_quoted_second
    } VAR_11;

    VAR_6 = *VAR_2;
    VAR_7 = *VAR_3;

    VAR_11 = 0;
    VAR_10 = 0;

    while (VAR_4--) {

        VAR_8 = *VAR_7++;

        switch (VAR_11) {
        case sw_usual:
            if (VAR_8 == '?'
                && (VAR_5 & (VAR_1|VAR_0)))
            {
                *VAR_6++ = VAR_8;
                goto done;
            }

            if (VAR_8 == '%') {
                VAR_11 = sw_quoted;
                break;
            }

            *VAR_6++ = VAR_8;
            break;

        case sw_quoted:

            if (VAR_8 >= '0' && VAR_8 <= '9') {
                VAR_10 = (u_char) (VAR_8 - '0');
                VAR_11 = sw_quoted_second;
                break;
            }

            VAR_9 = (u_char) (VAR_8 | 0x20);
            if (VAR_9 >= 'a' && VAR_9 <= 'f') {
                VAR_10 = (u_char) (VAR_9 - 'a' + 10);
                VAR_11 = sw_quoted_second;
                break;
            }



            VAR_11 = sw_usual;

            *VAR_6++ = VAR_8;

            break;

        case sw_quoted_second:

            VAR_11 = sw_usual;

            if (VAR_8 >= '0' && VAR_8 <= '9') {
                VAR_8 = (u_char) ((VAR_10 << 4) + (VAR_8 - '0'));

                if (VAR_5 & VAR_0) {
                    if (VAR_8 > '%' && VAR_8 < 0x7f) {
                        *VAR_6++ = VAR_8;
                        break;
                    }

                    *VAR_6++ = '%'; *VAR_6++ = *(VAR_7 - 2); *VAR_6++ = *(VAR_7 - 1);

                    break;
                }

                *VAR_6++ = VAR_8;

                break;
            }

            VAR_9 = (u_char) (VAR_8 | 0x20);
            if (VAR_9 >= 'a' && VAR_9 <= 'f') {
                VAR_8 = (u_char) ((VAR_10 << 4) + (VAR_9 - 'a') + 10);

                if (VAR_5 & VAR_1) {
                    if (VAR_8 == '?') {
                        *VAR_6++ = VAR_8;
                        goto done;
                    }

                    *VAR_6++ = VAR_8;
                    break;
                }

                if (VAR_5 & VAR_0) {
                    if (VAR_8 == '?') {
                        *VAR_6++ = VAR_8;
                        goto done;
                    }

                    if (VAR_8 > '%' && VAR_8 < 0x7f) {
                        *VAR_6++ = VAR_8;
                        break;
                    }

                    *VAR_6++ = '%'; *VAR_6++ = *(VAR_7 - 2); *VAR_6++ = *(VAR_7 - 1);
                    break;
                }

                *VAR_6++ = VAR_8;

                break;
            }



            break;
        }
    }

done:

    *VAR_2 = VAR_6;
    *VAR_3 = VAR_7;
}
