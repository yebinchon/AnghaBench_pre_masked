
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
typedef int uint32_t ;
struct slabinfo {int active_objs; int num_objs; int obj_size; long pages_per_slab; int data_num_slabs; void* mem_usage; int obj_filling; void* mem_waste; void* data_shared_avail; void* data_active_slabs; void* tune_shared_factor; void* tune_batchcnt; void* tune_limit; void* obj_per_slab; } ;
typedef int procfile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 struct slabinfo* FUNC_2 (char*) ;
 size_t FUNC_3 (int *) ;
 char* FUNC_4 (int *,size_t,int) ;
 int FUNC_5 (int *,size_t) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ,char*,int ) ;
 int FUNC_8 (char*,...) ;
 struct slabinfo* VAR_3 ;
 void* FUNC_9 (char*) ;
 long FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;

struct slabinfo *FUNC_12() {

    FUNC_8("-> Reading procfile %s", VAR_0);

    static procfile *VAR_4 = ((void*)0);
 static long VAR_5 = 0;

 if (FUNC_11(!VAR_5)) {
  VAR_5 = FUNC_10(VAR_2);
  FUNC_8("   Discovered pagesize: %ld", VAR_5);
 }

    if(FUNC_11(!VAR_4)) {
        VAR_4 = FUNC_7(VAR_4, VAR_0, " ,:" , VAR_1);
        if(FUNC_11(!VAR_4)) {
            FUNC_0("<- Cannot open file '%s", VAR_0);
            FUNC_1(1);
        }
    }

    VAR_4 = FUNC_6(VAR_4);
    if(FUNC_11(!VAR_4)) {
        FUNC_0("<- Cannot read file '%s'", VAR_0);
        FUNC_1(0);
    }



    size_t VAR_6 = FUNC_3(VAR_4), VAR_7;

    FUNC_8("   Read %lu lines from procfile", (unsigned long)VAR_6);
    for(VAR_7 = 2; VAR_7 < VAR_6; VAR_7++) {
        if (FUNC_11(FUNC_5(VAR_4, VAR_7) < 14)) {
            FUNC_8("    Line %lu has only %lu words, skipping", (unsigned long)VAR_7, FUNC_5(VAR_4,VAR_7));
            continue;
        }

        char *VAR_8 = FUNC_4(VAR_4, VAR_7, 0);
        struct slabinfo *VAR_9 = FUNC_2(VAR_8);

        VAR_9->active_objs = FUNC_9(FUNC_4(VAR_4, VAR_7, 1));
        VAR_9->num_objs = FUNC_9(FUNC_4(VAR_4, VAR_7, 2));
        VAR_9->obj_size = FUNC_9(FUNC_4(VAR_4, VAR_7, 3));
        VAR_9->obj_per_slab = FUNC_9(FUNC_4(VAR_4, VAR_7, 4));
        VAR_9->pages_per_slab = FUNC_9(FUNC_4(VAR_4, VAR_7, 5));

        VAR_9->tune_limit = FUNC_9(FUNC_4(VAR_4, VAR_7, 7));
        VAR_9->tune_batchcnt = FUNC_9(FUNC_4(VAR_4, VAR_7, 8));
        VAR_9->tune_shared_factor = FUNC_9(FUNC_4(VAR_4, VAR_7, 9));

        VAR_9->data_active_slabs = FUNC_9(FUNC_4(VAR_4, VAR_7, 11));
        VAR_9->data_num_slabs = FUNC_9(FUNC_4(VAR_4, VAR_7, 12));
        VAR_9->data_shared_avail = FUNC_9(FUNC_4(VAR_4, VAR_7, 13));

        uint32_t VAR_10 = VAR_9->pages_per_slab * VAR_5;




        VAR_9->mem_usage = (uint64_t)(VAR_9->data_num_slabs * VAR_10);


        VAR_9->mem_waste = VAR_9->mem_usage - (uint64_t)(VAR_9->active_objs * VAR_9->obj_size);





        if (VAR_9->num_objs > 0)
            VAR_9->obj_filling = 100 * VAR_9->active_objs / VAR_9->num_objs;
        else
            VAR_9->obj_filling = 0;

        FUNC_8("    Updated slab %s: %lu %lu %lu %lu %lu / %lu %lu %lu / %lu %lu %lu / %lu %lu %hhu",
            VAR_8, VAR_9->active_objs, VAR_9->num_objs, VAR_9->obj_size, VAR_9->obj_per_slab, VAR_9->pages_per_slab,
            VAR_9->tune_limit, VAR_9->tune_batchcnt, VAR_9->tune_shared_factor,
            VAR_9->data_active_slabs, VAR_9->data_num_slabs, VAR_9->data_shared_avail,
            VAR_9->mem_usage, VAR_9->mem_waste, VAR_9->obj_filling);
    }

    return VAR_3;
}
