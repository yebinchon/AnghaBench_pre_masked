
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct lfs2_mlist {int dummy; } ;
struct TYPE_11__ {struct lfs2_mlist* mlist; int * root; } ;
typedef TYPE_1__ lfs2_t ;
typedef int lfs2_stag_t ;
struct TYPE_13__ {int * pair; } ;
struct TYPE_12__ {struct TYPE_12__* next; scalar_t__ type; scalar_t__ pos; scalar_t__ id; TYPE_6__ m; int * head; } ;
typedef TYPE_2__ lfs2_dir_t ;
typedef int lfs2_block_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (char*,int,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,TYPE_6__*,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_6__*,char const**,int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_6__*,int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(lfs2_t *VAR_3, lfs2_dir_t *VAR_4, const char *VAR_5) {
    FUNC_1("lfs2_dir_open(%p, %p, \"%s\")", (void*)VAR_3, (void*)VAR_4, VAR_5);
    lfs2_stag_t VAR_6 = FUNC_3(VAR_3, &VAR_4->m, &VAR_5, ((void*)0));
    if (VAR_6 < 0) {
        FUNC_1("lfs2_dir_open -> %d", VAR_6);
        return VAR_6;
    }

    if (FUNC_7(VAR_6) != VAR_1) {
        FUNC_1("lfs2_dir_open -> %d", VAR_0);
        return VAR_0;
    }

    lfs2_block_t VAR_7[2];
    if (FUNC_6(VAR_6) == 0x3ff) {

        VAR_7[0] = VAR_3->root[0];
        VAR_7[1] = VAR_3->root[1];
    } else {

        lfs2_stag_t VAR_8 = FUNC_4(VAR_3, &VAR_4->m, FUNC_0(0x700, 0x3ff, 0),
                FUNC_0(VAR_2, FUNC_6(VAR_6), 8), VAR_7);
        if (VAR_8 < 0) {
            FUNC_1("lfs2_dir_open -> %d", VAR_8);
            return VAR_8;
        }
        FUNC_5(VAR_7);
    }


    int VAR_9 = FUNC_2(VAR_3, &VAR_4->m, VAR_7);
    if (VAR_9) {
        FUNC_1("lfs2_dir_open -> %d", VAR_9);
        return VAR_9;
    }


    VAR_4->head[0] = VAR_4->m.pair[0];
    VAR_4->head[1] = VAR_4->m.pair[1];
    VAR_4->id = 0;
    VAR_4->pos = 0;


    VAR_4->type = VAR_1;
    VAR_4->next = (lfs2_dir_t*)VAR_3->mlist;
    VAR_3->mlist = (struct lfs2_mlist*)VAR_4;

    FUNC_1("lfs2_dir_open -> %d", 0);
    return 0;
}
