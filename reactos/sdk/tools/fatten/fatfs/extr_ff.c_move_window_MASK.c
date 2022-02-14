
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int winsect; int win; int drv; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static
FRESULT FUNC_2 (
 FATFS* VAR_3,
 DWORD VAR_4
)
{
 FRESULT VAR_5 = VAR_1;


 if (VAR_4 != VAR_3->winsect) {

  VAR_5 = FUNC_1(VAR_3);

  if (VAR_5 == VAR_1) {
   if (FUNC_0(VAR_3->drv, VAR_3->win, VAR_4, 1) != VAR_2) {
    VAR_4 = 0xFFFFFFFF;
    VAR_5 = VAR_0;
   }
   VAR_3->winsect = VAR_4;
  }
 }
 return VAR_5;
}
