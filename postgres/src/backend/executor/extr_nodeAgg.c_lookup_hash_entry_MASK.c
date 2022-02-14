
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_17__ {int * tts_isnull; int * tts_values; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_18__ {int * additional; } ;
typedef TYPE_3__ TupleHashEntryData ;
struct TYPE_20__ {size_t current_set; int numtrans; int * pertrans; TYPE_4__* perhash; TYPE_1__* tmpcontext; } ;
struct TYPE_19__ {int numhashGrpCols; int* hashGrpColIdxInput; TYPE_11__* hashtable; int largestGrpColIdx; TYPE_2__* hashslot; } ;
struct TYPE_16__ {TYPE_2__* ecxt_outertuple; } ;
struct TYPE_15__ {int tablecxt; } ;
typedef int * AggStatePerTrans ;
typedef TYPE_4__* AggStatePerHash ;
typedef int AggStatePerGroupData ;
typedef int * AggStatePerGroup ;
typedef TYPE_5__ AggState ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__* FUNC_2 (TYPE_11__*,TYPE_2__*,int*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_5__*,int *,int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static TupleHashEntryData *
FUNC_6(AggState *VAR_0)
{
 TupleTableSlot *VAR_1 = VAR_0->tmpcontext->ecxt_outertuple;
 AggStatePerHash VAR_2 = &VAR_0->perhash[VAR_0->current_set];
 TupleTableSlot *VAR_3 = VAR_2->hashslot;
 TupleHashEntryData *VAR_4;
 bool VAR_5;
 int VAR_6;


 FUNC_5(VAR_1, VAR_2->largestGrpColIdx);
 FUNC_0(VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_2->numhashGrpCols; VAR_6++)
 {
  int VAR_7 = VAR_2->hashGrpColIdxInput[VAR_6] - 1;

  VAR_3->tts_values[VAR_6] = VAR_1->tts_values[VAR_7];
  VAR_3->tts_isnull[VAR_6] = VAR_1->tts_isnull[VAR_7];
 }
 FUNC_1(VAR_3);


 VAR_4 = FUNC_2(VAR_2->hashtable, VAR_3, &VAR_5);

 if (VAR_5)
 {
  AggStatePerGroup VAR_8;
  int VAR_9;

  VAR_8 = (AggStatePerGroup)
   FUNC_3(VAR_2->hashtable->tablecxt,
          sizeof(AggStatePerGroupData) * VAR_0->numtrans);
  VAR_4->additional = VAR_8;





  for (VAR_9 = 0; VAR_9 < VAR_0->numtrans; VAR_9++)
  {
   AggStatePerTrans VAR_10 = &VAR_0->pertrans[VAR_9];
   AggStatePerGroup VAR_11 = &VAR_8[VAR_9];

   FUNC_4(VAR_0, VAR_10, VAR_11);
  }
 }

 return VAR_4;
}
