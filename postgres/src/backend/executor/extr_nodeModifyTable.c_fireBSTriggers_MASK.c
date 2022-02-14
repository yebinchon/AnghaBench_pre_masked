
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int onConflictAction; } ;
struct TYPE_5__ {int state; scalar_t__ plan; } ;
struct TYPE_6__ {int operation; TYPE_1__ ps; int * rootResultRelInfo; int * resultRelInfo; } ;
typedef int ResultRelInfo ;
typedef TYPE_2__ ModifyTableState ;
typedef TYPE_3__ ModifyTable ;





 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(ModifyTableState *VAR_2)
{
 ModifyTable *VAR_3 = (ModifyTable *) VAR_2->ps.plan;
 ResultRelInfo *VAR_4 = VAR_2->resultRelInfo;






 if (VAR_2->rootResultRelInfo != ((void*)0))
  VAR_4 = VAR_2->rootResultRelInfo;

 switch (VAR_2->operation)
 {
  case 129:
   FUNC_1(VAR_2->ps.state, VAR_4);
   if (VAR_3->onConflictAction == VAR_1)
    FUNC_2(VAR_2->ps.state,
          VAR_4);
   break;
  case 128:
   FUNC_2(VAR_2->ps.state, VAR_4);
   break;
  case 130:
   FUNC_0(VAR_2->ps.state, VAR_4);
   break;
  default:
   FUNC_3(VAR_0, "unknown operation");
   break;
 }
}
