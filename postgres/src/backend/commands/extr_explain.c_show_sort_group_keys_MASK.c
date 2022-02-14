
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ expr; } ;
typedef TYPE_1__ TargetEntry ;
struct TYPE_18__ {scalar_t__ verbose; int rtable; int deparse_cxt; } ;
struct TYPE_17__ {int targetlist; } ;
struct TYPE_16__ {TYPE_4__* plan; } ;
struct TYPE_15__ {int data; } ;
typedef TYPE_2__ StringInfoData ;
typedef TYPE_3__ PlanState ;
typedef TYPE_4__ Plan ;
typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef TYPE_5__ ExplainState ;
typedef int AttrNumber ;


 int VAR_0 ;
 int FUNC_0 (char const*,int *,TYPE_5__*) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 char* FUNC_2 (int *,int *,int,int) ;
 int FUNC_3 (int ,char*,int ) ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int * FUNC_10 (int ,int *,int *) ;
 int FUNC_11 (TYPE_2__*,int *,int ,int ,int) ;

__attribute__((used)) static void
FUNC_12(PlanState *VAR_2, const char *VAR_3,
      int VAR_4, AttrNumber *VAR_5,
      Oid *VAR_6, Oid *VAR_7, bool *VAR_8,
      List *VAR_9, ExplainState *VAR_10)
{
 Plan *VAR_11 = VAR_2->plan;
 List *VAR_12;
 List *VAR_13 = VAR_1;
 StringInfoData VAR_14;
 bool VAR_15;
 int VAR_16;

 if (VAR_4 <= 0)
  return;

 FUNC_5(&VAR_14);


 VAR_12 = FUNC_10(VAR_10->deparse_cxt,
           (Node *) VAR_2,
           VAR_9);
 VAR_15 = (FUNC_7(VAR_10->rtable) > 1 || VAR_10->verbose);

 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++)
 {

  AttrNumber VAR_17 = VAR_5[VAR_16];
  TargetEntry *VAR_18 = FUNC_4(VAR_11->targetlist,
              VAR_17);
  char *VAR_19;

  if (!VAR_18)
   FUNC_3(VAR_0, "no tlist entry for key %d", VAR_17);

  VAR_19 = FUNC_2((Node *) VAR_18->expr, VAR_12,
          VAR_15, 1);
  FUNC_9(&VAR_14);
  FUNC_1(&VAR_14, VAR_19);

  if (VAR_6 != ((void*)0))
   FUNC_11(&VAR_14,
           (Node *) VAR_18->expr,
           VAR_6[VAR_16],
           VAR_7[VAR_16],
           VAR_8[VAR_16]);

  VAR_13 = FUNC_6(VAR_13, FUNC_8(VAR_14.data));
 }

 FUNC_0(VAR_3, VAR_13, VAR_10);
}
