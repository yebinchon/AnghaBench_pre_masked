
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ recoveryConflictPending; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(void)
{
 if (VAR_0->recoveryConflictPending)
  FUNC_0("abort reason: recovery conflict");

 return 0;
}
