
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_8__ {int ndatums; int** kind; int* indexes; int default_index; int null_index; int ** datums; int strategy; } ;
struct TYPE_7__ {int partnatts; scalar_t__ strategy; int* parttypbyval; int* parttyplen; } ;
typedef int PartitionRangeDatumKind ;
typedef TYPE_1__* PartitionKey ;
typedef int PartitionBoundInfoData ;
typedef TYPE_2__* PartitionBoundInfo ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int*,int*,int) ;
 scalar_t__ FUNC_4 (int) ;

PartitionBoundInfo
FUNC_5(PartitionBoundInfo VAR_3,
       PartitionKey VAR_4)
{
 PartitionBoundInfo VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_5 = (PartitionBoundInfo) FUNC_4(sizeof(PartitionBoundInfoData));

 VAR_5->strategy = VAR_3->strategy;
 VAR_7 = VAR_5->ndatums = VAR_3->ndatums;
 VAR_8 = VAR_4->partnatts;

 VAR_9 = FUNC_2(VAR_3);


 FUNC_0(VAR_4->strategy != VAR_2 || VAR_8 == 1);

 VAR_5->datums = (Datum **) FUNC_4(sizeof(Datum *) * VAR_7);

 if (VAR_3->kind != ((void*)0))
 {
  VAR_5->kind = (PartitionRangeDatumKind **) FUNC_4(VAR_7 *
               sizeof(PartitionRangeDatumKind *));
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  {
   VAR_5->kind[VAR_6] = (PartitionRangeDatumKind *) FUNC_4(VAR_8 *
                  sizeof(PartitionRangeDatumKind));

   FUNC_3(VAR_5->kind[VAR_6], VAR_3->kind[VAR_6],
       sizeof(PartitionRangeDatumKind) * VAR_4->partnatts);
  }
 }
 else
  VAR_5->kind = ((void*)0);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
 {
  int VAR_10;





  bool VAR_11 = (VAR_4->strategy == VAR_1);
  int VAR_12 = VAR_11 ? 2 : VAR_8;

  VAR_5->datums[VAR_6] = (Datum *) FUNC_4(sizeof(Datum) * VAR_12);

  for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++)
  {
   bool VAR_13;
   int VAR_14;

   if (VAR_11)
   {
    VAR_14 = sizeof(int32);
    VAR_13 = 1;
   }
   else
   {
    VAR_13 = VAR_4->parttypbyval[VAR_10];
    VAR_14 = VAR_4->parttyplen[VAR_10];
   }

   if (VAR_5->kind == ((void*)0) ||
    VAR_5->kind[VAR_6][VAR_10] == VAR_0)
    VAR_5->datums[VAR_6][VAR_10] = FUNC_1(VAR_3->datums[VAR_6][VAR_10],
              VAR_13, VAR_14);
  }
 }

 VAR_5->indexes = (int *) FUNC_4(sizeof(int) * VAR_9);
 FUNC_3(VAR_5->indexes, VAR_3->indexes, sizeof(int) * VAR_9);

 VAR_5->null_index = VAR_3->null_index;
 VAR_5->default_index = VAR_3->default_index;

 return VAR_5;
}
