
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ah; int dl; int al; } ;
union REGS {TYPE_1__ h; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (union REGS*,union REGS*) ;

int
FUNC_2(int VAR_0)
{






    union REGS VAR_1;

    VAR_1.h.ah = 0x0e;
    VAR_1.h.dl = VAR_0 - 1;
    FUNC_1(&VAR_1, &VAR_1);
    VAR_1.h.ah = 0x19;
    FUNC_1(&VAR_1, &VAR_1);
    if (VAR_1.h.al == VAR_0 - 1)
 return 0;

    return -1;

}
