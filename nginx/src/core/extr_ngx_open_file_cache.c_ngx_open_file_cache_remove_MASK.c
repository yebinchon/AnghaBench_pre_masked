
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* data; int log; TYPE_6__* cache; TYPE_3__* file; } ;
typedef TYPE_1__ ngx_open_file_cache_event_t ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_9__ {int close; scalar_t__ use_event; int * event; int node; int queue; } ;
typedef TYPE_3__ ngx_cached_open_file_t ;
struct TYPE_10__ {int current; int rbtree; } ;


 int FUNC_0 (TYPE_6__*,TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(ngx_event_t *VAR_0)
{
    ngx_cached_open_file_t *VAR_1;
    ngx_open_file_cache_event_t *VAR_2;

    VAR_2 = VAR_0->data;
    VAR_1 = VAR_2->file;

    FUNC_2(&VAR_1->queue);

    FUNC_3(&VAR_2->cache->rbtree, &VAR_1->node);

    VAR_2->cache->current--;


    VAR_1->event = ((void*)0);
    VAR_1->use_event = 0;

    VAR_1->close = 1;

    FUNC_0(VAR_2->cache, VAR_1, 0, VAR_0->log);



    FUNC_1(VAR_0->data);
    FUNC_1(VAR_0);
}
