
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef void* UCHAR ;
struct TYPE_5__ {int ah; int bh; void* dl; void* dh; } ;
struct TYPE_6__ {TYPE_1__ b; } ;
typedef TYPE_2__ REGS ;


 int FUNC_0 (int,TYPE_2__*,TYPE_2__*) ;

VOID
FUNC_1(UCHAR VAR_0, UCHAR VAR_1)
{
  REGS VAR_2;
  VAR_2.b.ah = 0x02;
  VAR_2.b.bh = 0x00;
  VAR_2.b.dh = VAR_1;
  VAR_2.b.dl = VAR_0;
  FUNC_0(0x10, &VAR_2, &VAR_2);
}
