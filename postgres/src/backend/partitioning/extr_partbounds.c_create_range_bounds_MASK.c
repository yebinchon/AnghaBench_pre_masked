
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int null_index; int default_index; int ndatums; scalar_t__** kind; int* indexes; int ** datums; int strategy; } ;
struct TYPE_14__ {scalar_t__ strategy; int upperdatums; int lowerdatums; scalar_t__ is_default; } ;
struct TYPE_13__ {int partnatts; int * parttyplen; int * parttypbyval; int * partcollation; int * partsupfunc; int strategy; } ;
struct TYPE_12__ {scalar_t__* kind; int index; scalar_t__ lower; int * datums; } ;
typedef scalar_t__ PartitionRangeDatumKind ;
typedef TYPE_1__ PartitionRangeBound ;
typedef TYPE_2__* PartitionKey ;
typedef TYPE_3__ PartitionBoundSpec ;
typedef TYPE_4__ PartitionBoundInfoData ;
typedef TYPE_4__* PartitionBoundInfo ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,int,int ,int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__**,int,int,int ,void*) ;
 int VAR_3 ;

__attribute__((used)) static PartitionBoundInfo
FUNC_9(PartitionBoundSpec **VAR_4, int VAR_5,
     PartitionKey VAR_6, int **VAR_7)
{
 PartitionBoundInfo VAR_8;
 PartitionRangeBound **VAR_9 = ((void*)0);
 PartitionRangeBound **VAR_10,
      *VAR_11;
 int VAR_12,
    VAR_13;
 int VAR_14 = 0;
 int VAR_15 = -1;
 int VAR_16 = 0;

 VAR_8 = (PartitionBoundInfoData *)
  FUNC_7(sizeof(PartitionBoundInfoData));
 VAR_8->strategy = VAR_6->strategy;

 VAR_8->null_index = -1;

 VAR_8->default_index = -1;

 VAR_10 = (PartitionRangeBound **)
  FUNC_7(2 * VAR_5 * sizeof(PartitionRangeBound *));


 VAR_14 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
 {
  PartitionBoundSpec *VAR_17 = VAR_4[VAR_12];
  PartitionRangeBound *VAR_18,
       *VAR_19;

  if (VAR_17->strategy != VAR_2)
   FUNC_4(VAR_0, "invalid strategy in partition bound spec");






  if (VAR_17->is_default)
  {
   VAR_15 = VAR_12;
   continue;
  }

  VAR_18 = FUNC_5(VAR_6, VAR_12, VAR_17->lowerdatums, 1);
  VAR_19 = FUNC_5(VAR_6, VAR_12, VAR_17->upperdatums, 0);
  VAR_10[VAR_14++] = VAR_18;
  VAR_10[VAR_14++] = VAR_19;
 }

 FUNC_0(VAR_14 == VAR_5 * 2 ||
     (VAR_15 != -1 && VAR_14 == (VAR_5 - 1) * 2));


 FUNC_8(VAR_10, VAR_14,
     sizeof(PartitionRangeBound *),
     VAR_3,
     (void *) VAR_6);


 VAR_9 = (PartitionRangeBound **)
  FUNC_6(VAR_14 * sizeof(PartitionRangeBound *));
 VAR_13 = 0;
 VAR_11 = ((void*)0);
 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++)
 {
  PartitionRangeBound *VAR_20 = VAR_10[VAR_12];
  bool VAR_21 = 0;
  int VAR_22;


  for (VAR_22 = 0; VAR_22 < VAR_6->partnatts; VAR_22++)
  {
   Datum VAR_23;

   if (VAR_11 == ((void*)0) || VAR_20->kind[VAR_22] != VAR_11->kind[VAR_22])
   {
    VAR_21 = 1;
    break;
   }






   if (VAR_20->kind[VAR_22] != VAR_1)
    break;

   VAR_23 = FUNC_2(&VAR_6->partsupfunc[VAR_22],
            VAR_6->partcollation[VAR_22],
            VAR_20->datums[VAR_22],
            VAR_11->datums[VAR_22]);
   if (FUNC_1(VAR_23) != 0)
   {
    VAR_21 = 1;
    break;
   }
  }





  if (VAR_21)
   VAR_9[VAR_13++] = VAR_10[VAR_12];

  VAR_11 = VAR_20;
 }


 VAR_14 = VAR_13;
 VAR_8->ndatums = VAR_14;
 VAR_8->datums = (Datum **) FUNC_7(VAR_14 * sizeof(Datum *));
 VAR_8->kind = (PartitionRangeDatumKind **)
  FUNC_6(VAR_14 *
      sizeof(PartitionRangeDatumKind *));





 VAR_8->indexes = (int *) FUNC_6((VAR_14 + 1) * sizeof(int));

 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++)
 {
  int VAR_24;

  VAR_8->datums[VAR_12] = (Datum *) FUNC_6(VAR_6->partnatts *
            sizeof(Datum));
  VAR_8->kind[VAR_12] = (PartitionRangeDatumKind *)
   FUNC_6(VAR_6->partnatts *
       sizeof(PartitionRangeDatumKind));
  for (VAR_24 = 0; VAR_24 < VAR_6->partnatts; VAR_24++)
  {
   if (VAR_9[VAR_12]->kind[VAR_24] == VAR_1)
    VAR_8->datums[VAR_12][VAR_24] =
     FUNC_3(VAR_9[VAR_12]->datums[VAR_24],
         VAR_6->parttypbyval[VAR_24],
         VAR_6->parttyplen[VAR_24]);
   VAR_8->kind[VAR_12][VAR_24] = VAR_9[VAR_12]->kind[VAR_24];
  }
  if (VAR_9[VAR_12]->lower)
   VAR_8->indexes[VAR_12] = -1;
  else
  {
   int VAR_25 = VAR_9[VAR_12]->index;


   if ((*VAR_7)[VAR_25] == -1)
    (*VAR_7)[VAR_25] = VAR_16++;

   VAR_8->indexes[VAR_12] = (*VAR_7)[VAR_25];
  }
 }


 if (VAR_15 != -1)
 {
  FUNC_0(VAR_15 >= 0 && (*VAR_7)[VAR_15] == -1);
  (*VAR_7)[VAR_15] = VAR_16++;
  VAR_8->default_index = (*VAR_7)[VAR_15];
 }


 FUNC_0(VAR_12 == VAR_14);
 VAR_8->indexes[VAR_12] = -1;


 FUNC_0(VAR_16 == VAR_5);
 return VAR_8;
}
