
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {int lVal; int iVal; int cVal; } ;
struct TYPE_7__ {int vt; TYPE_1__ n3; } ;
struct TYPE_8__ {TYPE_2__ n2; } ;
struct TYPE_9__ {TYPE_3__ n1; } ;
typedef TYPE_4__ VARIANT ;
typedef int UINT ;
typedef int INT ;
 int FUNC_0 (char*,int) ;

VOID
FUNC_1(VARIANT *VAR_0)
{

 switch (VAR_0->n1.n2.vt)
 {
 case 135:
  FUNC_0("%d", (INT)VAR_0->n1.n2.n3.cVal);
  break;
 case 131:
  FUNC_0("0x%x", (UINT)VAR_0->n1.n2.n3.cVal);
  break;
 case 134:
  FUNC_0("%d", (UINT)VAR_0->n1.n2.n3.iVal);
  break;
 case 130:
  FUNC_0("0x%x", (UINT)VAR_0->n1.n2.n3.iVal);
  break;
 case 132:
 case 133:
  FUNC_0("%d", (UINT)VAR_0->n1.n2.n3.lVal);
  break;
 case 128:
 case 129:
  FUNC_0("0x%x", (UINT)VAR_0->n1.n2.n3.lVal);
  break;
 }
}
