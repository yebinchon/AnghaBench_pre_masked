
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef int ngx_uint_t ;
typedef int ngx_md5_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {size_t len; int valid; int not_found; scalar_t__* data; scalar_t__ no_cacheable; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_10__ {scalar_t__* data; size_t len; } ;
struct TYPE_12__ {TYPE_2__ secret; } ;
typedef TYPE_4__ ngx_http_secure_link_conf_t ;
struct TYPE_9__ {scalar_t__* data; size_t len; } ;
struct TYPE_13__ {TYPE_1__ unparsed_uri; } ;
typedef TYPE_5__ ngx_http_request_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__*,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_2,
    ngx_http_secure_link_conf_t *VAR_3, ngx_http_variable_value_t *VAR_4,
    uintptr_t VAR_5)
{
    u_char *VAR_6, *VAR_7, *VAR_8, *VAR_9;
    size_t VAR_10;
    ngx_int_t VAR_11;
    ngx_uint_t VAR_12;
    ngx_md5_t VAR_13;
    u_char VAR_14[16];

    VAR_6 = &VAR_2->unparsed_uri.data[1];
    VAR_9 = VAR_2->unparsed_uri.data + VAR_2->unparsed_uri.len;

    while (VAR_6 < VAR_9) {
        if (*VAR_6++ == '/') {
            VAR_7 = VAR_6;
            goto md5_start;
        }
    }

    goto not_found;

md5_start:

    while (VAR_6 < VAR_9) {
        if (*VAR_6++ == '/') {
            VAR_8 = VAR_6 - 1;
            goto url_start;
        }
    }

    goto not_found;

url_start:

    VAR_10 = VAR_9 - VAR_6;

    if (VAR_8 - VAR_7 != 32 || VAR_10 == 0) {
        goto not_found;
    }

    FUNC_2(&VAR_13);
    FUNC_3(&VAR_13, VAR_6, VAR_10);
    FUNC_3(&VAR_13, VAR_3->secret.data, VAR_3->secret.len);
    FUNC_1(VAR_14, &VAR_13);

    for (VAR_12 = 0; VAR_12 < 16; VAR_12++) {
        VAR_11 = FUNC_0(&VAR_7[2 * VAR_12], 2);
        if (VAR_11 == VAR_0 || VAR_11 != VAR_14[VAR_12]) {
            goto not_found;
        }
    }

    VAR_4->len = VAR_10;
    VAR_4->valid = 1;
    VAR_4->no_cacheable = 0;
    VAR_4->not_found = 0;
    VAR_4->data = VAR_6;

    return VAR_1;

not_found:

    VAR_4->not_found = 1;

    return VAR_1;
}
