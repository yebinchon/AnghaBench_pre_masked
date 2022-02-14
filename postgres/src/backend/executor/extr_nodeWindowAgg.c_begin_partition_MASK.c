
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* WindowStatePerFunc ;
typedef TYPE_4__* WindowObject ;
struct TYPE_9__ {scalar_t__ plan; } ;
struct TYPE_10__ {TYPE_1__ ps; } ;
struct TYPE_13__ {int frameOptions; int numfuncs; int partition_spooled; int framehead_valid; int frametail_valid; int grouptail_valid; int grouptailpos; int more_partitions; scalar_t__ numaggs; int framehead_ptr; int frametail_ptr; int grouptail_ptr; scalar_t__ spooled_rows; int * first_part_slot; int buffer; TYPE_3__* perfunc; scalar_t__ aggregatedupto; scalar_t__ aggregatedbase; TYPE_4__* agg_winobj; scalar_t__ current_ptr; scalar_t__ frametail_slot; scalar_t__ framehead_slot; scalar_t__ agg_row_slot; scalar_t__ groupheadpos; scalar_t__ frametailgroup; scalar_t__ frameheadgroup; scalar_t__ currentgroup; scalar_t__ frametailpos; scalar_t__ frameheadpos; scalar_t__ currentpos; TYPE_2__ ss; } ;
typedef TYPE_5__ WindowAggState ;
struct TYPE_14__ {scalar_t__ ordNumCols; } ;
typedef TYPE_6__ WindowAgg ;
typedef int TupleTableSlot ;
struct TYPE_12__ {int markpos; int seekpos; void* readptr; void* markptr; } ;
struct TYPE_11__ {TYPE_4__* winobj; int plain_agg; } ;
typedef int PlanState ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_5__*) ;
 void* FUNC_5 (int ,int) ;
 int FUNC_6 (int,int,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_9(WindowAggState *VAR_12)
{
 WindowAgg *VAR_13 = (WindowAgg *) VAR_12->ss.ps.plan;
 PlanState *VAR_14 = FUNC_4(VAR_12);
 int VAR_15 = VAR_12->frameOptions;
 int VAR_16 = VAR_12->numfuncs;
 int VAR_17;

 VAR_12->partition_spooled = 0;
 VAR_12->framehead_valid = 0;
 VAR_12->frametail_valid = 0;
 VAR_12->grouptail_valid = 0;
 VAR_12->spooled_rows = 0;
 VAR_12->currentpos = 0;
 VAR_12->frameheadpos = 0;
 VAR_12->frametailpos = 0;
 VAR_12->currentgroup = 0;
 VAR_12->frameheadgroup = 0;
 VAR_12->frametailgroup = 0;
 VAR_12->groupheadpos = 0;
 VAR_12->grouptailpos = -1;
 FUNC_0(VAR_12->agg_row_slot);
 if (VAR_12->framehead_slot)
  FUNC_0(VAR_12->framehead_slot);
 if (VAR_12->frametail_slot)
  FUNC_0(VAR_12->frametail_slot);





 if (FUNC_3(VAR_12->first_part_slot))
 {
  TupleTableSlot *VAR_18 = FUNC_2(VAR_14);

  if (!FUNC_3(VAR_18))
   FUNC_1(VAR_12->first_part_slot, VAR_18);
  else
  {

   VAR_12->partition_spooled = 1;
   VAR_12->more_partitions = 0;
   return;
  }
 }


 VAR_12->buffer = FUNC_6(0, 0, VAR_11);






 VAR_12->current_ptr = 0;


 FUNC_8(VAR_12->buffer, 0);


 if (VAR_12->numaggs > 0)
 {
  WindowObject VAR_19 = VAR_12->agg_winobj;
  int VAR_20 = 0;





  if (!(VAR_15 & VAR_10) ||
   (VAR_15 & VAR_5))
  {

   VAR_19->markptr = FUNC_5(VAR_12->buffer, 0);

   VAR_20 |= VAR_0;
  }

  VAR_19->readptr = FUNC_5(VAR_12->buffer,
               VAR_20);
  VAR_19->markpos = -1;
  VAR_19->seekpos = -1;


  VAR_12->aggregatedbase = 0;
  VAR_12->aggregatedupto = 0;
 }


 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
 {
  WindowStatePerFunc VAR_21 = &(VAR_12->perfunc[VAR_17]);

  if (!VAR_21->plain_agg)
  {
   WindowObject VAR_22 = VAR_21->winobj;

   VAR_22->markptr = FUNC_5(VAR_12->buffer,
               0);
   VAR_22->readptr = FUNC_5(VAR_12->buffer,
               VAR_0);
   VAR_22->markpos = -1;
   VAR_22->seekpos = -1;
  }
 }
 VAR_12->framehead_ptr = VAR_12->frametail_ptr = -1;

 if (VAR_15 & (VAR_7 | VAR_6))
 {
  if (((VAR_15 & VAR_8) &&
    VAR_13->ordNumCols != 0) ||
   (VAR_15 & VAR_9))
   VAR_12->framehead_ptr =
    FUNC_5(VAR_12->buffer, 0);
  if (((VAR_15 & VAR_1) &&
    VAR_13->ordNumCols != 0) ||
   (VAR_15 & VAR_2))
   VAR_12->frametail_ptr =
    FUNC_5(VAR_12->buffer, 0);
 }
 VAR_12->grouptail_ptr = -1;

 if ((VAR_15 & (VAR_3 |
       VAR_4)) &&
  VAR_13->ordNumCols != 0)
 {
  VAR_12->grouptail_ptr =
   FUNC_5(VAR_12->buffer, 0);
 }





 FUNC_7(VAR_12->buffer, VAR_12->first_part_slot);
 VAR_12->spooled_rows++;
}
