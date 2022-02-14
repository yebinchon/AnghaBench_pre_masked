
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int n_fatent; scalar_t__ fs_type; int free_clst; int fsi_flag; int csize; int drv; } ;
struct TYPE_8__ {int stat; int sclust; int n_cont; TYPE_2__* fs; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FFOBJID ;
typedef TYPE_2__ FATFS ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,int,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int) ;

__attribute__((used)) static FRESULT FUNC_5 (
    FFOBJID* VAR_6,
    DWORD VAR_7,
    DWORD VAR_8
)
{
    FRESULT VAR_9 = VAR_4;
    DWORD VAR_10;
    FATFS *VAR_11 = VAR_6->fs;







    if (VAR_7 < 2 || VAR_7 >= VAR_11->n_fatent) return VAR_3;


    if (VAR_8 != 0 && (!VAR_1 || VAR_11->fs_type != VAR_5 || VAR_6->stat != 2)) {
        VAR_9 = FUNC_4(VAR_11, VAR_8, 0xFFFFFFFF);
        if (VAR_9 != VAR_4) return VAR_9;
    }


    do {
        VAR_10 = FUNC_3(VAR_6, VAR_7);
        if (VAR_10 == 0) break;
        if (VAR_10 == 1) return VAR_3;
        if (VAR_10 == 0xFFFFFFFF) return VAR_2;
        if (!VAR_1 || VAR_11->fs_type != VAR_5) {
            VAR_9 = FUNC_4(VAR_11, VAR_7, 0);
            if (VAR_9 != VAR_4) return VAR_9;
        }
        if (VAR_11->free_clst < VAR_11->n_fatent - 2) {
            VAR_11->free_clst++;
            VAR_11->fsi_flag |= 1;
        }
        VAR_7 = VAR_10;
    } while (VAR_7 < VAR_11->n_fatent);
    return VAR_4;
}
