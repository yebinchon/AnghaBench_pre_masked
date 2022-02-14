
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {scalar_t__ winsect; scalar_t__ fatbase; scalar_t__ fsize; int n_fats; int win; int drv; scalar_t__ wflag; } ;
typedef int FRESULT ;
typedef TYPE_1__ FATFS ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static
FRESULT FUNC_1 (
 FATFS* VAR_3
)
{
 DWORD VAR_4;
 UINT VAR_5;
 FRESULT VAR_6 = VAR_1;


 if (VAR_3->wflag) {
  VAR_4 = VAR_3->winsect;
  if (FUNC_0(VAR_3->drv, VAR_3->win, VAR_4, 1) != VAR_2) {
   VAR_6 = VAR_0;
  } else {
   VAR_3->wflag = 0;
   if (VAR_4 - VAR_3->fatbase < VAR_3->fsize) {
    for (VAR_5 = VAR_3->n_fats; VAR_5 >= 2; VAR_5--) {
     VAR_4 += VAR_3->fsize;
     FUNC_0(VAR_3->drv, VAR_3->win, VAR_4, 1);
    }
   }
  }
 }
 return VAR_6;
}
