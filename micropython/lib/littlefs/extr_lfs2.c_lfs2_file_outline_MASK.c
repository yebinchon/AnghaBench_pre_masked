
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lfs2_t ;
struct TYPE_4__ {int flags; int pos; int off; } ;
typedef TYPE_1__ lfs2_file_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(lfs2_t *VAR_1, lfs2_file_t *VAR_2) {
    VAR_2->off = VAR_2->pos;
    FUNC_0(VAR_1);
    int VAR_3 = FUNC_1(VAR_1, VAR_2);
    if (VAR_3) {
        return VAR_3;
    }

    VAR_2->flags &= ~VAR_0;
    return 0;
}
