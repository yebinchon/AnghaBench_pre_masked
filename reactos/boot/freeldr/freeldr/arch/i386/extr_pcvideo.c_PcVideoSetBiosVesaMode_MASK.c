
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_5__ {int ax; int bx; } ;
struct TYPE_6__ {TYPE_1__ w; } ;
typedef TYPE_2__ REGS ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_2__*,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static BOOLEAN
FUNC_1(USHORT VAR_2)
{
  REGS VAR_3;
  VAR_3.w.ax = 0x4F02;
  VAR_3.w.bx = VAR_2;
  FUNC_0(0x10, &VAR_3, &VAR_3);

  if (0x004F != VAR_3.w.ax)
    {
      return VAR_0;
    }

  return VAR_1;
}
