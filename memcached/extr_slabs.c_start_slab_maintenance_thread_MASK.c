
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * slab_start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_4 (int) ;

int FUNC_5(void) {
    int VAR_7;
    VAR_4 = 0;
    VAR_3.slab_start = ((void*)0);
    char *VAR_8 = FUNC_2("MEMCACHED_SLAB_BULK_CHECK");
    if (VAR_8 != ((void*)0)) {
        VAR_2 = FUNC_0(VAR_8);
        if (VAR_2 == 0) {
            VAR_2 = VAR_0;
        }
    }

    if ((VAR_7 = FUNC_3(&VAR_1, ((void*)0),
                              VAR_5, ((void*)0))) != 0) {
        FUNC_1(VAR_6, "Can't create rebal thread: %s\n", FUNC_4(VAR_7));
        return -1;
    }
    return 0;
}
