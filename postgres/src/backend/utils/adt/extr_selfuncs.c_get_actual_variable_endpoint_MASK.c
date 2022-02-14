
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int int16 ;
typedef int TupleTableSlot ;
struct TYPE_7__ {int xs_want_itup; int xs_itupdesc; int xs_itup; scalar_t__ xs_recheck; } ;
typedef int SnapshotData ;
typedef int ScanKey ;
typedef int ScanDirection ;
typedef int Relation ;
typedef int MemoryContext ;
typedef int * ItemPointer ;
typedef TYPE_1__* IndexScanDesc ;
typedef int Datum ;
typedef scalar_t__ Buffer ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ,scalar_t__*) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,char*,...) ;
 TYPE_1__* FUNC_9 (int ,int ,int *,int,int ) ;
 int FUNC_10 (int ,int ,int *,int*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int * FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,int ,int,int *,int ) ;

__attribute__((used)) static bool
FUNC_15(Relation VAR_4,
        Relation VAR_5,
        ScanDirection VAR_6,
        ScanKey VAR_7,
        int16 VAR_8,
        bool VAR_9,
        TupleTableSlot *VAR_10,
        MemoryContext VAR_11,
        Datum *VAR_12)
{
 bool VAR_13 = 0;
 SnapshotData VAR_14;
 IndexScanDesc VAR_15;
 Buffer VAR_16 = VAR_2;
 ItemPointer VAR_17;
 Datum VAR_18[VAR_1];
 bool VAR_19[VAR_1];
 MemoryContext VAR_20;
 FUNC_1(VAR_14, VAR_3);

 VAR_15 = FUNC_9(VAR_4, VAR_5,
         &VAR_14,
         1, 0);

 VAR_15->xs_want_itup = 1;
 FUNC_14(VAR_15, VAR_7, 1, ((void*)0), 0);


 while ((VAR_17 = FUNC_13(VAR_15, VAR_6)) != ((void*)0))
 {
  if (!FUNC_6(VAR_4,
       FUNC_2(VAR_17),
       &VAR_16))
  {

   if (!FUNC_12(VAR_15, VAR_10))
    continue;


   FUNC_0(VAR_10);





  }





  if (!VAR_15->xs_itup)
   FUNC_8(VAR_0, "no data returned for index-only scan");
  if (VAR_15->xs_recheck)
   FUNC_8(VAR_0, "unexpected recheck indication from btree");


  FUNC_10(VAR_15->xs_itup,
         VAR_15->xs_itupdesc,
         VAR_18, VAR_19);


  if (VAR_19[0])
   FUNC_8(VAR_0, "found unexpected null value in index \"%s\"",
     FUNC_4(VAR_5));


  VAR_20 = FUNC_3(VAR_11);
  *VAR_12 = FUNC_7(VAR_18[0], VAR_9, VAR_8);
  FUNC_3(VAR_20);
  VAR_13 = 1;
  break;
 }

 if (VAR_16 != VAR_2)
  FUNC_5(VAR_16);
 FUNC_11(VAR_15);

 return VAR_13;
}
