
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nonExclusiveBackups; scalar_t__ exclusiveBackupState; int forcePageWrites; } ;
struct TYPE_4__ {TYPE_1__ Insert; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_3(void)
{




 if (VAR_4 == VAR_1)
  return;

 FUNC_1();
 FUNC_0(VAR_3->Insert.nonExclusiveBackups > 0);
 FUNC_0(VAR_4 == VAR_2);
 VAR_3->Insert.nonExclusiveBackups--;

 if (VAR_3->Insert.exclusiveBackupState == VAR_0 &&
  VAR_3->Insert.nonExclusiveBackups == 0)
 {
  VAR_3->Insert.forcePageWrites = 0;
 }
 FUNC_2();
}
