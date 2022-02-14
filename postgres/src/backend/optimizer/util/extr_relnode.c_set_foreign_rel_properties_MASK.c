
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ serverid; scalar_t__ userid; int useridiscurrent; int fdwroutine; } ;
typedef TYPE_1__ RelOptInfo ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(RelOptInfo *VAR_0, RelOptInfo *VAR_1,
         RelOptInfo *VAR_2)
{
 if (FUNC_1(VAR_1->serverid) &&
  VAR_2->serverid == VAR_1->serverid)
 {
  if (VAR_2->userid == VAR_1->userid)
  {
   VAR_0->serverid = VAR_1->serverid;
   VAR_0->userid = VAR_1->userid;
   VAR_0->useridiscurrent = VAR_1->useridiscurrent || VAR_2->useridiscurrent;
   VAR_0->fdwroutine = VAR_1->fdwroutine;
  }
  else if (!FUNC_1(VAR_2->userid) &&
     VAR_1->userid == FUNC_0())
  {
   VAR_0->serverid = VAR_1->serverid;
   VAR_0->userid = VAR_1->userid;
   VAR_0->useridiscurrent = 1;
   VAR_0->fdwroutine = VAR_1->fdwroutine;
  }
  else if (!FUNC_1(VAR_1->userid) &&
     VAR_2->userid == FUNC_0())
  {
   VAR_0->serverid = VAR_1->serverid;
   VAR_0->userid = VAR_2->userid;
   VAR_0->useridiscurrent = 1;
   VAR_0->fdwroutine = VAR_1->fdwroutine;
  }
 }
}
