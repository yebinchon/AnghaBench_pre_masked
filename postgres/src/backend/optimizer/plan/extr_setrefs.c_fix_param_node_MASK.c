
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ paramkind; int paramid; } ;
struct TYPE_7__ {int * multiexpr_params; } ;
typedef TYPE_1__ PlannerInfo ;
typedef TYPE_2__ Param ;
typedef int Node ;
typedef int List ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,int) ;

__attribute__((used)) static Node *
FUNC_4(PlannerInfo *VAR_2, Param *VAR_3)
{
 if (VAR_3->paramkind == VAR_1)
 {
  int VAR_4 = VAR_3->paramid >> 16;
  int VAR_5 = VAR_3->paramid & 0xFFFF;
  List *VAR_6;

  if (VAR_4 <= 0 ||
   VAR_4 > FUNC_2(VAR_2->multiexpr_params))
   FUNC_1(VAR_0, "unexpected PARAM_MULTIEXPR ID: %d", VAR_3->paramid);
  VAR_6 = (List *) FUNC_3(VAR_2->multiexpr_params, VAR_4 - 1);
  if (VAR_5 <= 0 || VAR_5 > FUNC_2(VAR_6))
   FUNC_1(VAR_0, "unexpected PARAM_MULTIEXPR ID: %d", VAR_3->paramid);
  return FUNC_0(FUNC_3(VAR_6, VAR_5 - 1));
 }
 return (Node *) FUNC_0(VAR_3);
}
