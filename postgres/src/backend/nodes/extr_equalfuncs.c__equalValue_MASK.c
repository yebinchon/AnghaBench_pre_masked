
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
typedef TYPE_1__ Value ;
struct TYPE_6__ {int str; int ival; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;





 int FUNC_2 (int ,char*,int) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static bool
FUNC_3(const Value *VAR_3, const Value *VAR_4)
{
 FUNC_0(VAR_1);

 switch (VAR_3->type)
 {
  case 130:
   FUNC_0(VAR_2.ival);
   break;
  case 131:
  case 128:
  case 132:
   FUNC_1(VAR_2.str);
   break;
  case 129:

   break;
  default:
   FUNC_2(VAR_0, "unrecognized node type: %d", (int) VAR_3->type);
   break;
 }

 return 1;
}
