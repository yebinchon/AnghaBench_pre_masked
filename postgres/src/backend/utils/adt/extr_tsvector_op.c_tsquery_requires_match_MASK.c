
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int oper; int left; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ qoperator; } ;
typedef TYPE_2__ QueryItem ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;

bool
FUNC_2(QueryItem *VAR_2)
{

 FUNC_0();

 if (VAR_2->type == VAR_1)
  return 1;

 switch (VAR_2->qoperator.oper)
 {
  case 130:






   return 0;

  case 128:




  case 131:

   if (FUNC_2(VAR_2 + VAR_2->qoperator.left))
    return 1;
   else
    return FUNC_2(VAR_2 + 1);

  case 129:

   if (FUNC_2(VAR_2 + VAR_2->qoperator.left))
    return FUNC_2(VAR_2 + 1);
   else
    return 0;

  default:
   FUNC_1(VAR_0, "unrecognized operator: %d", VAR_2->qoperator.oper);
 }


 return 0;
}
