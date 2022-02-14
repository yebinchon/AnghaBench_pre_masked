
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_17__ {int scan_key; int num_elems; int * elem_values; } ;
struct TYPE_16__ {int numArrayKeys; TYPE_5__* arrayKeys; TYPE_2__* arrayKeyData; int * arrayContext; } ;
struct TYPE_15__ {int numberOfKeys; TYPE_2__* keyData; TYPE_1__* indexRelation; int opaque; } ;
struct TYPE_14__ {int sk_flags; int sk_strategy; int sk_attno; void* sk_argument; } ;
struct TYPE_13__ {int* rd_indoption; } ;
typedef int ScanKeyData ;
typedef TYPE_2__* ScanKey ;
typedef int * MemoryContext ;
typedef TYPE_3__* IndexScanDesc ;
typedef int Datum ;
typedef TYPE_4__* BTScanOpaque ;
typedef TYPE_5__ BTArrayKeyInfo ;
typedef int ArrayType ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int) ;





 int VAR_1 ;
 int * FUNC_3 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_6 (TYPE_3__*,TYPE_2__*,int const,int *,int) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,int,int *,int) ;
 int FUNC_8 (int *,int ,int,int,char,int **,int**,int*) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ,int*,int*,char*) ;
 int FUNC_11 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;

void
FUNC_14(IndexScanDesc VAR_9)
{
 BTScanOpaque VAR_10 = (BTScanOpaque) VAR_9->opaque;
 int VAR_11 = VAR_9->numberOfKeys;
 int16 *VAR_12 = VAR_9->indexRelation->rd_indoption;
 int VAR_13;
 ScanKey VAR_14;
 int VAR_15;
 MemoryContext VAR_16;


 VAR_13 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++)
 {
  VAR_14 = &VAR_9->keyData[VAR_15];
  if (VAR_14->sk_flags & VAR_6)
  {
   VAR_13++;
   FUNC_2(!(VAR_14->sk_flags & (VAR_5 | VAR_8 | VAR_7)));

   if (VAR_14->sk_flags & VAR_4)
   {
    VAR_10->numArrayKeys = -1;
    VAR_10->arrayKeyData = ((void*)0);
    return;
   }
  }
 }


 if (VAR_13 == 0)
 {
  VAR_10->numArrayKeys = 0;
  VAR_10->arrayKeyData = ((void*)0);
  return;
 }





 if (VAR_10->arrayContext == ((void*)0))
  VAR_10->arrayContext = FUNC_1(VAR_1,
             "BTree array context",
             VAR_0);
 else
  FUNC_4(VAR_10->arrayContext);

 VAR_16 = FUNC_5(VAR_10->arrayContext);


 VAR_10->arrayKeyData = (ScanKey) FUNC_12(VAR_9->numberOfKeys * sizeof(ScanKeyData));
 FUNC_11(VAR_10->arrayKeyData,
     VAR_9->keyData,
     VAR_9->numberOfKeys * sizeof(ScanKeyData));


 VAR_10->arrayKeys = (BTArrayKeyInfo *) FUNC_13(VAR_13 * sizeof(BTArrayKeyInfo));


 VAR_13 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++)
 {
  ArrayType *VAR_17;
  int16 VAR_18;
  bool VAR_19;
  char VAR_20;
  int VAR_21;
  Datum *VAR_22;
  bool *VAR_23;
  int VAR_24;
  int VAR_25;

  VAR_14 = &VAR_10->arrayKeyData[VAR_15];
  if (!(VAR_14->sk_flags & VAR_6))
   continue;






  VAR_17 = FUNC_3(VAR_14->sk_argument);

  FUNC_10(FUNC_0(VAR_17),
        &VAR_18, &VAR_19, &VAR_20);
  FUNC_8(VAR_17,
        FUNC_0(VAR_17),
        VAR_18, VAR_19, VAR_20,
        &VAR_22, &VAR_23, &VAR_21);





  VAR_24 = 0;
  for (VAR_25 = 0; VAR_25 < VAR_21; VAR_25++)
  {
   if (!VAR_23[VAR_25])
    VAR_22[VAR_24++] = VAR_22[VAR_25];
  }




  if (VAR_24 == 0)
  {
   VAR_13 = -1;
   break;
  }






  switch (VAR_14->sk_strategy)
  {
   case 128:
   case 129:
    VAR_14->sk_argument =
     FUNC_6(VAR_9, VAR_14,
            130,
            VAR_22, VAR_24);
    continue;
   case 132:

    break;
   case 131:
   case 130:
    VAR_14->sk_argument =
     FUNC_6(VAR_9, VAR_14,
            128,
            VAR_22, VAR_24);
    continue;
   default:
    FUNC_9(VAR_2, "unrecognized StrategyNumber: %d",
      (int) VAR_14->sk_strategy);
    break;
  }






  VAR_21 = FUNC_7(VAR_9, VAR_14,
           (VAR_12[VAR_14->sk_attno - 1] & VAR_3) != 0,
           VAR_22, VAR_24);




  VAR_10->arrayKeys[VAR_13].scan_key = VAR_15;
  VAR_10->arrayKeys[VAR_13].num_elems = VAR_21;
  VAR_10->arrayKeys[VAR_13].elem_values = VAR_22;
  VAR_13++;
 }

 VAR_10->numArrayKeys = VAR_13;

 FUNC_5(VAR_16);
}
