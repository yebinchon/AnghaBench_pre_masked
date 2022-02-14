
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ exclusiveBackupState; } ;
struct TYPE_4__ {TYPE_1__ Insert; } ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void
FUNC_4(int VAR_3, Datum VAR_4)
{
 bool VAR_5 = FUNC_1(VAR_4);


 FUNC_2();
 if (VAR_5)
 {
  FUNC_0(VAR_2->Insert.exclusiveBackupState == VAR_1);
  VAR_2->Insert.exclusiveBackupState = VAR_0;
 }
 FUNC_3();
}
