
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int consider_parallel; int fdwroutine; int useridiscurrent; int userid; int serverid; int * reltarget; int reloptkind; int * relids; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int PathTarget ;
typedef int Node ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static RelOptInfo *
FUNC_3(PlannerInfo *VAR_2, RelOptInfo *VAR_3,
      PathTarget *VAR_4, bool VAR_5,
      Node *VAR_6)
{
 RelOptInfo *VAR_7;

 if (FUNC_0(VAR_3))
 {
  VAR_7 = FUNC_1(VAR_2, VAR_1,
           VAR_3->relids);
  VAR_7->reloptkind = VAR_0;
 }
 else
 {





  VAR_7 = FUNC_1(VAR_2, VAR_1, ((void*)0));
 }


 VAR_7->reltarget = VAR_4;






 if (VAR_3->consider_parallel && VAR_5 &&
  FUNC_2(VAR_2, (Node *) VAR_6))
  VAR_7->consider_parallel = 1;




 VAR_7->serverid = VAR_3->serverid;
 VAR_7->userid = VAR_3->userid;
 VAR_7->useridiscurrent = VAR_3->useridiscurrent;
 VAR_7->fdwroutine = VAR_3->fdwroutine;

 return VAR_7;
}
