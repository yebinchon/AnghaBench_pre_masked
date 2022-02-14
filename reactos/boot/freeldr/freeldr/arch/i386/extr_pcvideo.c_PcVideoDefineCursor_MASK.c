
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef void* UCHAR ;
struct TYPE_5__ {int ah; int al; void* cl; void* ch; } ;
struct TYPE_6__ {TYPE_1__ b; } ;
typedef TYPE_2__ REGS ;


 int FUNC_0 (int,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static VOID
FUNC_1(UCHAR VAR_0, UCHAR VAR_1)
{
  REGS VAR_2;
  VAR_2.b.ah = 0x01;
  VAR_2.b.al = 0x03;
  VAR_2.b.ch = VAR_0;
  VAR_2.b.cl = VAR_1;
  FUNC_0(0x10, &VAR_2, &VAR_2);
}
