
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int fs; scalar_t__ sect; } ;
typedef scalar_t__ FRESULT ;
typedef int FILINFO ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

FRESULT FUNC_8 (
 DIR* VAR_3,
 FILINFO* VAR_4
)
{
 FRESULT VAR_5;
 VAR_0;


 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5 == VAR_2) {
  if (!VAR_4) {
   VAR_5 = FUNC_5(VAR_3, 0);
  } else {
   FUNC_1(*VAR_3);
   VAR_5 = FUNC_4(VAR_3, 0);
   if (VAR_5 == VAR_1) {
    VAR_3->sect = 0;
    VAR_5 = VAR_2;
   }
   if (VAR_5 == VAR_2) {
    FUNC_6(VAR_3, VAR_4);
    VAR_5 = FUNC_3(VAR_3, 0);
    if (VAR_5 == VAR_1) {
     VAR_3->sect = 0;
     VAR_5 = VAR_2;
    }
   }
   FUNC_0();
  }
 }

 FUNC_2(VAR_3->fs, VAR_5);
}
