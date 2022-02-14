
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int last_clst; int n_fatent; scalar_t__ free_clst; scalar_t__ fs_type; int fsi_flag; } ;
struct TYPE_9__ {int stat; int n_frag; scalar_t__ sclust; scalar_t__ n_cont; TYPE_2__* fs; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FFOBJID ;
typedef TYPE_2__ FATFS ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int) ;

__attribute__((used)) static DWORD FUNC_5 (
    FFOBJID* VAR_4,
    DWORD VAR_5
)
{
    DWORD VAR_6, VAR_7, VAR_8;
    FRESULT VAR_9;
    FATFS *VAR_10 = VAR_4->fs;


    if (VAR_5 == 0) {
        VAR_8 = VAR_10->last_clst;
        if (VAR_8 == 0 || VAR_8 >= VAR_10->n_fatent) VAR_8 = 1;
    }
    else {
        VAR_6 = FUNC_3(VAR_4, VAR_5);
        if (VAR_6 < 2) return 1;
        if (VAR_6 == 0xFFFFFFFF) return VAR_6;
        if (VAR_6 < VAR_10->n_fatent) return VAR_6;
        VAR_8 = VAR_5;
    }
    if (VAR_10->free_clst == 0) return 0;
    {
        VAR_7 = 0;
        if (VAR_8 == VAR_5) {
            VAR_7 = VAR_8 + 1;
            if (VAR_7 >= VAR_10->n_fatent) VAR_7 = 2;
            VAR_6 = FUNC_3(VAR_4, VAR_7);
            if (VAR_6 == 1 || VAR_6 == 0xFFFFFFFF) return VAR_6;
            if (VAR_6 != 0) {
                VAR_6 = VAR_10->last_clst;
                if (VAR_6 >= 2 && VAR_6 < VAR_10->n_fatent) VAR_8 = VAR_6;
                VAR_7 = 0;
            }
        }
        if (VAR_7 == 0) {
            VAR_7 = VAR_8;
            for (;;) {
                VAR_7++;
                if (VAR_7 >= VAR_10->n_fatent) {
                    VAR_7 = 2;
                    if (VAR_7 > VAR_8) return 0;
                }
                VAR_6 = FUNC_3(VAR_4, VAR_7);
                if (VAR_6 == 0) break;
                if (VAR_6 == 1 || VAR_6 == 0xFFFFFFFF) return VAR_6;
                if (VAR_7 == VAR_8) return 0;
            }
        }
        VAR_9 = FUNC_4(VAR_10, VAR_7, 0xFFFFFFFF);
        if (VAR_9 == VAR_2 && VAR_5 != 0) {
            VAR_9 = FUNC_4(VAR_10, VAR_5, VAR_7);
        }
    }

    if (VAR_9 == VAR_2) {
        VAR_10->last_clst = VAR_7;
        if (VAR_10->free_clst <= VAR_10->n_fatent - 2) VAR_10->free_clst--;
        VAR_10->fsi_flag |= 1;
    } else {
        VAR_7 = (VAR_9 == VAR_0) ? 0xFFFFFFFF : 1;
    }

    return VAR_7;
}
