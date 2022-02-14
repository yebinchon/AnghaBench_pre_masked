
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_3__ {char* data; int len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef char ngx_int_t ;


 char VAR_0 ;
 int VAR_1 ;

ngx_int_t
FUNC_0(ngx_str_t *VAR_2, ngx_uint_t VAR_3)
{
    u_char *VAR_4, *VAR_5;
    ngx_int_t VAR_6, VAR_7, VAR_8;
    ngx_int_t VAR_9, VAR_10, VAR_11;
    ngx_uint_t VAR_12;
    enum {
        st_start = 0,
        st_year,
        st_month,
        st_week,
        st_day,
        st_hour,
        st_min,
        st_sec,
        st_msec,
        st_last
    } VAR_13;

    VAR_12 = 0;
    VAR_6 = 0;
    VAR_7 = 0;
    VAR_10 = VAR_1 / 10;
    VAR_11 = VAR_1 % 10;
    VAR_13 = VAR_3 ? st_start : st_month;

    VAR_4 = VAR_2->data;
    VAR_5 = VAR_4 + VAR_2->len;

    while (VAR_4 < VAR_5) {

        if (*VAR_4 >= '0' && *VAR_4 <= '9') {
            if (VAR_6 >= VAR_10 && (VAR_6 > VAR_10 || *VAR_4 - '0' > VAR_11)) {
                return VAR_0;
            }

            VAR_6 = VAR_6 * 10 + (*VAR_4++ - '0');
            VAR_12 = 1;
            continue;
        }

        switch (*VAR_4++) {

        case 'y':
            if (VAR_13 > st_start) {
                return VAR_0;
            }
            VAR_13 = st_year;
            VAR_9 = VAR_1 / (60 * 60 * 24 * 365);
            VAR_8 = 60 * 60 * 24 * 365;
            break;

        case 'M':
            if (VAR_13 >= st_month) {
                return VAR_0;
            }
            VAR_13 = st_month;
            VAR_9 = VAR_1 / (60 * 60 * 24 * 30);
            VAR_8 = 60 * 60 * 24 * 30;
            break;

        case 'w':
            if (VAR_13 >= st_week) {
                return VAR_0;
            }
            VAR_13 = st_week;
            VAR_9 = VAR_1 / (60 * 60 * 24 * 7);
            VAR_8 = 60 * 60 * 24 * 7;
            break;

        case 'd':
            if (VAR_13 >= st_day) {
                return VAR_0;
            }
            VAR_13 = st_day;
            VAR_9 = VAR_1 / (60 * 60 * 24);
            VAR_8 = 60 * 60 * 24;
            break;

        case 'h':
            if (VAR_13 >= st_hour) {
                return VAR_0;
            }
            VAR_13 = st_hour;
            VAR_9 = VAR_1 / (60 * 60);
            VAR_8 = 60 * 60;
            break;

        case 'm':
            if (VAR_4 < VAR_5 && *VAR_4 == 's') {
                if (VAR_3 || VAR_13 >= st_msec) {
                    return VAR_0;
                }
                VAR_4++;
                VAR_13 = st_msec;
                VAR_9 = VAR_1;
                VAR_8 = 1;
                break;
            }

            if (VAR_13 >= st_min) {
                return VAR_0;
            }
            VAR_13 = st_min;
            VAR_9 = VAR_1 / 60;
            VAR_8 = 60;
            break;

        case 's':
            if (VAR_13 >= st_sec) {
                return VAR_0;
            }
            VAR_13 = st_sec;
            VAR_9 = VAR_1;
            VAR_8 = 1;
            break;

        case ' ':
            if (VAR_13 >= st_sec) {
                return VAR_0;
            }
            VAR_13 = st_last;
            VAR_9 = VAR_1;
            VAR_8 = 1;
            break;

        default:
            return VAR_0;
        }

        if (VAR_13 != st_msec && !VAR_3) {
            VAR_8 *= 1000;
            VAR_9 /= 1000;
        }

        if (VAR_6 > VAR_9) {
            return VAR_0;
        }

        VAR_6 *= VAR_8;

        if (VAR_7 > VAR_1 - VAR_6) {
            return VAR_0;
        }

        VAR_7 += VAR_6;

        VAR_6 = 0;

        while (VAR_4 < VAR_5 && *VAR_4 == ' ') {
            VAR_4++;
        }
    }

    if (!VAR_12) {
        return VAR_0;
    }

    if (!VAR_3) {
        if (VAR_6 > VAR_1 / 1000) {
            return VAR_0;
        }

        VAR_6 *= 1000;
    }

    if (VAR_7 > VAR_1 - VAR_6) {
        return VAR_0;
    }

    return VAR_7 + VAR_6;
}
