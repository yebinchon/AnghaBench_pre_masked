
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* rel; } ;
typedef TYPE_2__ VariableStatData ;
struct TYPE_10__ {int syn_lefthand; int syn_righthand; } ;
struct TYPE_8__ {int relids; } ;
typedef TYPE_3__ SpecialJoinInfo ;
typedef int PlannerInfo ;
typedef int Node ;
typedef int List ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

void
FUNC_6(PlannerInfo *VAR_1, List *VAR_2, SpecialJoinInfo *VAR_3,
       VariableStatData *VAR_4, VariableStatData *VAR_5,
       bool *VAR_6)
{
 Node *VAR_7,
      *VAR_8;

 if (FUNC_4(VAR_2) != 2)
  FUNC_1(VAR_0, "join operator should take two arguments");

 VAR_7 = (Node *) FUNC_3(VAR_2);
 VAR_8 = (Node *) FUNC_5(VAR_2);

 FUNC_2(VAR_1, VAR_7, 0, VAR_4);
 FUNC_2(VAR_1, VAR_8, 0, VAR_5);

 if (VAR_4->rel &&
  FUNC_0(VAR_4->rel->relids, VAR_3->syn_righthand))
  *VAR_6 = 1;
 else if (VAR_5->rel &&
    FUNC_0(VAR_5->rel->relids, VAR_3->syn_lefthand))
  *VAR_6 = 1;
 else
  *VAR_6 = 0;
}
