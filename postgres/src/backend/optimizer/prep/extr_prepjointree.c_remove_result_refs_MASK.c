
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ parse; TYPE_1__* glob; } ;
struct TYPE_4__ {scalar_t__ lastPHId; } ;
typedef int Relids ;
typedef TYPE_2__ PlannerInfo ;
typedef int Node ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ) ;

__attribute__((used)) static void
FUNC_4(PlannerInfo *VAR_0, int VAR_1, Node *VAR_2)
{


 if (VAR_0->glob->lastPHId != 0)
 {
  Relids VAR_3;

  VAR_3 = FUNC_2(VAR_2, 0);
  FUNC_0(!FUNC_1(VAR_3));
  FUNC_3((Node *) VAR_0->parse, VAR_1, VAR_3);
 }





}
