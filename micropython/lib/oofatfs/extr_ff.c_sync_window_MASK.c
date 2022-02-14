
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ winsect; scalar_t__ fatbase; scalar_t__ fsize; int n_fats; int win; int drv; scalar_t__ wflag; } ;
typedef int FRESULT ;
typedef TYPE_1__ FATFS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static FRESULT FUNC_1 (
    FATFS* VAR_3
)
{
    FRESULT VAR_4 = VAR_1;


    if (VAR_3->wflag) {
        if (FUNC_0(VAR_3->drv, VAR_3->win, VAR_3->winsect, 1) == VAR_2) {
            VAR_3->wflag = 0;
            if (VAR_3->winsect - VAR_3->fatbase < VAR_3->fsize) {
                if (VAR_3->n_fats == 2) FUNC_0(VAR_3->drv, VAR_3->win, VAR_3->winsect + VAR_3->fsize, 1);
            }
        } else {
            VAR_4 = VAR_0;
        }
    }
    return VAR_4;
}
