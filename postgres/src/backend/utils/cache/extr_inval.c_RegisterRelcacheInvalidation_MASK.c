
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int RelcacheInitFileInval; int CurrentCmdInvalidMsgs; } ;
typedef scalar_t__ Oid ;


 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_3(Oid VAR_2, Oid VAR_3)
{
 FUNC_0(&VAR_1->CurrentCmdInvalidMsgs,
           VAR_2, VAR_3);







 (void) FUNC_1(1);







 if (VAR_3 == VAR_0 || FUNC_2(VAR_3))
  VAR_1->RelcacheInitFileInval = 1;
}
