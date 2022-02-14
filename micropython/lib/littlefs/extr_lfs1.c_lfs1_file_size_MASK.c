
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lfs1_t ;
typedef int lfs1_soff_t ;
struct TYPE_3__ {int flags; int size; int pos; } ;
typedef TYPE_1__ lfs1_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

lfs1_soff_t FUNC_1(lfs1_t *VAR_1, lfs1_file_t *VAR_2) {
    (void)VAR_1;
    if (VAR_2->flags & VAR_0) {
        return FUNC_0(VAR_2->pos, VAR_2->size);
    } else {
        return VAR_2->size;
    }
}
