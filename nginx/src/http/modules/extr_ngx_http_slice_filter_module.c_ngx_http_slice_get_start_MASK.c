
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char u_char ;
typedef char off_t ;
struct TYPE_7__ {int len; char* data; } ;
struct TYPE_8__ {TYPE_2__ value; } ;
typedef TYPE_3__ ngx_table_elt_t ;
struct TYPE_6__ {TYPE_3__* range; scalar_t__ if_range; } ;
struct TYPE_9__ {TYPE_1__ headers_in; } ;
typedef TYPE_4__ ngx_http_request_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static off_t
FUNC_2(ngx_http_request_t *VAR_1)
{
    off_t VAR_2, VAR_3, VAR_4;
    u_char *VAR_5;
    ngx_table_elt_t *VAR_6;

    if (VAR_1->headers_in.if_range) {
        return 0;
    }

    VAR_6 = VAR_1->headers_in.range;

    if (VAR_6 == ((void*)0)
        || VAR_6->value.len < 7
        || FUNC_1(VAR_6->value.data, (u_char *) "bytes=", 6) != 0)
    {
        return 0;
    }

    VAR_5 = VAR_6->value.data + 6;

    if (FUNC_0(VAR_5, ',')) {
        return 0;
    }

    while (*VAR_5 == ' ') { VAR_5++; }

    if (*VAR_5 == '-') {
        return 0;
    }

    VAR_3 = VAR_0 / 10;
    VAR_4 = VAR_0 % 10;

    VAR_2 = 0;

    while (*VAR_5 >= '0' && *VAR_5 <= '9') {
        if (VAR_2 >= VAR_3 && (VAR_2 > VAR_3 || *VAR_5 - '0' > VAR_4)) {
            return 0;
        }

        VAR_2 = VAR_2 * 10 + (*VAR_5++ - '0');
    }

    return VAR_2;
}
