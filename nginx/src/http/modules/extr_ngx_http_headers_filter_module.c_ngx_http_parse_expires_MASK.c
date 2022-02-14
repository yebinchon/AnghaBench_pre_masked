
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
typedef int ngx_uint_t ;
struct TYPE_4__ {int len; char* data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
typedef scalar_t__ ngx_http_expires_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_str_t *VAR_7, ngx_http_expires_t *VAR_8,
    time_t *VAR_9, char **VAR_10)
{
    ngx_uint_t VAR_11;

    if (*VAR_8 != VAR_4) {

        if (VAR_7->len == 5 && FUNC_1(VAR_7->data, "epoch", 5) == 0) {
            *VAR_8 = VAR_2;
            return VAR_6;
        }

        if (VAR_7->len == 3 && FUNC_1(VAR_7->data, "max", 3) == 0) {
            *VAR_8 = VAR_3;
            return VAR_6;
        }

        if (VAR_7->len == 3 && FUNC_1(VAR_7->data, "off", 3) == 0) {
            *VAR_8 = VAR_5;
            return VAR_6;
        }
    }

    if (VAR_7->len && VAR_7->data[0] == '@') {
        VAR_7->data++;
        VAR_7->len--;
        VAR_11 = 0;

        if (*VAR_8 == VAR_4) {
            *VAR_10 = "daily time cannot be used with \"modified\" parameter";
            return VAR_0;
        }

        *VAR_8 = VAR_1;

    } else if (VAR_7->len && VAR_7->data[0] == '+') {
        VAR_7->data++;
        VAR_7->len--;
        VAR_11 = 0;

    } else if (VAR_7->len && VAR_7->data[0] == '-') {
        VAR_7->data++;
        VAR_7->len--;
        VAR_11 = 1;

    } else {
        VAR_11 = 0;
    }

    *VAR_9 = FUNC_0(VAR_7, 1);

    if (*VAR_9 == (time_t) VAR_0) {
        *VAR_10 = "invalid value";
        return VAR_0;
    }

    if (*VAR_8 == VAR_1
        && *VAR_9 > 24 * 60 * 60)
    {
        *VAR_10 = "daily time value must be less than 24 hours";
        return VAR_0;
    }

    if (VAR_11) {
        *VAR_9 = - *VAR_9;
    }

    return VAR_6;
}
