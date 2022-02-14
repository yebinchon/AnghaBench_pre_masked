
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ total_items; } ;
struct TYPE_3__ {scalar_t__ curr_items; scalar_t__ curr_bytes; } ;
typedef int * ADD_STAT ;


 int FUNC_0 (char*,char*,unsigned long long) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned long long FUNC_3 (int *) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (int *,void*) ;
 int FUNC_6 (int *,void*) ;
 int FUNC_7 (int *,void*) ;
 int FUNC_8 (int *,void*) ;
 scalar_t__ FUNC_9 (int,char const*,char*) ;
 int FUNC_10 (int *,void*) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static bool FUNC_11(const char *VAR_2, int VAR_3, ADD_STAT VAR_4, void *VAR_5) {
    bool VAR_6 = 1;

    if (VAR_4 != ((void*)0)) {
        if (!VAR_2) {

            FUNC_1();
            FUNC_0("bytes", "%llu", (unsigned long long)VAR_1.curr_bytes);
            FUNC_0("curr_items", "%llu", (unsigned long long)VAR_1.curr_items);
            FUNC_0("total_items", "%llu", (unsigned long long)VAR_0.total_items);
            FUNC_2();
            FUNC_0("slab_global_page_pool", "%u", FUNC_3(((void*)0)));
            FUNC_8(VAR_4, VAR_5);
        } else if (FUNC_9(VAR_3, VAR_2, "items") == 0) {
            FUNC_4(VAR_4, VAR_5);
        } else if (FUNC_9(VAR_3, VAR_2, "slabs") == 0) {
            FUNC_10(VAR_4, VAR_5);
        } else if (FUNC_9(VAR_3, VAR_2, "sizes") == 0) {
            FUNC_5(VAR_4, VAR_5);
        } else if (FUNC_9(VAR_3, VAR_2, "sizes_enable") == 0) {
            FUNC_7(VAR_4, VAR_5);
        } else if (FUNC_9(VAR_3, VAR_2, "sizes_disable") == 0) {
            FUNC_6(VAR_4, VAR_5);
        } else {
            VAR_6 = 0;
        }
    } else {
        VAR_6 = 0;
    }

    return VAR_6;
}
