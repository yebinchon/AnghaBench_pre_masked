
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int objtype; } ;
typedef TYPE_1__ InternalGrant ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_13(InternalGrant *VAR_1)
{
 switch (VAR_1->objtype)
 {
  case 130:
  case 131:
   FUNC_9(VAR_1);
   break;
  case 141:
   FUNC_2(VAR_1);
   break;
  case 140:
  case 128:
   FUNC_11(VAR_1);
   break;
  case 139:
   FUNC_3(VAR_1);
   break;
  case 138:
   FUNC_4(VAR_1);
   break;
  case 137:
  case 134:
  case 133:
   FUNC_5(VAR_1);
   break;
  case 136:
   FUNC_6(VAR_1);
   break;
  case 135:
   FUNC_7(VAR_1);
   break;
  case 132:
   FUNC_8(VAR_1);
   break;
  case 129:
   FUNC_10(VAR_1);
   break;
  default:
   FUNC_12(VAR_0, "unrecognized GrantStmt.objtype: %d",
     (int) VAR_1->objtype);
 }







 if (FUNC_1(VAR_1->objtype))
  FUNC_0(VAR_1);
}
