
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {int ax; int bx; } ;
struct TYPE_6__ {TYPE_1__ w; } ;
typedef TYPE_2__ REGS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static VOID
FUNC_1(BOOLEAN VAR_0)
{
  REGS VAR_1;
  VAR_1.w.ax = 0x1003;
  VAR_1.w.bx = VAR_0 ? 0x0001 : 0x0000;
  FUNC_0(0x10, &VAR_1, &VAR_1);
}
