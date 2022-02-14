
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int free; } ;
typedef TYPE_1__ ngx_http_upstream_keepalive_srv_conf_t ;
struct TYPE_9__ {int queue; TYPE_1__* conf; } ;
typedef TYPE_2__ ngx_http_upstream_keepalive_cache_t ;
struct TYPE_10__ {scalar_t__ ready; TYPE_4__* data; int log; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_11__ {TYPE_2__* data; TYPE_7__* read; int fd; scalar_t__ close; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_12__ {scalar_t__ timedout; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ,char*,int,int ) ;

__attribute__((used)) static void
FUNC_6(ngx_event_t *VAR_5)
{
    ngx_http_upstream_keepalive_srv_conf_t *VAR_6;
    ngx_http_upstream_keepalive_cache_t *VAR_7;

    int VAR_8;
    char VAR_9[1];
    ngx_connection_t *VAR_10;

    FUNC_2(VAR_2, VAR_5->log, 0,
                   "keepalive close handler");

    VAR_10 = VAR_5->data;

    if (VAR_10->close || VAR_10->read->timedout) {
        goto close;
    }

    VAR_8 = FUNC_5(VAR_10->fd, VAR_9, 1, VAR_0);

    if (VAR_8 == -1 && VAR_4 == VAR_1) {
        VAR_5->ready = 0;

        if (FUNC_0(VAR_10->read, 0) != VAR_3) {
            goto close;
        }

        return;
    }

close:

    VAR_7 = VAR_10->data;
    VAR_6 = VAR_7->conf;

    FUNC_1(VAR_10);

    FUNC_4(&VAR_7->queue);
    FUNC_3(&VAR_6->free, &VAR_7->queue);
}
