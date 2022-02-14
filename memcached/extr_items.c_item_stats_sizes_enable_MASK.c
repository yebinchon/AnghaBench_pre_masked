
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int use_cas; } ;
typedef int ADD_STAT ;


 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;

void FUNC_4(ADD_STAT VAR_3, void *VAR_4) {
    FUNC_2(&VAR_2);
    if (!VAR_0.use_cas) {
        FUNC_0("sizes_status", "error", "");
        FUNC_0("sizes_error", "cas_support_disabled", "");
    } else if (VAR_1 == ((void*)0)) {
        FUNC_1();
        if (VAR_1 != ((void*)0)) {
            FUNC_0("sizes_status", "enabled", "");
        } else {
            FUNC_0("sizes_status", "error", "");
            FUNC_0("sizes_error", "no_memory", "");
        }
    } else {
        FUNC_0("sizes_status", "enabled", "");
    }
    FUNC_3(&VAR_2);
}
