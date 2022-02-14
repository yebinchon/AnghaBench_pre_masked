
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dx; int ax; scalar_t__ cx; } ;
union REGS {TYPE_1__ x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,union REGS*,union REGS*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1(void)
{
    union REGS VAR_5;

    if (VAR_2)
    {
 VAR_5.x.cx = 0;
 VAR_5.x.dx = VAR_0 * VAR_3 - 1;
 VAR_5.x.ax = 7;
 (void)FUNC_0(0x33, &VAR_5, &VAR_5);

 VAR_5.x.cx = 0;
 VAR_5.x.dx = VAR_1 * VAR_4 - 1;
 VAR_5.x.ax = 8;
 (void)FUNC_0(0x33, &VAR_5, &VAR_5);
    }
}
