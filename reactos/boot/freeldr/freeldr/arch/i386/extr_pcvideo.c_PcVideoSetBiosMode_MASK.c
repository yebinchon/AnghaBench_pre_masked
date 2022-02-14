
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef int UCHAR ;
struct TYPE_5__ {int ah; int al; } ;
struct TYPE_6__ {TYPE_1__ b; } ;
typedef TYPE_2__ REGS ;


 int FUNC_0 (int,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static VOID FUNC_1(UCHAR VAR_0)
{
  REGS VAR_1;
  VAR_1.b.ah = 0x00;
  VAR_1.b.al = VAR_0;
  FUNC_0(0x10, &VAR_1, &VAR_1);
}
