
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lfs2_mlist {struct lfs2_mlist* next; } ;
struct TYPE_3__ {struct lfs2_mlist* mlist; } ;
typedef TYPE_1__ lfs2_t ;
typedef int lfs2_dir_t ;


 int FUNC_0 (char*,void*,...) ;

int FUNC_1(lfs2_t *VAR_0, lfs2_dir_t *VAR_1) {
    FUNC_0("lfs2_dir_close(%p, %p)", (void*)VAR_0, (void*)VAR_1);

    for (struct lfs2_mlist **VAR_2 = &VAR_0->mlist; *VAR_2; VAR_2 = &(*VAR_2)->next) {
        if (*VAR_2 == (struct lfs2_mlist*)VAR_1) {
            *VAR_2 = (*VAR_2)->next;
            break;
        }
    }

    FUNC_0("lfs2_dir_close -> %d", 0);
    return 0;
}
