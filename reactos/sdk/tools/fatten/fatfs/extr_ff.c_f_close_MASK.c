
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * fs; int lockid; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FIL ;
typedef int FATFS ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

FRESULT FUNC_4 (
 FIL *VAR_1
)
{
 FRESULT VAR_2;



 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == VAR_0)

 {
  VAR_2 = FUNC_3(VAR_1);
  if (VAR_2 == VAR_0) {







    VAR_1->fs = 0;



  }
 }
 return VAR_2;
}
