
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dirty; int list_entry_dirty; } ;
typedef TYPE_1__ root ;
struct TYPE_6__ {int need_write; int dirty_subvols_lock; int dirty_subvols; } ;
typedef TYPE_2__ device_extension ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(device_extension* VAR_0, root* VAR_1) {
    if (!VAR_1->dirty) {
        VAR_1->dirty = 1;

        FUNC_0(&VAR_0->dirty_subvols_lock, 1);
        FUNC_2(&VAR_0->dirty_subvols, &VAR_1->list_entry_dirty);
        FUNC_1(&VAR_0->dirty_subvols_lock);
    }

    VAR_0->need_write = 1;
}
