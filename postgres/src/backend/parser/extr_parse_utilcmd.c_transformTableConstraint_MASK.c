
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int contype; int location; } ;
struct TYPE_6__ {void* fkconstraints; int pstate; int isforeign; void* ckconstraints; void* ixconstraints; int ispartitioned; } ;
typedef TYPE_1__ CreateStmtContext ;
typedef TYPE_2__ Constraint ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (void*,TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(CreateStmtContext *VAR_2, Constraint *VAR_3)
{
 switch (VAR_3->contype)
 {
  case 129:
   if (VAR_2->isforeign)
    FUNC_1(VAR_1,
      (FUNC_2(VAR_0),
       FUNC_3("primary key constraints are not supported on foreign tables"),
       FUNC_5(VAR_2->pstate,
           VAR_3->location)));
   VAR_2->ixconstraints = FUNC_4(VAR_2->ixconstraints, VAR_3);
   break;

  case 128:
   if (VAR_2->isforeign)
    FUNC_1(VAR_1,
      (FUNC_2(VAR_0),
       FUNC_3("unique constraints are not supported on foreign tables"),
       FUNC_5(VAR_2->pstate,
           VAR_3->location)));
   VAR_2->ixconstraints = FUNC_4(VAR_2->ixconstraints, VAR_3);
   break;

  case 133:
   if (VAR_2->isforeign)
    FUNC_1(VAR_1,
      (FUNC_2(VAR_0),
       FUNC_3("exclusion constraints are not supported on foreign tables"),
       FUNC_5(VAR_2->pstate,
           VAR_3->location)));
   if (VAR_2->ispartitioned)
    FUNC_1(VAR_1,
      (FUNC_2(VAR_0),
       FUNC_3("exclusion constraints are not supported on partitioned tables"),
       FUNC_5(VAR_2->pstate,
           VAR_3->location)));
   VAR_2->ixconstraints = FUNC_4(VAR_2->ixconstraints, VAR_3);
   break;

  case 135:
   VAR_2->ckconstraints = FUNC_4(VAR_2->ckconstraints, VAR_3);
   break;

  case 132:
   if (VAR_2->isforeign)
    FUNC_1(VAR_1,
      (FUNC_2(VAR_0),
       FUNC_3("foreign key constraints are not supported on foreign tables"),
       FUNC_5(VAR_2->pstate,
           VAR_3->location)));
   VAR_2->fkconstraints = FUNC_4(VAR_2->fkconstraints, VAR_3);
   break;

  case 130:
  case 131:
  case 134:
  case 139:
  case 136:
  case 138:
  case 137:
   FUNC_0(VAR_1, "invalid context for constraint type %d",
     VAR_3->contype);
   break;

  default:
   FUNC_0(VAR_1, "unrecognized constraint type: %d",
     VAR_3->contype);
   break;
 }
}
