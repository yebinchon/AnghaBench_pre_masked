
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_8__ {int timedout; TYPE_1__* read; } ;
struct TYPE_7__ {scalar_t__ timedout; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(ngx_http_request_t *VAR_2)
{
    ngx_int_t VAR_3;

    if (VAR_2->connection->read->timedout) {
        VAR_2->connection->timedout = 1;
        FUNC_1(VAR_2, VAR_0);
        return;
    }

    VAR_3 = FUNC_0(VAR_2);

    if (VAR_3 >= VAR_1) {
        FUNC_1(VAR_2, VAR_3);
    }
}
