
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int16 ;
typedef int TupleDesc ;
struct TYPE_13__ {int heapkeyspace; int anynullkeys; int nextkey; int pivotsearch; int * scankeys; int * scantid; int keysz; } ;
struct TYPE_12__ {int* rd_indoption; int * rd_indcollation; } ;
typedef int ScanKeyData ;
typedef int * ScanKey ;
typedef TYPE_1__* Relation ;
typedef int * IndexTuple ;
typedef int FmgrInfo ;
typedef scalar_t__ Datum ;
typedef TYPE_2__* BTScanInsert ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *,int,int ,int ,int ,int ,int *,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int *,int,int ,int*) ;
 int * FUNC_10 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 TYPE_2__* FUNC_12 (scalar_t__) ;
 int VAR_6 ;

BTScanInsert
FUNC_13(Relation VAR_7, IndexTuple VAR_8)
{
 BTScanInsert VAR_9;
 ScanKey VAR_10;
 TupleDesc VAR_11;
 int VAR_12;
 int16 *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_11 = FUNC_6(VAR_7);
 VAR_12 = FUNC_4(VAR_7);
 VAR_13 = VAR_7->rd_indoption;
 VAR_14 = VAR_8 ? FUNC_2(VAR_8, VAR_7) : 0;

 FUNC_0(VAR_14 <= FUNC_3(VAR_7));






 VAR_9 = FUNC_12(FUNC_11(VAR_1, VAR_6) +
     sizeof(ScanKeyData) * VAR_12);
 VAR_9->heapkeyspace = VAR_8 == ((void*)0) || FUNC_8(VAR_7);
 VAR_9->anynullkeys = 0;
 VAR_9->nextkey = 0;
 VAR_9->pivotsearch = 0;
 VAR_9->keysz = FUNC_5(VAR_12, VAR_14);
 VAR_9->scantid = VAR_9->heapkeyspace && VAR_8 ?
  FUNC_1(VAR_8) : ((void*)0);
 VAR_10 = VAR_9->scankeys;
 for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
 {
  FmgrInfo *VAR_16;
  Datum VAR_17;
  bool VAR_18;
  int VAR_19;





  VAR_16 = FUNC_10(VAR_7, VAR_15 + 1, VAR_0);






  if (VAR_15 < VAR_14)
   VAR_17 = FUNC_9(VAR_8, VAR_15 + 1, VAR_11, &VAR_18);
  else
  {
   VAR_17 = (Datum) 0;
   VAR_18 = 1;
  }
  VAR_19 = (VAR_18 ? VAR_5 : 0) | (VAR_13[VAR_15] << VAR_4);
  FUNC_7(&VAR_10[VAR_15],
            VAR_19,
            (AttrNumber) (VAR_15 + 1),
            VAR_3,
            VAR_2,
            VAR_7->rd_indcollation[VAR_15],
            VAR_16,
            VAR_17);

  if (VAR_18)
   VAR_9->anynullkeys = 1;
 }

 return VAR_9;
}
