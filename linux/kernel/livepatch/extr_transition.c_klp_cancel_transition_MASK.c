
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mod; } ;
struct TYPE_3__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (char*,int ) ;

void FUNC_3(void)
{
 if (FUNC_0(VAR_2 != VAR_0))
  return;

 FUNC_2("'%s': canceling patching transition, going to unpatch\n",
   VAR_3->mod->name);

 VAR_2 = VAR_1;
 FUNC_1();
}
