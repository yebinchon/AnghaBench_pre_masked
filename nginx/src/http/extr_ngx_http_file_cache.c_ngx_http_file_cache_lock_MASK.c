
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int ngx_msec_t ;
typedef scalar_t__ ngx_msec_int_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {TYPE_4__* main; TYPE_3__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_17__ {TYPE_2__* shpool; } ;
typedef TYPE_6__ ngx_http_file_cache_t ;
struct TYPE_11__ {int log; TYPE_5__* data; int handler; } ;
struct TYPE_18__ {int lock_age; int updating; int lock_time; scalar_t__ wait_time; scalar_t__ lock_timeout; int waiting; TYPE_10__ wait_event; TYPE_1__* node; TYPE_6__* file_cache; int lock; } ;
typedef TYPE_7__ ngx_http_cache_t ;
struct TYPE_15__ {int blocked; } ;
struct TYPE_14__ {int log; } ;
struct TYPE_13__ {int mutex; } ;
struct TYPE_12__ {int lock_time; int updating; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_10__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,char*,int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_6, ngx_http_cache_t *VAR_7)
{
    ngx_msec_t VAR_8, VAR_9;
    ngx_http_file_cache_t *VAR_10;

    if (!VAR_7->lock) {
        return VAR_1;
    }

    VAR_8 = VAR_4;

    VAR_10 = VAR_7->file_cache;

    FUNC_2(&VAR_10->shpool->mutex);

    VAR_9 = VAR_7->node->lock_time - VAR_8;

    if (!VAR_7->node->updating || (ngx_msec_int_t) VAR_9 <= 0) {
        VAR_7->node->updating = 1;
        VAR_7->node->lock_time = VAR_8 + VAR_7->lock_age;
        VAR_7->updating = 1;
        VAR_7->lock_time = VAR_7->node->lock_time;
    }

    FUNC_3(&VAR_10->shpool->mutex);

    FUNC_1(VAR_3, VAR_6->connection->log, 0,
                   "http file cache lock u:%d wt:%M",
                   VAR_7->updating, VAR_7->wait_time);

    if (VAR_7->updating) {
        return VAR_1;
    }

    if (VAR_7->lock_timeout == 0) {
        return VAR_2;
    }

    VAR_7->waiting = 1;

    if (VAR_7->wait_time == 0) {
        VAR_7->wait_time = VAR_8 + VAR_7->lock_timeout;

        VAR_7->wait_event.handler = VAR_5;
        VAR_7->wait_event.data = VAR_6;
        VAR_7->wait_event.log = VAR_6->connection->log;
    }

    VAR_9 = VAR_7->wait_time - VAR_8;

    FUNC_0(&VAR_7->wait_event, (VAR_9 > 500) ? 500 : VAR_9);

    VAR_6->main->blocked++;

    return VAR_0;
}
