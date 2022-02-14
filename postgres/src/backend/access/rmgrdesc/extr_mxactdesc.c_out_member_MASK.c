
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int xid; } ;
typedef int StringInfo ;
typedef TYPE_1__ MultiXactMember ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(StringInfo VAR_0, MultiXactMember *VAR_1)
{
 FUNC_0(VAR_0, "%u ", VAR_1->xid);
 switch (VAR_1->status)
 {
  case 133:
   FUNC_1(VAR_0, "(keysh) ");
   break;
  case 131:
   FUNC_1(VAR_0, "(sh) ");
   break;
  case 132:
   FUNC_1(VAR_0, "(fornokeyupd) ");
   break;
  case 130:
   FUNC_1(VAR_0, "(forupd) ");
   break;
  case 129:
   FUNC_1(VAR_0, "(nokeyupd) ");
   break;
  case 128:
   FUNC_1(VAR_0, "(upd) ");
   break;
  default:
   FUNC_1(VAR_0, "(unk) ");
   break;
 }
}
