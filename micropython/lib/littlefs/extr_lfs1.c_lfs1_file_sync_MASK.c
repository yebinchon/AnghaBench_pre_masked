
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int lfs1_t ;
struct TYPE_15__ {int flags; int size; int head; int poff; int pair; } ;
typedef TYPE_3__ lfs1_file_t ;
struct TYPE_13__ {int size; int head; } ;
struct TYPE_14__ {TYPE_1__ file; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_2__ u; } ;
struct TYPE_16__ {TYPE_8__ d; int off; } ;
typedef TYPE_4__ lfs1_entry_t ;
struct TYPE_17__ {int * pair; } ;
typedef TYPE_5__ lfs1_dir_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ,int ,TYPE_8__*,int) ;
 int FUNC_2 (int *,TYPE_5__*,int ) ;
 int FUNC_3 (int *,TYPE_5__*,TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int ) ;

int FUNC_7(lfs1_t *VAR_3, lfs1_file_t *VAR_4) {
    int VAR_5 = FUNC_5(VAR_3, VAR_4);
    if (VAR_5) {
        return VAR_5;
    }

    if ((VAR_4->flags & VAR_0) &&
            !(VAR_4->flags & VAR_1) &&
            !FUNC_6(VAR_4->pair)) {

        lfs1_dir_t VAR_6;
        VAR_5 = FUNC_2(VAR_3, &VAR_6, VAR_4->pair);
        if (VAR_5) {
            return VAR_5;
        }

        lfs1_entry_t VAR_7 = {.off = VAR_4->poff};
        VAR_5 = FUNC_1(VAR_3, VAR_6.pair[0], VAR_7.off,
                &VAR_7.d, sizeof(VAR_7.d));
        FUNC_4(&VAR_7.d);
        if (VAR_5) {
            return VAR_5;
        }

        FUNC_0(VAR_7.d.type == VAR_2);
        VAR_7.d.u.file.head = VAR_4->head;
        VAR_7.d.u.file.size = VAR_4->size;

        VAR_5 = FUNC_3(VAR_3, &VAR_6, &VAR_7, ((void*)0));
        if (VAR_5) {
            return VAR_5;
        }

        VAR_4->flags &= ~VAR_0;
    }

    return 0;
}
