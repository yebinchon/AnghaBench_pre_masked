
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ int64 ;
typedef TYPE_3__* WindowObject ;
struct TYPE_15__ {TYPE_5__* ps_ExprContext; } ;
struct TYPE_16__ {TYPE_1__ ps; } ;
struct TYPE_18__ {int frameOptions; scalar_t__ frameheadpos; scalar_t__ groupheadpos; scalar_t__ currentpos; scalar_t__ frametailpos; scalar_t__ grouptailpos; int * temp_slot_1; TYPE_2__ ss; } ;
typedef TYPE_4__ WindowAggState ;
typedef int TupleTableSlot ;
struct TYPE_19__ {int * ecxt_outertuple; } ;
struct TYPE_17__ {int argstates; TYPE_4__* winstate; } ;
typedef int ExprState ;
typedef TYPE_5__ ExprContext ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_5__*,int*) ;



 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;



 int FUNC_4 (TYPE_3__*,scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (TYPE_4__*,scalar_t__,int *) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_3__*,scalar_t__,int *) ;

Datum
FUNC_13(WindowObject VAR_2, int VAR_3,
      int VAR_4, int VAR_5, bool VAR_6,
      bool *VAR_7, bool *VAR_8)
{
 WindowAggState *VAR_9;
 ExprContext *VAR_10;
 TupleTableSlot *VAR_11;
 int64 VAR_12;
 int64 VAR_13;

 FUNC_0(FUNC_5(VAR_2));
 VAR_9 = VAR_2->winstate;
 VAR_10 = VAR_9->ss.ps.ps_ExprContext;
 VAR_11 = VAR_9->temp_slot_1;

 switch (VAR_5)
 {
  case 130:
   FUNC_6(VAR_0, "WINDOW_SEEK_CURRENT is not supported for WinGetFuncArgInFrame");
   VAR_12 = VAR_13 = 0;
   break;
  case 129:

   if (VAR_4 < 0)
    goto out_of_frame;
   FUNC_9(VAR_9);
   VAR_12 = VAR_9->frameheadpos + VAR_4;
   VAR_13 = VAR_12;
   switch (VAR_9->frameOptions & VAR_1)
   {
    case 0:

     break;
    case 133:
     if (VAR_12 >= VAR_9->currentpos &&
      VAR_9->currentpos >= VAR_9->frameheadpos)
      VAR_12++;
     break;
    case 132:
     FUNC_11(VAR_9);
     if (VAR_12 >= VAR_9->groupheadpos &&
      VAR_9->grouptailpos > VAR_9->frameheadpos)
     {
      int64 VAR_14 = FUNC_2(VAR_9->groupheadpos,
                VAR_9->frameheadpos);

      VAR_12 += VAR_9->grouptailpos - VAR_14;
     }
     break;
    case 131:
     FUNC_11(VAR_9);
     if (VAR_12 >= VAR_9->groupheadpos &&
      VAR_9->grouptailpos > VAR_9->frameheadpos)
     {
      int64 VAR_15 = FUNC_2(VAR_9->groupheadpos,
                VAR_9->frameheadpos);

      if (VAR_12 == VAR_15)
       VAR_12 = VAR_9->currentpos;
      else
       VAR_12 += VAR_9->grouptailpos - VAR_15 - 1;
     }
     break;
    default:
     FUNC_6(VAR_0, "unrecognized frame option state: 0x%x",
       VAR_9->frameOptions);
     break;
   }
   break;
  case 128:

   if (VAR_4 > 0)
    goto out_of_frame;
   FUNC_10(VAR_9);
   VAR_12 = VAR_9->frametailpos - 1 + VAR_4;
   switch (VAR_9->frameOptions & VAR_1)
   {
    case 0:

     VAR_13 = VAR_12;
     break;
    case 133:
     if (VAR_12 <= VAR_9->currentpos &&
      VAR_9->currentpos < VAR_9->frametailpos)
      VAR_12--;
     FUNC_9(VAR_9);
     if (VAR_12 < VAR_9->frameheadpos)
      goto out_of_frame;
     VAR_13 = VAR_9->frameheadpos;
     break;
    case 132:
     FUNC_11(VAR_9);
     if (VAR_12 < VAR_9->grouptailpos &&
      VAR_9->groupheadpos < VAR_9->frametailpos)
     {
      int64 VAR_16 = FUNC_3(VAR_9->grouptailpos,
              VAR_9->frametailpos);

      VAR_12 -= VAR_16 - VAR_9->groupheadpos;
     }
     FUNC_9(VAR_9);
     if (VAR_12 < VAR_9->frameheadpos)
      goto out_of_frame;
     VAR_13 = VAR_9->frameheadpos;
     break;
    case 131:
     FUNC_11(VAR_9);
     if (VAR_12 < VAR_9->grouptailpos &&
      VAR_9->groupheadpos < VAR_9->frametailpos)
     {
      int64 VAR_17 = FUNC_3(VAR_9->grouptailpos,
              VAR_9->frametailpos);

      if (VAR_12 == VAR_17 - 1)
       VAR_12 = VAR_9->currentpos;
      else
       VAR_12 -= VAR_17 - 1 - VAR_9->groupheadpos;
     }
     FUNC_9(VAR_9);
     if (VAR_12 < VAR_9->frameheadpos)
      goto out_of_frame;
     VAR_13 = VAR_9->frameheadpos;
     break;
    default:
     FUNC_6(VAR_0, "unrecognized frame option state: 0x%x",
       VAR_9->frameOptions);
     VAR_13 = 0;
     break;
   }
   break;
  default:
   FUNC_6(VAR_0, "unrecognized window seek type: %d", VAR_5);
   VAR_12 = VAR_13 = 0;
   break;
 }

 if (!FUNC_12(VAR_2, VAR_12, VAR_11))
  goto out_of_frame;


 if (FUNC_8(VAR_9, VAR_12, VAR_11) <= 0)
  goto out_of_frame;

 if (VAR_8)
  *VAR_8 = 0;
 if (VAR_6)
  FUNC_4(VAR_2, VAR_13);
 VAR_10->ecxt_outertuple = VAR_11;
 return FUNC_1((ExprState *) FUNC_7(VAR_2->argstates, VAR_3),
      VAR_10, VAR_7);

out_of_frame:
 if (VAR_8)
  *VAR_8 = 1;
 *VAR_7 = 1;
 return (Datum) 0;
}
