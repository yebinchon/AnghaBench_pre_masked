
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int state; } ;
struct TYPE_11__ {TYPE_2__** mt_plans; int operation; TYPE_1__ ps; } ;
struct TYPE_10__ {int * ri_FdwState; int ri_RangeTableIndex; } ;
struct TYPE_9__ {int plan; } ;
typedef TYPE_3__ ResultRelInfo ;
typedef int RangeTblEntry ;
typedef int PgFdwModifyState ;
typedef TYPE_4__ ModifyTableState ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int *,TYPE_3__*,int ,int ,char*,int *,int,int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 char* FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(ModifyTableState *VAR_5,
         ResultRelInfo *VAR_6,
         List *VAR_7,
         int VAR_8,
         int VAR_9)
{
 PgFdwModifyState *VAR_10;
 char *VAR_11;
 List *VAR_12;
 bool VAR_13;
 List *VAR_14;
 RangeTblEntry *VAR_15;





 if (VAR_9 & VAR_0)
  return;


 VAR_11 = FUNC_4(FUNC_3(VAR_7,
       VAR_4));
 VAR_12 = (List *) FUNC_3(VAR_7,
          VAR_3);
 VAR_13 = FUNC_2(FUNC_3(VAR_7,
         VAR_1));
 VAR_14 = (List *) FUNC_3(VAR_7,
          VAR_2);


 VAR_15 = FUNC_1(VAR_6->ri_RangeTableIndex,
      VAR_5->ps.state);


 VAR_10 = FUNC_0(VAR_5->ps.state,
         VAR_15,
         VAR_6,
         VAR_5->operation,
         VAR_5->mt_plans[VAR_8]->plan,
         VAR_11,
         VAR_12,
         VAR_13,
         VAR_14);

 VAR_6->ri_FdwState = VAR_10;
}
