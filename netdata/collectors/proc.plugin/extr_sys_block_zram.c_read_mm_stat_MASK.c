
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int procfile ;
struct TYPE_3__ {void* pages_compacted; void* same_pages; void* mem_used_max; void* mem_limit; void* mem_used_total; void* compr_data_size; void* orig_data_size; } ;
typedef TYPE_1__ MM_STAT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static inline int FUNC_6(procfile *VAR_0, MM_STAT *VAR_1) {
    VAR_0 = FUNC_3(VAR_0);
    if (!VAR_0)
        return -1;
    if (FUNC_1(VAR_0) < 1) {
        FUNC_0(VAR_0);
        return -1;
    }
    if (FUNC_2(VAR_0, 0) < 7) {
        FUNC_0(VAR_0);
        return -1;
    }

    VAR_1->orig_data_size = FUNC_5(FUNC_4(VAR_0, 0));
    VAR_1->compr_data_size = FUNC_5(FUNC_4(VAR_0, 1));
    VAR_1->mem_used_total = FUNC_5(FUNC_4(VAR_0, 2));
    VAR_1->mem_limit = FUNC_5(FUNC_4(VAR_0, 3));
    VAR_1->mem_used_max = FUNC_5(FUNC_4(VAR_0, 4));
    VAR_1->same_pages = FUNC_5(FUNC_4(VAR_0, 5));
    VAR_1->pages_compacted = FUNC_5(FUNC_4(VAR_0, 6));
    return 0;
}
