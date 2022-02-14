
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ verbose; } ;
struct TYPE_7__ {int plan; } ;
typedef TYPE_1__ PlanState ;
typedef int List ;
typedef TYPE_2__ ExplainState ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char const*,TYPE_1__*,int *,int,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(List *VAR_1, const char *VAR_2,
      PlanState *VAR_3, List *VAR_4,
      ExplainState *VAR_5)
{
 bool VAR_6;

 VAR_6 = (FUNC_0(VAR_3->plan, VAR_0) ||VAR_5->verbose);
 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6, VAR_5);
}
