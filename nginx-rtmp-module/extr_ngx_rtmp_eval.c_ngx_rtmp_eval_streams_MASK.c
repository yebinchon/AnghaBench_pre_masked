
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_3__ {char* data; int len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
typedef scalar_t__ ngx_fd_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char*,scalar_t__,scalar_t__,int ) ;

ngx_int_t
FUNC_4(ngx_str_t *VAR_11)
{

    ngx_int_t VAR_12, VAR_13, VAR_14, VAR_15;
    ngx_fd_t VAR_16, VAR_17;
    u_char *VAR_18;

    VAR_18 = VAR_11->data;

    while (*VAR_18 >= '0' && *VAR_18 <= '9') {
        VAR_18++;
    }

    switch ((char) *VAR_18) {

        case '>':

            VAR_14 = (VAR_18 == VAR_11->data ? 1 : FUNC_1(VAR_11->data, VAR_18 - VAR_11->data));
            if (VAR_14 == VAR_1) {
                return VAR_1;
            }

            VAR_16 = (ngx_fd_t) VAR_14;
            VAR_12 = VAR_8;
            VAR_13 = VAR_7;
            VAR_18++;

            if (*VAR_18 == (u_char) '>') {
                VAR_12 = VAR_2;
                VAR_13 = VAR_3;
                VAR_18++;
            }

            break;

        case '<':

            VAR_14 = (VAR_18 == VAR_11->data ? 0 : FUNC_1(VAR_11->data, VAR_18 - VAR_11->data));
            if (VAR_14 == VAR_1) {
                return VAR_1;
            }

            VAR_16 = (ngx_fd_t) VAR_14;
            VAR_12 = VAR_6;
            VAR_13 = VAR_5;
            VAR_18++;

            break;

        default:

            return VAR_0;
    }

    if (*VAR_18 == (u_char) '&') {

        VAR_18++;
        VAR_14 = FUNC_1(VAR_18, VAR_11->data + VAR_11->len - VAR_18);
        if (VAR_14 == VAR_1) {
            return VAR_1;
        }
        VAR_17 = (ngx_fd_t) VAR_14;
        VAR_15 = 0;

    } else {

        VAR_17 = FUNC_3(VAR_18, VAR_12, VAR_13, VAR_4);
        if (VAR_17 == VAR_9) {
            return VAR_1;
        }
        VAR_15 = 1;

    }

    if (VAR_17 == VAR_16) {
        return VAR_10;
    }

    FUNC_0(VAR_17, VAR_16);

    if (VAR_15) {
        FUNC_2(VAR_17);
    }
    return VAR_10;




}
