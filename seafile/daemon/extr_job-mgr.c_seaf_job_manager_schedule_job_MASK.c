
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {void* data; int done_func; int thread_func; TYPE_1__* manager; scalar_t__ id; } ;
struct TYPE_7__ {int next_job_id; } ;
typedef TYPE_1__ SeafJobManager ;
typedef TYPE_2__ SeafJob ;
typedef int JobThreadFunc ;
typedef int JobDoneCallback ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 () ;

int
FUNC_3 (SeafJobManager *VAR_0,
                               JobThreadFunc VAR_1,
                               JobDoneCallback VAR_2,
                               void *VAR_3)
{
    SeafJob *VAR_4 = FUNC_2 ();
    VAR_4->id = VAR_0->next_job_id++;
    VAR_4->manager = VAR_0;
    VAR_4->thread_func = VAR_1;
    VAR_4->done_func = VAR_2;
    VAR_4->data = VAR_3;

    if (FUNC_0 (VAR_4) < 0) {
        FUNC_1 (VAR_4);
        return -1;
    }

    return 0;
}
