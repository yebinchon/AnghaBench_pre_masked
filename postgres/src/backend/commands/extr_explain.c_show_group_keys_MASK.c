
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int grpColIdx; int numCols; } ;
struct TYPE_8__ {scalar_t__ plan; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;
struct TYPE_10__ {TYPE_2__ ss; } ;
typedef int List ;
typedef TYPE_3__ GroupState ;
typedef TYPE_4__ Group ;
typedef int ExplainState ;


 int * FUNC_0 (TYPE_3__*,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char*,int ,int ,int *,int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_4(GroupState *VAR_0, List *VAR_1,
    ExplainState *VAR_2)
{
 Group *VAR_3 = (Group *) VAR_0->ss.ps.plan;


 VAR_1 = FUNC_0(VAR_0, VAR_1);
 FUNC_3(FUNC_2(VAR_0), "Group Key",
       VAR_3->numCols, VAR_3->grpColIdx,
       ((void*)0), ((void*)0), ((void*)0),
       VAR_1, VAR_2);
 VAR_1 = FUNC_1(VAR_1);
}
