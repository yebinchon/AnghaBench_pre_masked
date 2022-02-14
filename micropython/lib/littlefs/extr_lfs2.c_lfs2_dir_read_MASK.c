
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lfs2_info {int name; void* type; } ;
typedef int lfs2_t ;
struct TYPE_6__ {scalar_t__ count; int tail; int split; } ;
struct TYPE_5__ {int pos; scalar_t__ id; TYPE_3__ m; } ;
typedef TYPE_1__ lfs2_dir_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 void* VAR_1 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (int *,TYPE_3__*,scalar_t__,struct lfs2_info*) ;
 int FUNC_3 (struct lfs2_info*,int ,int) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(lfs2_t *VAR_2, lfs2_dir_t *VAR_3, struct lfs2_info *VAR_4) {
    FUNC_0("lfs2_dir_read(%p, %p, %p)",
            (void*)VAR_2, (void*)VAR_3, (void*)VAR_4);
    FUNC_3(VAR_4, 0, sizeof(*VAR_4));


    if (VAR_3->pos == 0) {
        VAR_4->type = VAR_1;
        FUNC_4(VAR_4->name, ".");
        VAR_3->pos += 1;
        FUNC_0("lfs2_dir_read -> %d", 1);
        return 1;
    } else if (VAR_3->pos == 1) {
        VAR_4->type = VAR_1;
        FUNC_4(VAR_4->name, "..");
        VAR_3->pos += 1;
        FUNC_0("lfs2_dir_read -> %d", 1);
        return 1;
    }

    while (1) {
        if (VAR_3->id == VAR_3->m.count) {
            if (!VAR_3->m.split) {
                FUNC_0("lfs2_dir_read -> %d", 0);
                return 0;
            }

            int VAR_5 = FUNC_1(VAR_2, &VAR_3->m, VAR_3->m.tail);
            if (VAR_5) {
                FUNC_0("lfs2_dir_read -> %d", VAR_5);
                return VAR_5;
            }

            VAR_3->id = 0;
        }

        int VAR_6 = FUNC_2(VAR_2, &VAR_3->m, VAR_3->id, VAR_4);
        if (VAR_6 && VAR_6 != VAR_0) {
            FUNC_0("lfs2_dir_read -> %d", VAR_6);
            return VAR_6;
        }

        VAR_3->id += 1;
        if (VAR_6 != VAR_0) {
            break;
        }
    }

    VAR_3->pos += 1;
    FUNC_0("lfs2_dir_read -> %d", 1);
    return 1;
}
