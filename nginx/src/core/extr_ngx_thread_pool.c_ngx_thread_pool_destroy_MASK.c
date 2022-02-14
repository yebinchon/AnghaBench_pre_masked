
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_8__ {scalar_t__ active; } ;
struct TYPE_9__ {TYPE_1__ event; void* ctx; int handler; } ;
typedef TYPE_2__ ngx_thread_task_t ;
struct TYPE_10__ {scalar_t__ threads; int log; int mtx; int cond; } ;
typedef TYPE_3__ ngx_thread_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(ngx_thread_pool_t *VAR_2)
{
    ngx_uint_t VAR_3;
    ngx_thread_task_t VAR_4;
    volatile ngx_uint_t VAR_5;

    FUNC_0(&VAR_4, sizeof(ngx_thread_task_t));

    VAR_4.handler = VAR_1;
    VAR_4.ctx = (void *) &VAR_5;

    for (VAR_3 = 0; VAR_3 < VAR_2->threads; VAR_3++) {
        VAR_5 = 1;

        if (FUNC_4(VAR_2, &VAR_4) != VAR_0) {
            return;
        }

        while (VAR_5) {
            FUNC_1();
        }

        VAR_4.event.active = 0;
    }

    (void) FUNC_2(&VAR_2->cond, VAR_2->log);

    (void) FUNC_3(&VAR_2->mtx, VAR_2->log);
}
