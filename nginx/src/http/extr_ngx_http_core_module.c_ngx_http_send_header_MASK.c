
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_8__ {scalar_t__ len; } ;
struct TYPE_9__ {TYPE_2__ status_line; scalar_t__ status; } ;
struct TYPE_10__ {TYPE_3__ headers_out; scalar_t__ err_status; TYPE_1__* connection; scalar_t__ header_sent; scalar_t__ post_action; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int ,int ,char*) ;

ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3)
{
    if (VAR_3->post_action) {
        return VAR_2;
    }

    if (VAR_3->header_sent) {
        FUNC_1(VAR_1, VAR_3->connection->log, 0,
                      "header already sent");
        return VAR_0;
    }

    if (VAR_3->err_status) {
        VAR_3->headers_out.status = VAR_3->err_status;
        VAR_3->headers_out.status_line.len = 0;
    }

    return FUNC_0(VAR_3);
}
