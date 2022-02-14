
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fs_type; int fsi_flag; int free_clst; int last_clst; int drv; scalar_t__ winsect; scalar_t__ win; scalar_t__ volbase; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FATFS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static FRESULT FUNC_6 (
    FATFS* VAR_10
)
{
    FRESULT VAR_11;


    VAR_11 = FUNC_5(VAR_10);
    if (VAR_11 == VAR_3) {
        if (VAR_10->fs_type == VAR_8 && VAR_10->fsi_flag == 1) {

            FUNC_2(VAR_10->win, 0, sizeof VAR_10->win);
            FUNC_4(VAR_10->win + VAR_0, 0xAA55);
            FUNC_3(VAR_10->win + VAR_5, 0x41615252);
            FUNC_3(VAR_10->win + VAR_7, 0x61417272);
            FUNC_3(VAR_10->win + VAR_4, VAR_10->free_clst);
            FUNC_3(VAR_10->win + VAR_6, VAR_10->last_clst);

            VAR_10->winsect = VAR_10->volbase + 1;
            FUNC_1(VAR_10->drv, VAR_10->win, VAR_10->winsect, 1);
            VAR_10->fsi_flag = 0;
        }

        if (FUNC_0(VAR_10->drv, VAR_1, 0) != VAR_9) VAR_11 = VAR_2;
    }

    return VAR_11;
}
