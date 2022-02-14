
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_15__ {int len; char* data; } ;
struct TYPE_14__ {TYPE_5__ value; } ;
typedef TYPE_4__ ngx_table_elt_t ;
typedef TYPE_5__ ngx_str_t ;
struct TYPE_12__ {TYPE_1__* etag; } ;
struct TYPE_16__ {TYPE_3__* connection; TYPE_2__ headers_out; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_13__ {int log; } ;
struct TYPE_11__ {TYPE_5__ value; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_5__*,TYPE_5__*) ;
 scalar_t__ FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static ngx_uint_t
FUNC_2(ngx_http_request_t *VAR_1, ngx_table_elt_t *VAR_2,
    ngx_uint_t VAR_3)
{
    u_char *VAR_4, *VAR_5, VAR_6;
    ngx_str_t VAR_7, *VAR_8;

    VAR_8 = &VAR_2->value;

    if (VAR_8->len == 1 && VAR_8->data[0] == '*') {
        return 1;
    }

    if (VAR_1->headers_out.etag == ((void*)0)) {
        return 0;
    }

    VAR_7 = VAR_1->headers_out.etag->value;

    FUNC_0(VAR_0, VAR_1->connection->log, 0,
                   "http im:\"%V\" etag:%V", VAR_8, &VAR_7);

    if (VAR_3
        && VAR_7.len > 2
        && VAR_7.data[0] == 'W'
        && VAR_7.data[1] == '/')
    {
        VAR_7.len -= 2;
        VAR_7.data += 2;
    }

    VAR_4 = VAR_8->data;
    VAR_5 = VAR_8->data + VAR_8->len;

    while (VAR_4 < VAR_5) {

        if (VAR_3
            && VAR_5 - VAR_4 > 2
            && VAR_4[0] == 'W'
            && VAR_4[1] == '/')
        {
            VAR_4 += 2;
        }

        if (VAR_7.len > (size_t) (VAR_5 - VAR_4)) {
            return 0;
        }

        if (FUNC_1(VAR_4, VAR_7.data, VAR_7.len) != 0) {
            goto skip;
        }

        VAR_4 += VAR_7.len;

        while (VAR_4 < VAR_5) {
            VAR_6 = *VAR_4;

            if (VAR_6 == ' ' || VAR_6 == '\t') {
                VAR_4++;
                continue;
            }

            break;
        }

        if (VAR_4 == VAR_5 || *VAR_4 == ',') {
            return 1;
        }

    skip:

        while (VAR_4 < VAR_5 && *VAR_4 != ',') { VAR_4++; }
        while (VAR_4 < VAR_5) {
            VAR_6 = *VAR_4;

            if (VAR_6 == ' ' || VAR_6 == '\t' || VAR_6 == ',') {
                VAR_4++;
                continue;
            }

            break;
        }
    }

    return 0;
}
