
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sym; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*) ;

void FUNC_1(void)
{
 if (!VAR_2)
  VAR_2 = VAR_1->sym;
 else if (VAR_2 != VAR_1->sym)
  FUNC_0("trying to redefine defconfig symbol");
 VAR_2->flags |= VAR_0;
}
