
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* gpr; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned long VAR_1;

 for (VAR_1 = 15; VAR_1 <= 29; VAR_1++)
  FUNC_0(VAR_0.gpr[VAR_1] != FUNC_1(VAR_1));

 FUNC_2("Regs OK\n");
 return 0;
}
