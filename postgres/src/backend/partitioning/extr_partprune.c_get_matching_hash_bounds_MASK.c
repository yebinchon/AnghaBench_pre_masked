
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_9__ {int* indexes; scalar_t__ ndatums; } ;
struct TYPE_8__ {int partnatts; scalar_t__ strategy; int * partcollation; TYPE_3__* boundinfo; } ;
struct TYPE_7__ {int scan_null; int scan_default; int bound_offsets; } ;
typedef scalar_t__ StrategyNumber ;
typedef TYPE_1__ PruneStepResult ;
typedef TYPE_2__ PartitionPruneContext ;
typedef TYPE_3__* PartitionBoundInfo ;
typedef int Oid ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef int Bitmapset ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *,int *,int *,int*) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static PruneStepResult *
FUNC_8(PartitionPruneContext *VAR_3,
       StrategyNumber VAR_4, Datum *VAR_5, int VAR_6,
       FmgrInfo *VAR_7, Bitmapset *VAR_8)
{
 PruneStepResult *VAR_9 = (PruneStepResult *) FUNC_7(sizeof(PruneStepResult));
 PartitionBoundInfo VAR_10 = VAR_3->boundinfo;
 int *VAR_11 = VAR_10->indexes;
 int VAR_12 = VAR_3->partnatts;
 bool VAR_13[VAR_1];
 int VAR_14;
 uint64 VAR_15;
 int VAR_16;
 Oid *VAR_17 = VAR_3->partcollation;

 FUNC_0(VAR_3->strategy == VAR_2);






 if (VAR_6 + FUNC_4(VAR_8) == VAR_12)
 {




  FUNC_0(VAR_4 == VAR_0 || VAR_6 == 0);

  for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++)
   VAR_13[VAR_14] = FUNC_2(VAR_14, VAR_8);

  VAR_16 = FUNC_6(VAR_10);
  VAR_15 = FUNC_5(VAR_12, VAR_7, VAR_17,
              VAR_5, VAR_13);

  if (VAR_11[VAR_15 % VAR_16] >= 0)
   VAR_9->bound_offsets =
    FUNC_3(VAR_15 % VAR_16);
 }
 else
 {

  FUNC_0(VAR_10->ndatums > 0);
  VAR_9->bound_offsets = FUNC_1(((void*)0), 0,
             VAR_10->ndatums - 1);
 }





 VAR_9->scan_null = VAR_9->scan_default = 0;

 return VAR_9;
}
