
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_15__ {int data; } ;
typedef TYPE_4__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {char* data; int len; } ;
struct TYPE_12__ {scalar_t__ content_length_n; } ;
struct TYPE_16__ {TYPE_3__* connection; TYPE_2__ uri; TYPE_1__ headers_in; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_17__ {int access; } ;
typedef TYPE_6__ ngx_http_dav_loc_conf_t ;
struct TYPE_14__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ) ;
 char* FUNC_4 (TYPE_5__*,TYPE_4__*,size_t*,int ) ;
 int FUNC_5 (int ,int ,int ,char*,int ) ;
 int FUNC_6 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_10, ngx_http_dav_loc_conf_t *VAR_11)
{
    u_char *VAR_12;
    size_t VAR_13;
    ngx_str_t VAR_14;

    if (VAR_10->headers_in.content_length_n > 0) {
        FUNC_6(VAR_6, VAR_10->connection->log, 0,
                      "MKCOL with body is unsupported");
        return VAR_4;
    }

    if (VAR_10->uri.data[VAR_10->uri.len - 1] != '/') {
        FUNC_6(VAR_6, VAR_10->connection->log, 0,
                      "MKCOL can create a collection only");
        return VAR_1;
    }

    VAR_12 = FUNC_4(VAR_10, &VAR_14, &VAR_13, 0);
    if (VAR_12 == ((void*)0)) {
        return VAR_3;
    }

    *(VAR_12 - 1) = '\0';
    VAR_10->uri.len--;

    FUNC_5(VAR_5, VAR_10->connection->log, 0,
                   "http mkcol path: \"%s\"", VAR_14.data);

    if (FUNC_0(VAR_14.data, FUNC_1(VAR_11->access))
        != VAR_0)
    {
        if (FUNC_3(VAR_10, VAR_14.data) != VAR_7) {
            return VAR_3;
        }

        return VAR_2;
    }

    return FUNC_2(VAR_10->connection->log, VAR_9,
                              VAR_1, VAR_8, VAR_14.data);
}
