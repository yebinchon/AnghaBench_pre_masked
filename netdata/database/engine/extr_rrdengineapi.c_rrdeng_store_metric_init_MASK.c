
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uuid_t ;
typedef int temp_id ;
struct TYPE_11__ {int lock; struct pg_cache_page_index* last_page_index; int JudyHS_array; } ;
struct page_cache {TYPE_4__ metrics_index; } ;
struct rrdengine_instance {struct page_cache pg_cache; } ;
struct rrdeng_collect_handle {struct pg_cache_page_index* page_index; scalar_t__ unaligned_page; int * prev_descr; int * descr; struct rrdengine_instance* ctx; } ;
struct pg_cache_page_index {int id; struct pg_cache_page_index* prev; } ;
struct TYPE_13__ {TYPE_5__* state; TYPE_3__* rrdset; int id; } ;
struct TYPE_9__ {struct rrdeng_collect_handle rrdeng; } ;
struct TYPE_12__ {int * rrdeng_uuid; TYPE_2__ handle; } ;
struct TYPE_10__ {int id; TYPE_1__* rrdhost; } ;
struct TYPE_8__ {struct rrdengine_instance* rrdeng_ctx; } ;
typedef TYPE_6__ RRDDIM ;
typedef struct pg_cache_page_index* Pvoid_t ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int *,unsigned char*,unsigned int*) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_0 ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 struct pg_cache_page_index** FUNC_6 (int ,int *,int) ;
 struct pg_cache_page_index** FUNC_7 (int *,int *,int,int ) ;
 int VAR_1 ;
 int FUNC_8 (int) ;
 struct pg_cache_page_index* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int *,unsigned char*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

void FUNC_17(RRDDIM *VAR_2)
{
    struct rrdeng_collect_handle *VAR_3;
    struct page_cache *VAR_4;
    struct rrdengine_instance *VAR_5;
    uuid_t VAR_6;
    Pvoid_t *VAR_7;
    struct pg_cache_page_index *VAR_8;
    EVP_MD_CTX *VAR_9;
    unsigned char VAR_10[VAR_0];
    unsigned int VAR_11;



    VAR_5 = VAR_2->rrdset->rrdhost->rrdeng_ctx;
    VAR_4 = &VAR_5->pg_cache;
    VAR_3 = &VAR_2->state->handle.rrdeng;
    VAR_3->ctx = VAR_5;

    VAR_9 = FUNC_3();
    FUNC_1(VAR_9, FUNC_5(), ((void*)0));
    FUNC_2(VAR_9, VAR_2->id, FUNC_12(VAR_2->id));
    FUNC_2(VAR_9, VAR_2->rrdset->id, FUNC_12(VAR_2->rrdset->id));
    FUNC_0(VAR_9, VAR_10, &VAR_11);
    FUNC_4(VAR_9);
    FUNC_8(VAR_11 > sizeof(VAR_6));
    FUNC_11(&VAR_6, VAR_10, sizeof(VAR_6));

    VAR_3->descr = ((void*)0);
    VAR_3->prev_descr = ((void*)0);
    VAR_3->unaligned_page = 0;

    FUNC_13(&VAR_4->metrics_index.lock);
    VAR_7 = FUNC_6(VAR_4->metrics_index.JudyHS_array, &VAR_6, sizeof(uuid_t));
    if (FUNC_10(((void*)0) != VAR_7)) {
        VAR_8 = *VAR_7;
    }
    FUNC_14(&VAR_4->metrics_index.lock);
    if (((void*)0) == VAR_7) {

        FUNC_15(&VAR_4->metrics_index.lock);
        VAR_7 = FUNC_7(&VAR_4->metrics_index.JudyHS_array, &VAR_6, sizeof(uuid_t), VAR_1);
        FUNC_8(((void*)0) == *VAR_7);
        *VAR_7 = VAR_8 = FUNC_9(&VAR_6);
        VAR_8->prev = VAR_4->metrics_index.last_page_index;
        VAR_4->metrics_index.last_page_index = VAR_8;
        FUNC_16(&VAR_4->metrics_index.lock);
    }
    VAR_2->state->rrdeng_uuid = &VAR_8->id;
    VAR_3->page_index = VAR_8;
}
