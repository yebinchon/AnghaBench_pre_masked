
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_12__ {scalar_t__ len; int data; } ;
struct TYPE_11__ {scalar_t__ len; int data; } ;
struct TYPE_13__ {TYPE_4__ value; TYPE_3__ key; } ;
typedef TYPE_5__ ngx_table_elt_t ;
struct TYPE_9__ {size_t len; int * data; } ;
struct TYPE_14__ {TYPE_2__* headers; TYPE_1__ header; int pass_client_cert; int timeout; int line; int file; int * peer; int uri; int host_header; } ;
typedef TYPE_6__ ngx_mail_auth_http_conf_t ;
struct TYPE_15__ {int pool; int log; } ;
typedef TYPE_7__ ngx_conf_t ;
struct TYPE_10__ {size_t nelts; TYPE_5__* elts; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int * FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,char*,int ,int ) ;
 int * FUNC_4 (int ,size_t) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_5, void *VAR_6, void *VAR_7)
{
    ngx_mail_auth_http_conf_t *VAR_8 = VAR_6;
    ngx_mail_auth_http_conf_t *VAR_9 = VAR_7;

    u_char *VAR_10;
    size_t VAR_11;
    ngx_uint_t VAR_12;
    ngx_table_elt_t *VAR_13;

    if (VAR_9->peer == ((void*)0)) {
        VAR_9->peer = VAR_8->peer;
        VAR_9->host_header = VAR_8->host_header;
        VAR_9->uri = VAR_8->uri;

        if (VAR_9->peer == ((void*)0)) {
            FUNC_3(VAR_4, VAR_5->log, 0,
                          "no \"auth_http\" is defined for server in %s:%ui",
                          VAR_9->file, VAR_9->line);

            return VAR_2;
        }
    }

    FUNC_0(VAR_9->timeout, VAR_8->timeout, 60000);

    FUNC_1(VAR_9->pass_client_cert, VAR_8->pass_client_cert, 0);

    if (VAR_9->headers == ((void*)0)) {
        VAR_9->headers = VAR_8->headers;
        VAR_9->header = VAR_8->header;
    }

    if (VAR_9->headers && VAR_9->header.len == 0) {
        VAR_11 = 0;
        VAR_13 = VAR_9->headers->elts;
        for (VAR_12 = 0; VAR_12 < VAR_9->headers->nelts; VAR_12++) {
            VAR_11 += VAR_13[VAR_12].key.len + 2 + VAR_13[VAR_12].value.len + 2;
        }

        VAR_10 = FUNC_4(VAR_5->pool, VAR_11);
        if (VAR_10 == ((void*)0)) {
            return VAR_2;
        }

        VAR_9->header.len = VAR_11;
        VAR_9->header.data = VAR_10;

        for (VAR_12 = 0; VAR_12 < VAR_9->headers->nelts; VAR_12++) {
            VAR_10 = FUNC_2(VAR_10, VAR_13[VAR_12].key.data, VAR_13[VAR_12].key.len);
            *VAR_10++ = ':'; *VAR_10++ = ' ';
            VAR_10 = FUNC_2(VAR_10, VAR_13[VAR_12].value.data, VAR_13[VAR_12].value.len);
            *VAR_10++ = VAR_0; *VAR_10++ = VAR_1;
        }
    }

    return VAR_3;
}
