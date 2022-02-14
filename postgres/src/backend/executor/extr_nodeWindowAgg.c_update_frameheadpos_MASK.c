
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_10__ {TYPE_1__* ps_ExprContext; scalar_t__ plan; } ;
struct TYPE_11__ {int ss_ScanTupleSlot; TYPE_2__ ps; } ;
struct TYPE_12__ {int frameOptions; int framehead_valid; scalar_t__ frameheadpos; scalar_t__ currentpos; scalar_t__ spooled_rows; scalar_t__ currentgroup; scalar_t__ frameheadgroup; int temp_slot_2; int framehead_slot; int buffer; int framehead_ptr; int startOffsetValue; int inRangeColl; int startInRangeFunc; scalar_t__ inRangeNullsFirst; TYPE_3__ ss; int inRangeAsc; } ;
typedef TYPE_4__ WindowAggState ;
struct TYPE_13__ {int ordNumCols; int* ordColIdx; } ;
typedef TYPE_5__ WindowAgg ;
struct TYPE_9__ {int ecxt_per_query_memory; } ;
typedef int MemoryContext ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int ,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,int,int*) ;
 int FUNC_12 (TYPE_4__*,scalar_t__) ;
 int FUNC_13 (int ,int,int,int ) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static void
FUNC_15(WindowAggState *VAR_8)
{
 WindowAgg *VAR_9 = (WindowAgg *) VAR_8->ss.ps.plan;
 int VAR_10 = VAR_8->frameOptions;
 MemoryContext VAR_11;

 if (VAR_8->framehead_valid)
  return;


 VAR_11 = FUNC_7(VAR_8->ss.ps.ps_ExprContext->ecxt_per_query_memory);

 if (VAR_10 & VAR_7)
 {

  VAR_8->frameheadpos = 0;
  VAR_8->framehead_valid = 1;
 }
 else if (VAR_10 & VAR_4)
 {
  if (VAR_10 & VAR_3)
  {

   VAR_8->frameheadpos = VAR_8->currentpos;
   VAR_8->framehead_valid = 1;
  }
  else if (VAR_10 & (VAR_2 | VAR_1))
  {

   if (VAR_9->ordNumCols == 0)
   {
    VAR_8->frameheadpos = 0;
    VAR_8->framehead_valid = 1;
    FUNC_7(VAR_11);
    return;
   }
   FUNC_14(VAR_8->buffer,
             VAR_8->framehead_ptr);
   if (VAR_8->frameheadpos == 0 &&
    FUNC_8(VAR_8->framehead_slot))
   {

    if (!FUNC_13(VAR_8->buffer, 1, 1,
            VAR_8->framehead_slot))
     FUNC_10(VAR_0, "unexpected end of tuplestore");
   }

   while (!FUNC_8(VAR_8->framehead_slot))
   {
    if (FUNC_9(VAR_8, VAR_8->framehead_slot,
         VAR_8->ss.ss_ScanTupleSlot))
     break;

    VAR_8->frameheadpos++;
    FUNC_12(VAR_8, VAR_8->frameheadpos);
    if (!FUNC_13(VAR_8->buffer, 1, 1,
            VAR_8->framehead_slot))
     break;
   }
   VAR_8->framehead_valid = 1;
  }
  else
   FUNC_0(0);
 }
 else if (VAR_10 & VAR_5)
 {
  if (VAR_10 & VAR_3)
  {

   int64 VAR_12 = FUNC_3(VAR_8->startOffsetValue);

   if (VAR_10 & VAR_6)
    VAR_12 = -VAR_12;

   VAR_8->frameheadpos = VAR_8->currentpos + VAR_12;

   if (VAR_8->frameheadpos < 0)
    VAR_8->frameheadpos = 0;
   else if (VAR_8->frameheadpos > VAR_8->currentpos + 1)
   {

    FUNC_12(VAR_8, VAR_8->frameheadpos - 1);
    if (VAR_8->frameheadpos > VAR_8->spooled_rows)
     VAR_8->frameheadpos = VAR_8->spooled_rows;
   }
   VAR_8->framehead_valid = 1;
  }
  else if (VAR_10 & VAR_2)
  {
   int VAR_13 = VAR_9->ordColIdx[0];
   bool VAR_14,
      VAR_15;


   FUNC_0(VAR_9->ordNumCols == 1);


   if (VAR_10 & VAR_6)
    VAR_14 = 1;
   else
    VAR_14 = 0;
   VAR_15 = 0;

   if (!VAR_8->inRangeAsc)
   {
    VAR_14 = !VAR_14;
    VAR_15 = 1;
   }

   FUNC_14(VAR_8->buffer,
             VAR_8->framehead_ptr);
   if (VAR_8->frameheadpos == 0 &&
    FUNC_8(VAR_8->framehead_slot))
   {

    if (!FUNC_13(VAR_8->buffer, 1, 1,
            VAR_8->framehead_slot))
     FUNC_10(VAR_0, "unexpected end of tuplestore");
   }

   while (!FUNC_8(VAR_8->framehead_slot))
   {
    Datum VAR_16,
       VAR_17;
    bool VAR_18,
       VAR_19;

    VAR_16 = FUNC_11(VAR_8->framehead_slot, VAR_13,
            &VAR_18);
    VAR_17 = FUNC_11(VAR_8->ss.ss_ScanTupleSlot, VAR_13,
            &VAR_19);
    if (VAR_18 || VAR_19)
    {

     if (VAR_8->inRangeNullsFirst)
     {

      if (!VAR_18 || VAR_19)
       break;
     }
     else
     {

      if (VAR_18 || !VAR_19)
       break;
     }
    }
    else
    {
     if (FUNC_2(FUNC_6(&VAR_8->startInRangeFunc,
                VAR_8->inRangeColl,
                VAR_16,
                VAR_17,
                VAR_8->startOffsetValue,
                FUNC_1(VAR_14),
                FUNC_1(VAR_15))))
      break;
    }

    VAR_8->frameheadpos++;
    FUNC_12(VAR_8, VAR_8->frameheadpos);
    if (!FUNC_13(VAR_8->buffer, 1, 1,
            VAR_8->framehead_slot))
     break;
   }
   VAR_8->framehead_valid = 1;
  }
  else if (VAR_10 & VAR_1)
  {
   int64 VAR_20 = FUNC_3(VAR_8->startOffsetValue);
   int64 VAR_21;

   if (VAR_10 & VAR_6)
    VAR_21 = VAR_8->currentgroup - VAR_20;
   else
    VAR_21 = VAR_8->currentgroup + VAR_20;

   FUNC_14(VAR_8->buffer,
             VAR_8->framehead_ptr);
   if (VAR_8->frameheadpos == 0 &&
    FUNC_8(VAR_8->framehead_slot))
   {

    if (!FUNC_13(VAR_8->buffer, 1, 1,
            VAR_8->framehead_slot))
     FUNC_10(VAR_0, "unexpected end of tuplestore");
   }

   while (!FUNC_8(VAR_8->framehead_slot))
   {
    if (VAR_8->frameheadgroup >= VAR_21)
     break;
    FUNC_5(VAR_8->temp_slot_2, VAR_8->framehead_slot);

    VAR_8->frameheadpos++;
    FUNC_12(VAR_8, VAR_8->frameheadpos);
    if (!FUNC_13(VAR_8->buffer, 1, 1,
            VAR_8->framehead_slot))
     break;
    if (!FUNC_9(VAR_8, VAR_8->temp_slot_2,
          VAR_8->framehead_slot))
     VAR_8->frameheadgroup++;
   }
   FUNC_4(VAR_8->temp_slot_2);
   VAR_8->framehead_valid = 1;
  }
  else
   FUNC_0(0);
 }
 else
  FUNC_0(0);

 FUNC_7(VAR_11);
}
