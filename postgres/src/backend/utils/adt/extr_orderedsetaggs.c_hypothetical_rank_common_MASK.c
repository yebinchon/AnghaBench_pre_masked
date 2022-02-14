
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_10__ {int* tts_isnull; int * tts_values; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_11__ {int number_of_rows; int sort_done; int sortstate; TYPE_1__* qstate; } ;
struct TYPE_9__ {TYPE_2__* tupslot; int tupdesc; } ;
typedef TYPE_3__ OSAPerGroupState ;
typedef int FunctionCallInfo ;
typedef int Datum ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (TYPE_2__*,int,int*) ;
 scalar_t__ FUNC_14 (int ,int,int,TYPE_2__*,int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,TYPE_2__*) ;

__attribute__((used)) static int64
FUNC_17(FunctionCallInfo VAR_2, int VAR_3,
       int64 *VAR_4)
{
 int VAR_5 = FUNC_10() - 1;
 int64 VAR_6 = 1;
 OSAPerGroupState *VAR_7;
 TupleTableSlot *VAR_8;
 int VAR_9;

 FUNC_1(FUNC_0(VAR_2, ((void*)0)) == VAR_0);


 if (FUNC_7(0))
 {
  *VAR_4 = 0;
  return 1;
 }

 VAR_7 = (OSAPerGroupState *) FUNC_9(0);
 *VAR_4 = VAR_7->number_of_rows;


 if (VAR_5 % 2 != 0)
  FUNC_11(VAR_1, "wrong number of arguments in hypothetical-set function");
 VAR_5 /= 2;

 FUNC_12(VAR_2, VAR_5, VAR_7->qstate->tupdesc);


 FUNC_1(!VAR_7->sort_done);


 VAR_8 = VAR_7->qstate->tupslot;
 FUNC_4(VAR_8);
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
 {
  VAR_8->tts_values[VAR_9] = FUNC_8(VAR_9 + 1);
  VAR_8->tts_isnull[VAR_9] = FUNC_7(VAR_9 + 1);
 }
 VAR_8->tts_values[VAR_9] = FUNC_6(VAR_3);
 VAR_8->tts_isnull[VAR_9] = 0;
 FUNC_5(VAR_8);

 FUNC_16(VAR_7->sortstate, VAR_8);


 FUNC_15(VAR_7->sortstate);
 VAR_7->sort_done = 1;


 while (FUNC_14(VAR_7->sortstate, 1, 1, VAR_8, ((void*)0)))
 {
  bool VAR_10;
  Datum VAR_11 = FUNC_13(VAR_8, VAR_5 + 1, &VAR_10);

  if (!VAR_10 && FUNC_3(VAR_11) != 0)
   break;

  VAR_6++;

  FUNC_2();
 }

 FUNC_4(VAR_8);

 return VAR_6;
}
