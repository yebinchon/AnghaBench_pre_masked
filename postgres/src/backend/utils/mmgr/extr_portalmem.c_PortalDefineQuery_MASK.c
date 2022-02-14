
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; char const* prepStmtName; char const* sourceText; char const* commandTag; int * cplan; int * stmts; } ;
typedef TYPE_1__* Portal ;
typedef int List ;
typedef int CachedPlan ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(Portal VAR_3,
      const char *VAR_4,
      const char *VAR_5,
      const char *VAR_6,
      List *VAR_7,
      CachedPlan *VAR_8)
{
 FUNC_0(FUNC_2(VAR_3));
 FUNC_1(VAR_3->status == VAR_2);

 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(VAR_6 != ((void*)0) || VAR_7 == VAR_0);

 VAR_3->prepStmtName = VAR_4;
 VAR_3->sourceText = VAR_5;
 VAR_3->commandTag = VAR_6;
 VAR_3->stmts = VAR_7;
 VAR_3->cplan = VAR_8;
 VAR_3->status = VAR_1;
}
