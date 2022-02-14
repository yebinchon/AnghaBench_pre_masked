
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lfs1_t ;
typedef int lfs1_off_t ;
struct TYPE_6__ {int size; int tail; } ;
struct TYPE_7__ {int pos; int off; TYPE_1__ d; } ;
typedef TYPE_2__ lfs1_dir_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;

int FUNC_2(lfs1_t *VAR_1, lfs1_dir_t *VAR_2, lfs1_off_t VAR_3) {

    int VAR_4 = FUNC_1(VAR_1, VAR_2);
    if (VAR_4) {
        return VAR_4;
    }
    VAR_2->pos = VAR_3;

    while (VAR_3 > (0x7fffffff & VAR_2->d.size)) {
        VAR_3 -= 0x7fffffff & VAR_2->d.size;
        if (!(0x80000000 & VAR_2->d.size)) {
            return VAR_0;
        }

        VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_2->d.tail);
        if (VAR_4) {
            return VAR_4;
        }
    }

    VAR_2->off = VAR_3;
    return 0;
}
