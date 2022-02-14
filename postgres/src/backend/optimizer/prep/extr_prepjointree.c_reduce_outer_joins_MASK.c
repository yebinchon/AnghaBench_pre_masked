
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int contains_outer; } ;
typedef TYPE_2__ reduce_outer_joins_state ;
struct TYPE_10__ {TYPE_1__* parse; } ;
struct TYPE_8__ {scalar_t__ jointree; } ;
typedef TYPE_3__ PlannerInfo ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_3__*,int *,int ,int ) ;

void
FUNC_3(PlannerInfo *VAR_2)
{
 reduce_outer_joins_state *VAR_3;
 VAR_3 = FUNC_1((Node *) VAR_2->parse->jointree);


 if (VAR_3 == ((void*)0) || !VAR_3->contains_outer)
  FUNC_0(VAR_0, "so where are the outer joins?");

 FUNC_2((Node *) VAR_2->parse->jointree,
        VAR_3, VAR_2, ((void*)0), VAR_1, VAR_1);
}
