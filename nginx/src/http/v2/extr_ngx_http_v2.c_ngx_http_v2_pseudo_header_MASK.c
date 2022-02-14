
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_14__ {int len; int data; } ;
struct TYPE_12__ {TYPE_4__ name; int value; } ;
typedef TYPE_2__ ngx_http_v2_header_t ;
struct TYPE_13__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int ,int ,int ,char*,TYPE_4__*) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_2, ngx_http_v2_header_t *VAR_3)
{
    VAR_3->name.len--;
    VAR_3->name.data++;

    switch (VAR_3->name.len) {
    case 4:
        if (FUNC_5(VAR_3->name.data, "path", sizeof("path") - 1)
            == 0)
        {
            return FUNC_2(VAR_2, &VAR_3->value);
        }

        break;

    case 6:
        if (FUNC_5(VAR_3->name.data, "method", sizeof("method") - 1)
            == 0)
        {
            return FUNC_1(VAR_2, &VAR_3->value);
        }

        if (FUNC_5(VAR_3->name.data, "scheme", sizeof("scheme") - 1)
            == 0)
        {
            return FUNC_3(VAR_2, &VAR_3->value);
        }

        break;

    case 9:
        if (FUNC_5(VAR_3->name.data, "authority", sizeof("authority") - 1)
            == 0)
        {
            return FUNC_0(VAR_2, &VAR_3->value);
        }

        break;
    }

    FUNC_4(VAR_1, VAR_2->connection->log, 0,
                  "client sent unknown pseudo-header \":%V\"",
                  &VAR_3->name);

    return VAR_0;
}
