
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct lfs1_info {int name; int size; int type; } ;
struct TYPE_15__ {int root; } ;
typedef TYPE_4__ lfs1_t ;
struct TYPE_12__ {int size; } ;
struct TYPE_13__ {int dir; TYPE_1__ file; } ;
struct TYPE_14__ {int nlen; scalar_t__ alen; scalar_t__ elen; TYPE_2__ u; int type; } ;
struct TYPE_16__ {TYPE_3__ d; scalar_t__ off; } ;
typedef TYPE_5__ lfs1_entry_t ;
struct TYPE_17__ {int * pair; } ;
typedef TYPE_6__ lfs1_dir_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,scalar_t__,int ,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_6__*,TYPE_5__*,char const**) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct lfs1_info*,int ,int) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(lfs1_t *VAR_1, const char *VAR_2, struct lfs1_info *VAR_3) {
    lfs1_dir_t VAR_4;
    lfs1_entry_t VAR_5;
    int VAR_6 = FUNC_1(VAR_1, &VAR_4, &VAR_5, &VAR_2);
    if (VAR_6) {
        return VAR_6;
    }

    FUNC_3(VAR_3, 0, sizeof(*VAR_3));
    VAR_3->type = VAR_5.d.type;
    if (VAR_3->type == VAR_0) {
        VAR_3->size = VAR_5.d.u.file.size;
    }

    if (FUNC_2(VAR_5.d.u.dir, VAR_1->root) == 0) {
        FUNC_4(VAR_3->name, "/");
    } else {
        VAR_6 = FUNC_0(VAR_1, VAR_4.pair[0],
                VAR_5.off + 4+VAR_5.d.elen+VAR_5.d.alen,
                VAR_3->name, VAR_5.d.nlen);
        if (VAR_6) {
            return VAR_6;
        }
    }

    return 0;
}
