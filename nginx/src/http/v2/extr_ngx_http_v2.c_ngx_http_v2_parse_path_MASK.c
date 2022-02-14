
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {scalar_t__ len; } ;
struct TYPE_12__ {scalar_t__ uri_start; scalar_t__ uri_end; TYPE_2__* connection; TYPE_1__ unparsed_uri; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_10__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,int ,char*,...) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_4, ngx_str_t *VAR_5)
{
    if (VAR_4->unparsed_uri.len) {
        FUNC_2(VAR_2, VAR_4->connection->log, 0,
                      "client sent duplicate :path header");

        return VAR_1;
    }

    if (VAR_5->len == 0) {
        FUNC_2(VAR_2, VAR_4->connection->log, 0,
                      "client sent empty :path header");

        return VAR_1;
    }

    VAR_4->uri_start = VAR_5->data;
    VAR_4->uri_end = VAR_5->data + VAR_5->len;

    if (FUNC_0(VAR_4) != VAR_3) {
        FUNC_2(VAR_2, VAR_4->connection->log, 0,
                      "client sent invalid :path header: \"%V\"", VAR_5);

        return VAR_1;
    }

    if (FUNC_1(VAR_4) != VAR_3) {




        return VAR_0;
    }

    return VAR_3;
}
