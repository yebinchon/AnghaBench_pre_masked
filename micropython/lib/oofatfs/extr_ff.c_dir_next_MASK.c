
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int stat; TYPE_1__* fs; } ;
struct TYPE_10__ {int dptr; int clust; scalar_t__ dir; int sect; TYPE_3__ obj; } ;
struct TYPE_9__ {scalar_t__ fs_type; int n_rootdir; int csize; int n_fatent; scalar_t__ win; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;
typedef TYPE_2__ DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static FRESULT FUNC_5 (
    DIR* VAR_10,
    int VAR_11
)
{
    DWORD VAR_12, VAR_13;
    FATFS *VAR_14 = VAR_10->obj.fs;


    VAR_12 = VAR_10->dptr + VAR_9;
    if (VAR_12 >= (DWORD)((VAR_0 && VAR_14->fs_type == VAR_6) ? VAR_8 : VAR_7)) VAR_10->sect = 0;
    if (VAR_10->sect == 0) return VAR_4;

    if (VAR_12 % FUNC_0(VAR_14) == 0) {
        VAR_10->sect++;

        if (VAR_10->clust == 0) {
            if (VAR_12 / VAR_9 >= VAR_14->n_rootdir) {
                VAR_10->sect = 0; return VAR_4;
            }
        }
        else {
            if ((VAR_12 / FUNC_0(VAR_14) & (VAR_14->csize - 1)) == 0) {
                VAR_13 = FUNC_4(&VAR_10->obj, VAR_10->clust);
                if (VAR_13 <= 1) return VAR_3;
                if (VAR_13 == 0xFFFFFFFF) return VAR_2;
                if (VAR_13 >= VAR_14->n_fatent) {

                    if (!VAR_11) {
                        VAR_10->sect = 0; return VAR_4;
                    }
                    VAR_13 = FUNC_2(&VAR_10->obj, VAR_10->clust);
                    if (VAR_13 == 0) return VAR_1;
                    if (VAR_13 == 1) return VAR_3;
                    if (VAR_13 == 0xFFFFFFFF) return VAR_2;
                    if (FUNC_3(VAR_14, VAR_13) != VAR_5) return VAR_2;
                    if (VAR_0) VAR_10->obj.stat |= 4;




                }
                VAR_10->clust = VAR_13;
                VAR_10->sect = FUNC_1(VAR_14, VAR_13);
            }
        }
    }
    VAR_10->dptr = VAR_12;
    VAR_10->dir = VAR_14->win + VAR_12 % FUNC_0(VAR_14);

    return VAR_5;
}
