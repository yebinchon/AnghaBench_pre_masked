
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uuid_t ;
struct rrdengine_journalfile {int datafile; } ;
struct TYPE_3__ {int lock; struct pg_cache_page_index* last_page_index; int JudyHS_array; } ;
struct page_cache {TYPE_1__ metrics_index; } ;
struct rrdengine_instance {struct page_cache pg_cache; } ;
struct rrdeng_page_descr {struct extent_info* extent; int * id; int end_time; int start_time; int page_length; } ;
struct rrdeng_jf_store_data {unsigned int number_of_pages; TYPE_2__* descr; int extent_size; int extent_offset; } ;
struct pg_cache_page_index {int id; struct pg_cache_page_index* prev; } ;
struct extent_info {unsigned int number_of_pages; struct rrdeng_page_descr** pages; int * next; int datafile; int size; int offset; } ;
struct TYPE_4__ {scalar_t__ type; int end_time; int start_time; int page_length; scalar_t__ uuid; } ;
typedef struct pg_cache_page_index* Pvoid_t ;


 struct pg_cache_page_index** FUNC_0 (int ,int *,int) ;
 struct pg_cache_page_index** FUNC_1 (int *,int *,int,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 struct pg_cache_page_index* FUNC_3 (int *) ;
 int FUNC_4 (struct extent_info*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct extent_info*) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 struct extent_info* FUNC_8 (int) ;
 struct rrdeng_page_descr* FUNC_9 () ;
 int FUNC_10 (struct rrdengine_instance*,struct pg_cache_page_index*,struct rrdeng_page_descr*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct rrdengine_instance *VAR_2, struct rrdengine_journalfile *VAR_3,
                                    void *VAR_4, unsigned VAR_5)
{
    struct page_cache *VAR_6 = &VAR_2->pg_cache;
    unsigned VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    struct rrdeng_page_descr *VAR_12;
    struct extent_info *VAR_13;

    struct rrdeng_jf_store_data *VAR_14;

    VAR_14 = VAR_4;
    VAR_8 = VAR_14->number_of_pages;
    VAR_10 = sizeof(*VAR_14->descr) * VAR_8;
    VAR_9 = sizeof(*VAR_14) + VAR_10;
    if (VAR_9 > VAR_5) {
        FUNC_5("Corrupted transaction payload.");
        return;
    }

    VAR_13 = FUNC_8(sizeof(*VAR_13) + VAR_8 * sizeof(VAR_13->pages[0]));
    VAR_13->offset = VAR_14->extent_offset;
    VAR_13->size = VAR_14->extent_size;
    VAR_13->datafile = VAR_3->datafile;
    VAR_13->next = ((void*)0);

    for (VAR_7 = 0, VAR_11 = 0 ; VAR_7 < VAR_8 ; ++VAR_7) {
        uuid_t *VAR_15;
        Pvoid_t *VAR_16;
        struct pg_cache_page_index *VAR_17;

        if (VAR_0 != VAR_14->descr[VAR_7].type) {
            FUNC_5("Unknown page type encountered.");
            continue;
        }
        VAR_15 = (uuid_t *)VAR_14->descr[VAR_7].uuid;

        FUNC_11(&VAR_6->metrics_index.lock);
        VAR_16 = FUNC_0(VAR_6->metrics_index.JudyHS_array, VAR_15, sizeof(uuid_t));
        if (FUNC_7(((void*)0) != VAR_16)) {
            VAR_17 = *VAR_16;
        }
        FUNC_12(&VAR_6->metrics_index.lock);
        if (((void*)0) == VAR_16) {

            FUNC_13(&VAR_6->metrics_index.lock);
            VAR_16 = FUNC_1(&VAR_6->metrics_index.JudyHS_array, VAR_15, sizeof(uuid_t), VAR_1);
            FUNC_2(((void*)0) == *VAR_16);
            *VAR_16 = VAR_17 = FUNC_3(VAR_15);
            VAR_17->prev = VAR_6->metrics_index.last_page_index;
            VAR_6->metrics_index.last_page_index = VAR_17;
            FUNC_14(&VAR_6->metrics_index.lock);
        }

        VAR_12 = FUNC_9();
        VAR_12->page_length = VAR_14->descr[VAR_7].page_length;
        VAR_12->start_time = VAR_14->descr[VAR_7].start_time;
        VAR_12->end_time = VAR_14->descr[VAR_7].end_time;
        VAR_12->id = &VAR_17->id;
        VAR_12->extent = VAR_13;
        VAR_13->pages[VAR_11++] = VAR_12;
        FUNC_10(VAR_2, VAR_17, VAR_12);
    }

    VAR_13->number_of_pages = VAR_11;

    if (FUNC_7(VAR_11))
        FUNC_4(VAR_13);
    else
        FUNC_6(VAR_13);
}
