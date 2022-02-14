
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {scalar_t__ delayed; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_8__ {TYPE_3__* write; int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,char*) ;

void
FUNC_4(ngx_http_request_t *VAR_3)
{
    ngx_event_t *VAR_4;

    FUNC_3(VAR_1, VAR_3->connection->log, 0,
                   "perl sleep handler");

    VAR_4 = VAR_3->connection->write;

    if (VAR_4->delayed) {

        if (FUNC_0(VAR_4, 0) != VAR_2) {
            FUNC_1(VAR_3, VAR_0);
        }

        return;
    }

    FUNC_2(VAR_3);
}
