
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ connected; scalar_t__ loggedIn; int ctrlTimeout; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_0 ;

void
FUNC_3(void)
{
 if (VAR_0.connected != 0) {
  if (VAR_0.loggedIn != 0) {
   FUNC_2();
  }
  FUNC_1(&VAR_0);
 }
 VAR_0.ctrlTimeout = 3;
 (void) FUNC_0(&VAR_0);
}
