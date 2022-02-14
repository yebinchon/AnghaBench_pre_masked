
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_10__ {int* indexes; int ndatums; scalar_t__** kind; int * datums; } ;
struct TYPE_9__ {int partnatts; scalar_t__ strategy; int * partcollation; TYPE_3__* boundinfo; } ;
struct TYPE_8__ {int scan_null; int scan_default; void* bound_offsets; } ;
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
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int) ;
 void* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,int *,TYPE_3__*,int,int *,int*) ;
 int FUNC_8 (int *,int *,int ,scalar_t__*,int *,int) ;

__attribute__((used)) static PruneStepResult *
FUNC_9(PartitionPruneContext *VAR_4,
        StrategyNumber VAR_5, Datum *VAR_6, int VAR_7,
        FmgrInfo *VAR_8, Bitmapset *VAR_9)
{
 PruneStepResult *VAR_10 = (PruneStepResult *) FUNC_5(sizeof(PruneStepResult));
 PartitionBoundInfo VAR_11 = VAR_4->boundinfo;
 Oid *VAR_12 = VAR_4->partcollation;
 int VAR_13 = VAR_4->partnatts;
 int *VAR_14 = VAR_11->indexes;
 int VAR_15,
    VAR_16,
    VAR_17;
 bool VAR_18;
 bool VAR_19 = 0;

 FUNC_0(VAR_4->strategy == VAR_3);
 FUNC_0(VAR_7 <= VAR_13);

 VAR_10->scan_null = VAR_10->scan_default = 0;





 if (VAR_11->ndatums == 0 || !FUNC_2(VAR_9))
 {
  VAR_10->scan_default = FUNC_6(VAR_11);
  return VAR_10;
 }

 VAR_16 = 0;
 VAR_17 = VAR_11->ndatums;







 if (VAR_7 == 0)
 {

  if (VAR_14[VAR_16] < 0)
   VAR_16++;
  if (VAR_14[VAR_17] < 0)
   VAR_17--;

  VAR_10->scan_default = FUNC_6(VAR_11);
  FUNC_0(VAR_14[VAR_16] >= 0 &&
      VAR_14[VAR_17] >= 0);
  VAR_10->bound_offsets = FUNC_1(((void*)0), VAR_16, VAR_17);

  return VAR_10;
 }





 if (VAR_7 < VAR_13)
  VAR_10->scan_default = FUNC_6(VAR_11);

 switch (VAR_5)
 {
  case 132:

   VAR_15 = FUNC_7(VAR_8,
            VAR_12,
            VAR_11,
            VAR_7, VAR_6,
            &VAR_18);

   if (VAR_15 >= 0 && VAR_18)
   {
    if (VAR_7 == VAR_13)
    {

     VAR_10->bound_offsets = FUNC_3(VAR_15 + 1);
     return VAR_10;
    }
    else
    {
     int VAR_20 = VAR_15;
     while (VAR_15 >= 1)
     {
      int32 VAR_21;

      VAR_21 =
       FUNC_8(VAR_8,
                VAR_12,
                VAR_11->datums[VAR_15 - 1],
                VAR_11->kind[VAR_15 - 1],
                VAR_6, VAR_7);
      if (VAR_21 != 0)
       break;
      VAR_15--;
     }

     FUNC_0(0 ==
         FUNC_8(VAR_8,
               VAR_12,
               VAR_11->datums[VAR_15],
               VAR_11->kind[VAR_15],
               VAR_6, VAR_7));
     if (VAR_11->kind[VAR_15][VAR_7] ==
      VAR_2)
      VAR_15++;

     VAR_16 = VAR_15;





     VAR_15 = VAR_20;
     while (VAR_15 < VAR_11->ndatums - 1)
     {
      int32 VAR_22;

      VAR_22 = FUNC_8(VAR_8,
               VAR_12,
               VAR_11->datums[VAR_15 + 1],
               VAR_11->kind[VAR_15 + 1],
               VAR_6, VAR_7);
      if (VAR_22 != 0)
       break;
      VAR_15++;
     }

     FUNC_0(0 ==
         FUNC_8(VAR_8,
               VAR_12,
               VAR_11->datums[VAR_15],
               VAR_11->kind[VAR_15],
               VAR_6, VAR_7));





     VAR_17 = VAR_15 + 1;
    }

    FUNC_0(VAR_16 >= 0 && VAR_17 >= 0);
    VAR_10->bound_offsets = FUNC_1(((void*)0), VAR_16, VAR_17);
   }
   else
   {
    VAR_10->bound_offsets = FUNC_3(VAR_15 + 1);
   }

   return VAR_10;

  case 131:
   VAR_19 = 1;

  case 130:





   VAR_15 = FUNC_7(VAR_8,
            VAR_12,
            VAR_11,
            VAR_7, VAR_6,
            &VAR_18);
   if (VAR_15 < 0)
   {




    VAR_16 = 0;
   }
   else
   {
    if (VAR_18 && VAR_7 < VAR_13)
    {
     while (VAR_15 >= 1 && VAR_15 < VAR_11->ndatums - 1)
     {
      int32 VAR_23;
      int VAR_24;

      VAR_24 = VAR_19 ? VAR_15 - 1 : VAR_15 + 1;
      VAR_23 =
       FUNC_8(VAR_8,
                VAR_12,
                VAR_11->datums[VAR_24],
                VAR_11->kind[VAR_24],
                VAR_6, VAR_7);
      if (VAR_23 != 0)
       break;

      VAR_15 = VAR_24;
     }

     FUNC_0(0 ==
         FUNC_8(VAR_8,
               VAR_12,
               VAR_11->datums[VAR_15],
               VAR_11->kind[VAR_15],
               VAR_6, VAR_7));

     VAR_16 = VAR_19 ? VAR_15 : VAR_15 + 1;
    }
    else
    {
     VAR_16 = VAR_15 + 1;
    }
   }
   break;

  case 129:
   VAR_19 = 1;

  case 128:





   VAR_15 = FUNC_7(VAR_8,
            VAR_12,
            VAR_11,
            VAR_7, VAR_6,
            &VAR_18);
   if (VAR_15 >= 0)
   {



    if (VAR_18 && VAR_7 < VAR_13)
    {
     while (VAR_15 >= 1 && VAR_15 < VAR_11->ndatums - 1)
     {
      int32 VAR_25;
      int VAR_26;

      VAR_26 = VAR_19 ? VAR_15 + 1 : VAR_15 - 1;
      VAR_25 = FUNC_8(VAR_8,
               VAR_12,
               VAR_11->datums[VAR_26],
               VAR_11->kind[VAR_26],
               VAR_6, VAR_7);
      if (VAR_25 != 0)
       break;

      VAR_15 = VAR_26;
     }

     FUNC_0(0 ==
         FUNC_8(VAR_8,
               VAR_12,
               VAR_11->datums[VAR_15],
               VAR_11->kind[VAR_15],
               VAR_6, VAR_7));

     VAR_17 = VAR_19 ? VAR_15 + 1 : VAR_15;
    }
    else if (!VAR_18 || VAR_19)
     VAR_17 = VAR_15 + 1;
    else
     VAR_17 = VAR_15;
   }
   else
   {




    VAR_17 = VAR_15 + 1;
   }
   break;

  default:
   FUNC_4(VAR_0, "invalid strategy number %d", VAR_5);
   break;
 }

 FUNC_0(VAR_16 >= 0 && VAR_16 <= VAR_11->ndatums);
 FUNC_0(VAR_17 >= 0 && VAR_17 <= VAR_11->ndatums);







 if (VAR_16 < VAR_11->ndatums && VAR_14[VAR_16] < 0)
 {
  int VAR_27 = VAR_7 - 1;

  if (VAR_11->kind[VAR_16][VAR_27] ==
   VAR_2)
  {
   VAR_16++;
   FUNC_0(VAR_11->indexes[VAR_16] >= 0);
  }
 }
 if (VAR_17 >= 1 && VAR_14[VAR_17] < 0)
 {
  int VAR_28 = VAR_7 - 1;

  if (VAR_11->kind[VAR_17 - 1][VAR_28] ==
   VAR_1)
  {
   VAR_17--;
   FUNC_0(VAR_11->indexes[VAR_17] >= 0);
  }
 }

 FUNC_0(VAR_16 >= 0 && VAR_17 >= 0);
 if (VAR_16 <= VAR_17)
  VAR_10->bound_offsets = FUNC_1(((void*)0), VAR_16, VAR_17);

 return VAR_10;
}
