
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int64 ;
typedef TYPE_3__* WindowObject ;
struct TYPE_12__ {TYPE_5__* ps_ExprContext; } ;
struct TYPE_13__ {TYPE_1__ ps; } ;
struct TYPE_15__ {int spooled_rows; int currentpos; int * temp_slot_1; TYPE_2__ ss; } ;
typedef TYPE_4__ WindowAggState ;
typedef int TupleTableSlot ;
struct TYPE_16__ {int * ecxt_outertuple; } ;
struct TYPE_14__ {int argstates; TYPE_4__* winstate; } ;
typedef int ExprState ;
typedef TYPE_5__ ExprContext ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_5__*,int*) ;



 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_3__*,int,int *) ;

Datum
FUNC_8(WindowObject VAR_1, int VAR_2,
       int VAR_3, int VAR_4, bool VAR_5,
       bool *VAR_6, bool *VAR_7)
{
 WindowAggState *VAR_8;
 ExprContext *VAR_9;
 TupleTableSlot *VAR_10;
 bool VAR_11;
 int64 VAR_12;

 FUNC_0(FUNC_3(VAR_1));
 VAR_8 = VAR_1->winstate;
 VAR_9 = VAR_8->ss.ps.ps_ExprContext;
 VAR_10 = VAR_8->temp_slot_1;

 switch (VAR_4)
 {
  case 130:
   VAR_12 = VAR_8->currentpos + VAR_3;
   break;
  case 129:
   VAR_12 = VAR_3;
   break;
  case 128:
   FUNC_6(VAR_8, -1);
   VAR_12 = VAR_8->spooled_rows - 1 + VAR_3;
   break;
  default:
   FUNC_4(VAR_0, "unrecognized window seek type: %d", VAR_4);
   VAR_12 = 0;
   break;
 }

 VAR_11 = FUNC_7(VAR_1, VAR_12, VAR_10);

 if (!VAR_11)
 {
  if (VAR_7)
   *VAR_7 = 1;
  *VAR_6 = 1;
  return (Datum) 0;
 }
 else
 {
  if (VAR_7)
   *VAR_7 = 0;
  if (VAR_5)
   FUNC_2(VAR_1, VAR_12);
  VAR_9->ecxt_outertuple = VAR_10;
  return FUNC_1((ExprState *) FUNC_5(VAR_1->argstates, VAR_2),
       VAR_9, VAR_6);
 }
}
