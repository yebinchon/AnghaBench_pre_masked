
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ fd; scalar_t__ min_uses; int events; } ;
typedef TYPE_1__ ngx_open_file_info_t ;
typedef int ngx_open_file_cache_t ;
struct TYPE_12__ {scalar_t__ fd; struct TYPE_12__* data; int log; int handler; int * cache; TYPE_3__* file; } ;
typedef TYPE_2__ ngx_open_file_cache_event_t ;
typedef int ngx_log_t ;
typedef int ngx_event_t ;
struct TYPE_13__ {scalar_t__ uses; TYPE_2__* event; scalar_t__ use_event; } ;
typedef TYPE_3__ ngx_cached_open_file_t ;
struct TYPE_14__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int ) ;
 TYPE_2__* FUNC_1 (int,int *) ;
 TYPE_2__* FUNC_2 (int,int *) ;
 TYPE_7__* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_4(ngx_open_file_cache_t *VAR_8,
    ngx_cached_open_file_t *VAR_9, ngx_open_file_info_t *VAR_10, ngx_log_t *VAR_11)
{
    ngx_open_file_cache_event_t *VAR_12;

    if (!(VAR_6 & VAR_3)
        || !VAR_10->events
        || VAR_9->event
        || VAR_10->fd == VAR_0
        || VAR_9->uses < VAR_10->min_uses)
    {
        return;
    }

    VAR_9->use_event = 0;

    VAR_9->event = FUNC_2(sizeof(ngx_event_t), VAR_11);
    if (VAR_9->event== ((void*)0)) {
        return;
    }

    VAR_12 = FUNC_1(sizeof(ngx_open_file_cache_event_t), VAR_11);
    if (VAR_12 == ((void*)0)) {
        FUNC_3(VAR_9->event);
        VAR_9->event = ((void*)0);
        return;
    }

    VAR_12->fd = VAR_10->fd;
    VAR_12->file = VAR_9;
    VAR_12->cache = VAR_8;

    VAR_9->event->handler = VAR_7;
    VAR_9->event->data = VAR_12;







    VAR_9->event->log = VAR_5->log;

    if (FUNC_0(VAR_9->event, VAR_4, VAR_2)
        != VAR_1)
    {
        FUNC_3(VAR_9->event->data);
        FUNC_3(VAR_9->event);
        VAR_9->event = ((void*)0);
        return;
    }
    return;
}
