
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int ndatums; scalar_t__* indexes; } ;
struct TYPE_10__ {scalar_t__ strategy; int partnatts; int * partcollation; TYPE_3__* boundinfo; } ;
struct TYPE_9__ {int scan_null; int scan_default; void* bound_offsets; } ;
typedef int StrategyNumber ;
typedef TYPE_1__ PruneStepResult ;
typedef TYPE_2__ PartitionPruneContext ;
typedef TYPE_3__* PartitionBoundInfo ;
typedef int Oid ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef int Bitmapset ;


 int FUNC_0 (int) ;





 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (int *,int,int) ;
 void* FUNC_2 (void*,int) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 void* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *,int *,TYPE_3__*,int ,int*) ;

__attribute__((used)) static PruneStepResult *
FUNC_10(PartitionPruneContext *VAR_3,
       StrategyNumber VAR_4, Datum VAR_5, int VAR_6,
       FmgrInfo *VAR_7, Bitmapset *VAR_8)
{
 PruneStepResult *VAR_9 = (PruneStepResult *) FUNC_6(sizeof(PruneStepResult));
 PartitionBoundInfo VAR_10 = VAR_3->boundinfo;
 int VAR_11,
    VAR_12,
    VAR_13;
 bool VAR_14;
 bool VAR_15 = 0;
 Oid *VAR_16 = VAR_3->partcollation;

 FUNC_0(VAR_3->strategy == VAR_2);
 FUNC_0(VAR_3->partnatts == 1);

 VAR_9->scan_null = VAR_9->scan_default = 0;

 if (!FUNC_3(VAR_8))
 {





  if (FUNC_7(VAR_10))
   VAR_9->scan_null = 1;
  else
   VAR_9->scan_default = FUNC_8(VAR_10);
  return VAR_9;
 }





 if (VAR_10->ndatums == 0)
 {
  VAR_9->scan_default = FUNC_8(VAR_10);
  return VAR_9;
 }

 VAR_12 = 0;
 VAR_13 = VAR_10->ndatums - 1;






 if (VAR_6 == 0)
 {
  FUNC_0(VAR_10->ndatums > 0);
  VAR_9->bound_offsets = FUNC_1(((void*)0), 0,
             VAR_10->ndatums - 1);
  VAR_9->scan_default = FUNC_8(VAR_10);
  return VAR_9;
 }


 if (VAR_4 == VAR_1)
 {



  FUNC_0(VAR_10->ndatums > 0);
  VAR_9->bound_offsets = FUNC_1(((void*)0), 0,
             VAR_10->ndatums - 1);

  VAR_11 = FUNC_9(VAR_7, VAR_16, VAR_10,
          VAR_5, &VAR_14);
  if (VAR_11 >= 0 && VAR_14)
  {


   FUNC_0(VAR_10->indexes[VAR_11] >= 0);
   VAR_9->bound_offsets = FUNC_2(VAR_9->bound_offsets,
               VAR_11);
  }


  VAR_9->scan_default = FUNC_8(VAR_10);

  return VAR_9;
 }
 if (VAR_4 != 132)
  VAR_9->scan_default = FUNC_8(VAR_10);

 switch (VAR_4)
 {
  case 132:
   VAR_11 = FUNC_9(VAR_7,
           VAR_16,
           VAR_10, VAR_5,
           &VAR_14);
   if (VAR_11 >= 0 && VAR_14)
   {
    FUNC_0(VAR_10->indexes[VAR_11] >= 0);
    VAR_9->bound_offsets = FUNC_4(VAR_11);
   }
   else
    VAR_9->scan_default = FUNC_8(VAR_10);
   return VAR_9;

  case 131:
   VAR_15 = 1;

  case 130:
   VAR_11 = FUNC_9(VAR_7,
           VAR_16,
           VAR_10, VAR_5,
           &VAR_14);
   if (VAR_11 >= 0)
   {

    if (!VAR_14 || !VAR_15)
     VAR_11++;
   }
   else
   {




    VAR_11 = 0;
   }







   if (VAR_11 > VAR_10->ndatums - 1)
    return VAR_9;

   VAR_12 = VAR_11;
   break;

  case 129:
   VAR_15 = 1;

  case 128:
   VAR_11 = FUNC_9(VAR_7,
           VAR_16,
           VAR_10, VAR_5,
           &VAR_14);
   if (VAR_11 >= 0 && VAR_14 && !VAR_15)
    VAR_11--;







   if (VAR_11 < 0)
    return VAR_9;

   VAR_13 = VAR_11;
   break;

  default:
   FUNC_5(VAR_0, "invalid strategy number %d", VAR_4);
   break;
 }

 FUNC_0(VAR_12 >= 0 && VAR_13 >= 0);
 VAR_9->bound_offsets = FUNC_1(((void*)0), VAR_12, VAR_13);
 return VAR_9;
}
