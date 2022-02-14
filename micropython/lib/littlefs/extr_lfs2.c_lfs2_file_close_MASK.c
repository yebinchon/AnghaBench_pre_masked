
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct lfs2_mlist {struct lfs2_mlist* next; } ;
struct TYPE_11__ {struct lfs2_mlist* mlist; } ;
typedef TYPE_3__ lfs2_t ;
struct TYPE_10__ {int buffer; } ;
struct TYPE_12__ {int flags; TYPE_2__ cache; TYPE_1__* cfg; } ;
typedef TYPE_4__ lfs2_file_t ;
struct TYPE_9__ {int buffer; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_3 (int ) ;

int FUNC_4(lfs2_t *VAR_1, lfs2_file_t *VAR_2) {
    FUNC_1("lfs2_file_close(%p, %p)", (void*)VAR_1, (void*)VAR_2);
    FUNC_0(VAR_2->flags & VAR_0);

    int VAR_3 = FUNC_2(VAR_1, VAR_2);


    for (struct lfs2_mlist **VAR_4 = &VAR_1->mlist; *VAR_4; VAR_4 = &(*VAR_4)->next) {
        if (*VAR_4 == (struct lfs2_mlist*)VAR_2) {
            *VAR_4 = (*VAR_4)->next;
            break;
        }
    }


    if (!VAR_2->cfg->buffer) {
        FUNC_3(VAR_2->cache.buffer);
    }

    VAR_2->flags &= ~VAR_0;
    FUNC_1("lfs2_file_close -> %d", VAR_3);
    return VAR_3;
}
