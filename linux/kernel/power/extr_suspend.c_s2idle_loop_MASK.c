
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* wake ) () ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
 FUNC_0("suspend-to-idle\n");
 for (;;) {
  if (VAR_0 && VAR_0->wake)
   VAR_0->wake();

  if (FUNC_2())
   break;

  FUNC_1(0);

  FUNC_3();
 }

 FUNC_0("resume from suspend-to-idle\n");
}
