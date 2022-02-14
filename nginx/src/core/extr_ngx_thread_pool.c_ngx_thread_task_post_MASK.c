
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int active; } ;
struct TYPE_9__ {scalar_t__ id; struct TYPE_9__* next; TYPE_1__ event; } ;
typedef TYPE_3__ ngx_thread_task_t ;
struct TYPE_8__ {TYPE_3__** last; } ;
struct TYPE_10__ {scalar_t__ waiting; scalar_t__ max_queue; int name; int log; int mtx; TYPE_2__ queue; int cond; } ;
typedef TYPE_4__ ngx_thread_pool_t ;
typedef scalar_t__ ngx_int_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,scalar_t__,int *) ;
 int FUNC_1 (int ,int ,int ,char*,int *,...) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_5 ;

ngx_int_t
FUNC_5(ngx_thread_pool_t *VAR_6, ngx_thread_task_t *VAR_7)
{
    if (VAR_7->event.active) {
        FUNC_1(VAR_1, VAR_6->log, 0,
                      "task #%ui already active", VAR_7->id);
        return VAR_0;
    }

    if (FUNC_3(&VAR_6->mtx, VAR_6->log) != VAR_4) {
        return VAR_0;
    }

    if (VAR_6->waiting >= VAR_6->max_queue) {
        (void) FUNC_4(&VAR_6->mtx, VAR_6->log);

        FUNC_1(VAR_3, VAR_6->log, 0,
                      "thread pool \"%V\" queue overflow: %i tasks waiting",
                      &VAR_6->name, VAR_6->waiting);
        return VAR_0;
    }

    VAR_7->event.active = 1;

    VAR_7->id = VAR_5++;
    VAR_7->next = ((void*)0);

    if (FUNC_2(&VAR_6->cond, VAR_6->log) != VAR_4) {
        (void) FUNC_4(&VAR_6->mtx, VAR_6->log);
        return VAR_0;
    }

    *VAR_6->queue.last = VAR_7;
    VAR_6->queue.last = &VAR_7->next;

    VAR_6->waiting++;

    (void) FUNC_4(&VAR_6->mtx, VAR_6->log);

    FUNC_0(VAR_2, VAR_6->log, 0,
                   "task #%ui added to thread pool \"%V\"",
                   VAR_7->id, &VAR_6->name);

    return VAR_4;
}
