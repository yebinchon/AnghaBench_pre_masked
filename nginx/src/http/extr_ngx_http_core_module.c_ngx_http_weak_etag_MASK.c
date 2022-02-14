
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_9__ {int len; char* data; } ;
struct TYPE_7__ {TYPE_4__ value; scalar_t__ hash; } ;
typedef TYPE_2__ ngx_table_elt_t ;
struct TYPE_6__ {TYPE_2__* etag; } ;
struct TYPE_8__ {TYPE_1__ headers_out; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;


 char* FUNC_0 (int ,int) ;
 char* FUNC_1 (char*,char*,TYPE_4__*) ;

void
FUNC_2(ngx_http_request_t *VAR_0)
{
    size_t VAR_1;
    u_char *VAR_2;
    ngx_table_elt_t *VAR_3;

    VAR_3 = VAR_0->headers_out.etag;

    if (VAR_3 == ((void*)0)) {
        return;
    }

    if (VAR_3->value.len > 2
        && VAR_3->value.data[0] == 'W'
        && VAR_3->value.data[1] == '/')
    {
        return;
    }

    if (VAR_3->value.len < 1 || VAR_3->value.data[0] != '"') {
        VAR_0->headers_out.etag->hash = 0;
        VAR_0->headers_out.etag = ((void*)0);
        return;
    }

    VAR_2 = FUNC_0(VAR_0->pool, VAR_3->value.len + 2);
    if (VAR_2 == ((void*)0)) {
        VAR_0->headers_out.etag->hash = 0;
        VAR_0->headers_out.etag = ((void*)0);
        return;
    }

    VAR_1 = FUNC_1(VAR_2, "W/%V", &VAR_3->value) - VAR_2;

    VAR_3->value.data = VAR_2;
    VAR_3->value.len = VAR_1;
}
