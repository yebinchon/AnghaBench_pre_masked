
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* _enter ) () ;void (* _exit ) () ;} ;
struct TYPE_4__ {TYPE_1__ CRIS; } ;


 TYPE_2__ VAR_0 ;
 void FUNC_0 () ;
 void FUNC_1 () ;

void FUNC_2(void(*VAR_1)(void), void(*VAR_2)(void))
{
   if(!VAR_1 || !VAR_2)
   {
      VAR_0.CRIS._enter = FUNC_0;
      VAR_0.CRIS._exit = FUNC_1;
   }
   else
   {
      VAR_0.CRIS._enter = VAR_1;
      VAR_0.CRIS._exit = VAR_2;
   }
}
