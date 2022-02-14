
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_10__ {int free_clst; int n_fatent; scalar_t__ fs_type; int bitbase; int* win; int fatbase; int fsi_flag; } ;
struct TYPE_9__ {TYPE_2__* fs; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FFOBJID ;
typedef TYPE_2__ FATFS ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 size_t FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;

FRESULT FUNC_7 (
    FATFS *VAR_6,
    DWORD* VAR_7
)
{
    FRESULT VAR_8;
    DWORD VAR_9, VAR_10, VAR_11, VAR_12;
    UINT VAR_13;
    FFOBJID VAR_14;



    VAR_8 = FUNC_2(VAR_6, 0);
    if (VAR_8 == VAR_2) {

        if (VAR_6->free_clst <= VAR_6->n_fatent - 2) {
            *VAR_7 = VAR_6->free_clst;
        } else {

            VAR_9 = 0;
            if (VAR_6->fs_type == VAR_4) {
                VAR_10 = 2; VAR_14.fs = VAR_6;
                do {
                    VAR_12 = FUNC_3(&VAR_14, VAR_10);
                    if (VAR_12 == 0xFFFFFFFF) { VAR_8 = VAR_0; break; }
                    if (VAR_12 == 1) { VAR_8 = VAR_1; break; }
                    if (VAR_12 == 0) VAR_9++;
                } while (++VAR_10 < VAR_6->n_fatent);
            } else {
                {
                    VAR_10 = VAR_6->n_fatent;
                    VAR_11 = VAR_6->fatbase;
                    VAR_13 = 0;
                    do {
                        if (VAR_13 == 0) {
                            VAR_8 = FUNC_6(VAR_6, VAR_11++);
                            if (VAR_8 != VAR_2) break;
                        }
                        if (VAR_6->fs_type == VAR_5) {
                            if (FUNC_5(VAR_6->win + VAR_13) == 0) VAR_9++;
                            VAR_13 += 2;
                        } else {
                            if ((FUNC_4(VAR_6->win + VAR_13) & 0x0FFFFFFF) == 0) VAR_9++;
                            VAR_13 += 4;
                        }
                        VAR_13 %= FUNC_1(VAR_6);
                    } while (--VAR_10);
                }
            }
            *VAR_7 = VAR_9;
            VAR_6->free_clst = VAR_9;
            VAR_6->fsi_flag |= 1;
        }
    }

    FUNC_0(VAR_6, VAR_8);
}
