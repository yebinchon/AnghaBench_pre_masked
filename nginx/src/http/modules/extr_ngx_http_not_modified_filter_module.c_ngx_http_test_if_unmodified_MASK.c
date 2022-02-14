
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int time_t ;
typedef int ngx_uint_t ;
struct TYPE_9__ {int last_modified_time; } ;
struct TYPE_10__ {TYPE_4__* if_unmodified_since; } ;
struct TYPE_13__ {TYPE_2__ headers_out; TYPE_1__* connection; TYPE_3__ headers_in; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_12__ {int len; int data; } ;
struct TYPE_11__ {TYPE_5__ value; } ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static ngx_uint_t
FUNC_2(ngx_http_request_t *VAR_1)
{
    time_t VAR_2;

    if (VAR_1->headers_out.last_modified_time == (time_t) -1) {
        return 0;
    }

    VAR_2 = FUNC_1(VAR_1->headers_in.if_unmodified_since->value.data,
                               VAR_1->headers_in.if_unmodified_since->value.len);

    FUNC_0(VAR_0, VAR_1->connection->log, 0,
                 "http iums:%T lm:%T", VAR_2, VAR_1->headers_out.last_modified_time);

    if (VAR_2 >= VAR_1->headers_out.last_modified_time) {
        return 1;
    }

    return 0;
}
