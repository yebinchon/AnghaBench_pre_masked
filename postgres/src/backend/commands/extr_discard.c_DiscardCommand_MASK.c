
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int target; } ;
typedef TYPE_1__ DiscardStmt ;






 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int) ;

void
FUNC_5(DiscardStmt *VAR_1, bool VAR_2)
{
 switch (VAR_1->target)
 {
  case 131:
   FUNC_0(VAR_2);
   break;

  case 130:
   FUNC_1();
   break;

  case 129:
   FUNC_2();
   break;

  case 128:
   FUNC_3();
   break;

  default:
   FUNC_4(VAR_0, "unrecognized DISCARD target: %d", VAR_1->target);
 }
}
