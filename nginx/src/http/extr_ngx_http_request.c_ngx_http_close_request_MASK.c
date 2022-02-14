
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_6__ {scalar_t__ stream; int blocked; int count; TYPE_2__* connection; struct TYPE_6__* main; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_7__ {int log; } ;
typedef TYPE_2__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,int ,int ,char*,int ,int ) ;
 int FUNC_4 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_5(ngx_http_request_t *VAR_2, ngx_int_t VAR_3)
{
    ngx_connection_t *VAR_4;

    VAR_2 = VAR_2->main;
    VAR_4 = VAR_2->connection;

    FUNC_3(VAR_1, VAR_4->log, 0,
                   "http request count:%d blk:%d", VAR_2->count, VAR_2->blocked);

    if (VAR_2->count == 0) {
        FUNC_4(VAR_0, VAR_4->log, 0, "http request count is zero");
    }

    VAR_2->count--;

    if (VAR_2->count || VAR_2->blocked) {
        return;
    }
    FUNC_1(VAR_2, VAR_3);
    FUNC_0(VAR_4);
}
