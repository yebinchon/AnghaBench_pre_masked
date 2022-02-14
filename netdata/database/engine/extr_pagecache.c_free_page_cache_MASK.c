
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * JudyHS_array; struct rrdeng_page_descr* last_page_index; } ;
struct TYPE_3__ {int * JudyL_array; } ;
struct page_cache {TYPE_2__ metrics_index; TYPE_1__ committed_page_index; } ;
struct rrdengine_instance {struct page_cache pg_cache; } ;
struct rrdeng_page_descr {int pg_cache_descr_state; int * JudyL_array; struct page_cache_descr* pg_cache_descr; struct rrdeng_page_descr* prev; } ;
struct pg_cache_page_index {int pg_cache_descr_state; int * JudyL_array; struct page_cache_descr* pg_cache_descr; struct pg_cache_page_index* prev; } ;
struct page_cache_descr {int flags; struct rrdeng_page_descr* page; } ;
typedef int Word_t ;
typedef struct rrdeng_page_descr* Pvoid_t ;


 int FUNC_0 (int **,int ) ;
 struct rrdeng_page_descr** FUNC_1 (int *,int*,int ) ;
 int FUNC_2 (int **,int ) ;
 struct rrdeng_page_descr** FUNC_3 (int *,int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct rrdeng_page_descr*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct rrdengine_instance*,struct page_cache_descr*) ;
 scalar_t__ FUNC_8 (int) ;

void FUNC_9(struct rrdengine_instance *VAR_4)
{
    struct page_cache *VAR_5 = &VAR_4->pg_cache;
    Word_t VAR_6, VAR_7 = 0;
    Pvoid_t *VAR_8;
    struct pg_cache_page_index *VAR_9, *VAR_10;
    Word_t VAR_11;
    struct rrdeng_page_descr *VAR_12;
    struct page_cache_descr *VAR_13;


    VAR_6 = FUNC_2(&VAR_5->committed_page_index.JudyL_array, VAR_1);
    FUNC_4(((void*)0) == VAR_5->committed_page_index.JudyL_array);
    VAR_7 += VAR_6;

    for (VAR_9 = VAR_5->metrics_index.last_page_index ;
         VAR_9 != ((void*)0) ;
         VAR_9 = VAR_10) {
        VAR_10 = VAR_9->prev;


        VAR_11 = (Word_t) 0;
        VAR_8 = FUNC_1(VAR_9->JudyL_array, &VAR_11, VAR_1);
        VAR_12 = FUNC_8(((void*)0) == VAR_8) ? ((void*)0) : *VAR_8;

        while (VAR_12 != ((void*)0)) {


            if (VAR_12->pg_cache_descr_state & VAR_0) {

                VAR_13 = VAR_12->pg_cache_descr;
                if (VAR_13->flags & VAR_3) {
                    FUNC_5(VAR_13->page);
                    VAR_7 += VAR_2;
                }
                FUNC_7(VAR_4, VAR_13);
                VAR_7 += sizeof(*VAR_13);
            }
            FUNC_5(VAR_12);
            VAR_7 += sizeof(*VAR_12);

            VAR_8 = FUNC_3(VAR_9->JudyL_array, &VAR_11, VAR_1);
            VAR_12 = FUNC_8(((void*)0) == VAR_8) ? ((void*)0) : *VAR_8;
        }


        VAR_6 = FUNC_2(&VAR_9->JudyL_array, VAR_1);
        FUNC_4(((void*)0) == VAR_9->JudyL_array);
        VAR_7 += VAR_6;
        FUNC_5(VAR_9);
        VAR_7 += sizeof(*VAR_9);
    }

    VAR_6 = FUNC_0(&VAR_5->metrics_index.JudyHS_array, VAR_1);
    FUNC_4(((void*)0) == VAR_5->metrics_index.JudyHS_array);
    VAR_7 += VAR_6;

    FUNC_6("Freed %lu bytes of memory from page cache.", VAR_7);
}
