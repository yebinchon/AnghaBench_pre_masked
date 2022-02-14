
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* parse; TYPE_1__* glob; } ;
struct TYPE_7__ {int * jointree; } ;
struct TYPE_6__ {scalar_t__ lastPHId; } ;
typedef TYPE_3__ PlannerInfo ;
typedef int Node ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_3__*,int *) ;

void
FUNC_3(PlannerInfo *VAR_1)
{

 if (VAR_1->glob->lastPHId != 0)
 {

  FUNC_0(VAR_1->parse->jointree != ((void*)0) &&
      FUNC_1(VAR_1->parse->jointree, VAR_0));
  FUNC_2(VAR_1, (Node *) VAR_1->parse->jointree);
 }
}
