
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int custom_relids; } ;
struct TYPE_12__ {int fs_relids; } ;
struct TYPE_11__ {int exclRelRTI; int nominalRelation; } ;
struct TYPE_10__ {int * plan; } ;
struct TYPE_9__ {int scanrelid; } ;
typedef TYPE_1__ Scan ;
typedef TYPE_2__ PlanState ;
typedef int Plan ;
typedef TYPE_3__ ModifyTable ;
typedef TYPE_4__ ForeignScan ;
typedef TYPE_5__ CustomScan ;
typedef int Bitmapset ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int (*) (TYPE_2__*,int **),int **) ;

__attribute__((used)) static bool
FUNC_4(PlanState *VAR_0, Bitmapset **VAR_1)
{
 Plan *VAR_2 = VAR_0->plan;

 switch (FUNC_2(VAR_2))
 {
  case 133:
  case 134:
  case 137:
  case 138:
  case 143:
  case 130:
  case 132:
  case 139:
  case 131:
  case 129:
  case 142:
  case 135:
  case 128:
   *VAR_1 = FUNC_0(*VAR_1,
          ((Scan *) VAR_2)->scanrelid);
   break;
  case 140:
   *VAR_1 = FUNC_1(*VAR_1,
           ((ForeignScan *) VAR_2)->fs_relids);
   break;
  case 141:
   *VAR_1 = FUNC_1(*VAR_1,
           ((CustomScan *) VAR_2)->custom_relids);
   break;
  case 136:
   *VAR_1 = FUNC_0(*VAR_1,
          ((ModifyTable *) VAR_2)->nominalRelation);
   if (((ModifyTable *) VAR_2)->exclRelRTI)
    *VAR_1 = FUNC_0(*VAR_1,
           ((ModifyTable *) VAR_2)->exclRelRTI);
   break;
  default:
   break;
 }

 return FUNC_3(VAR_0, FUNC_4, VAR_1);
}
