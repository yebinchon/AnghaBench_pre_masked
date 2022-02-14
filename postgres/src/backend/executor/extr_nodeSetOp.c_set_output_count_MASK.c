
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int cmd; } ;
struct TYPE_7__ {scalar_t__ plan; } ;
struct TYPE_9__ {int numOutput; TYPE_1__ ps; } ;
struct TYPE_8__ {int numLeft; int numRight; } ;
typedef TYPE_2__* SetOpStatePerGroup ;
typedef TYPE_3__ SetOpState ;
typedef TYPE_4__ SetOp ;


 int VAR_0 ;




 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_1(SetOpState *VAR_1, SetOpStatePerGroup VAR_2)
{
 SetOp *VAR_3 = (SetOp *) VAR_1->ps.plan;

 switch (VAR_3->cmd)
 {
  case 129:
   if (VAR_2->numLeft > 0 && VAR_2->numRight > 0)
    VAR_1->numOutput = 1;
   else
    VAR_1->numOutput = 0;
   break;
  case 128:
   VAR_1->numOutput =
    (VAR_2->numLeft < VAR_2->numRight) ?
    VAR_2->numLeft : VAR_2->numRight;
   break;
  case 131:
   if (VAR_2->numLeft > 0 && VAR_2->numRight == 0)
    VAR_1->numOutput = 1;
   else
    VAR_1->numOutput = 0;
   break;
  case 130:
   VAR_1->numOutput =
    (VAR_2->numLeft < VAR_2->numRight) ?
    0 : (VAR_2->numLeft - VAR_2->numRight);
   break;
  default:
   FUNC_0(VAR_0, "unrecognized set op: %d", (int) VAR_3->cmd);
   break;
 }
}
