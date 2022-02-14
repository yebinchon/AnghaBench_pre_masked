
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* _select ) () ;void (* _deselect ) () ;} ;
struct TYPE_4__ {TYPE_1__ CS; } ;


 TYPE_2__ VAR_0 ;
 void FUNC_0 () ;
 void FUNC_1 () ;

void FUNC_2(void(*VAR_1)(void), void(*VAR_2)(void))
{
   if(!VAR_1 || !VAR_2)
   {
      VAR_0.CS._select = FUNC_1;
      VAR_0.CS._deselect = FUNC_0;
   }
   else
   {
      VAR_0.CS._select = VAR_1;
      VAR_0.CS._deselect = VAR_2;
   }
}
