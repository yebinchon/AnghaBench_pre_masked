
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sym; } ;
struct TYPE_3__ {int name; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;

void FUNC_1(void)
{
 if (VAR_1)
  FUNC_0("symbol '%s' redefines option 'modules' already defined by symbol '%s'",
       VAR_0->sym->name, VAR_1->name);
 VAR_1 = VAR_0->sym;
}
