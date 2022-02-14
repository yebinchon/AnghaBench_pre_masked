
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lfs2_t ;
struct TYPE_5__ {int * pair; } ;
struct TYPE_4__ {scalar_t__ pos; scalar_t__ id; int * head; TYPE_3__ m; } ;
typedef TYPE_1__ lfs2_dir_t ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int *,TYPE_3__*,int *) ;

int FUNC_2(lfs2_t *VAR_0, lfs2_dir_t *VAR_1) {
    FUNC_0("lfs2_dir_rewind(%p, %p)", (void*)VAR_0, (void*)VAR_1);

    int VAR_2 = FUNC_1(VAR_0, &VAR_1->m, VAR_1->head);
    if (VAR_2) {
        FUNC_0("lfs2_dir_rewind -> %d", VAR_2);
        return VAR_2;
    }

    VAR_1->m.pair[0] = VAR_1->head[0];
    VAR_1->m.pair[1] = VAR_1->head[1];
    VAR_1->id = 0;
    VAR_1->pos = 0;
    FUNC_0("lfs2_dir_rewind -> %d", 0);
    return 0;
}
