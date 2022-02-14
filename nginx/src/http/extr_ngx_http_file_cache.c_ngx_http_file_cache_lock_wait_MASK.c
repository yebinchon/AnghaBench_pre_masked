
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_msec_t ;
typedef scalar_t__ ngx_msec_int_t ;
struct TYPE_15__ {int (* write_event_handler ) (TYPE_5__*) ;TYPE_4__* main; TYPE_1__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_16__ {TYPE_3__* shpool; } ;
typedef TYPE_6__ ngx_http_file_cache_t ;
struct TYPE_17__ {int wait_time; scalar_t__ waiting; int wait_event; TYPE_2__* node; TYPE_6__* file_cache; scalar_t__ lock_timeout; } ;
typedef TYPE_7__ ngx_http_cache_t ;
struct TYPE_14__ {int blocked; } ;
struct TYPE_13__ {int mutex; } ;
struct TYPE_12__ {int lock_time; scalar_t__ updating; } ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_5(ngx_http_request_t *VAR_2, ngx_http_cache_t *VAR_3)
{
    ngx_uint_t VAR_4;
    ngx_msec_t VAR_5, VAR_6;
    ngx_http_file_cache_t *VAR_7;

    VAR_5 = VAR_1;

    VAR_6 = VAR_3->wait_time - VAR_5;

    if ((ngx_msec_int_t) VAR_6 <= 0) {
        FUNC_1(VAR_0, VAR_2->connection->log, 0,
                      "cache lock timeout");
        VAR_3->lock_timeout = 0;
        goto wakeup;
    }

    VAR_7 = VAR_3->file_cache;
    VAR_4 = 0;

    FUNC_2(&VAR_7->shpool->mutex);

    VAR_6 = VAR_3->node->lock_time - VAR_5;

    if (VAR_3->node->updating && (ngx_msec_int_t) VAR_6 > 0) {
        VAR_4 = 1;
    }

    FUNC_3(&VAR_7->shpool->mutex);

    if (VAR_4) {
        FUNC_0(&VAR_3->wait_event, (VAR_6 > 500) ? 500 : VAR_6);
        return;
    }

wakeup:

    VAR_3->waiting = 0;
    VAR_2->main->blocked--;
    VAR_2->write_event_handler(VAR_2);
}
