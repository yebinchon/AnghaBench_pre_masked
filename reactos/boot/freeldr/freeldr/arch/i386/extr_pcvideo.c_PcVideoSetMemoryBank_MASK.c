
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ USHORT ;
struct TYPE_5__ {int ax; int bx; scalar_t__ dx; } ;
struct TYPE_6__ {TYPE_1__ w; } ;
typedef TYPE_2__ REGS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static VOID
FUNC_1(USHORT VAR_1)
{
  REGS VAR_2;

  if (VAR_0 != VAR_1)
    {
      VAR_2.w.ax = 0x4F05;
      VAR_2.w.bx = 0x0000;
      VAR_2.w.dx = VAR_1;
      FUNC_0(0x10, &VAR_2, &VAR_2);

      if (0x004F == VAR_2.w.ax)
        {
          VAR_0 = VAR_1;
    }
    }
}
