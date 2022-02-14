
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_5__ {int pending_tuples; int pending_pages; int version; } ;
struct TYPE_4__ {int nPendingHeapTuples; int nPendingPages; int ginVersion; } ;
typedef int Relation ;
typedef int Page ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__ GinMetaPageData ;
typedef TYPE_2__ GinIndexStat ;
typedef int FunctionCallInfo ;
typedef int Datum ;
typedef int Buffer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,...) ;
 scalar_t__ FUNC_17 (int ,int *,int *) ;
 int FUNC_18 (int ,int *,int*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;

Datum
FUNC_21(Oid VAR_7, FunctionCallInfo VAR_8)
{
 Relation VAR_9;
 Buffer VAR_10;
 Page VAR_11;
 GinMetaPageData *VAR_12;
 GinIndexStat VAR_13;
 HeapTuple VAR_14;
 TupleDesc VAR_15;
 Datum VAR_16[3];
 bool VAR_17[3] = {0, 0, 0};
 Datum VAR_18;

 VAR_9 = FUNC_20(VAR_7, VAR_0);

 if (!FUNC_4(VAR_9) || !FUNC_3(VAR_9))
  FUNC_14(VAR_3,
    (FUNC_15(VAR_2),
     FUNC_16("relation \"%s\" is not a GIN index",
      FUNC_10(VAR_9))));






 if (FUNC_8(VAR_9))
  FUNC_14(VAR_3,
    (FUNC_15(VAR_1),
     FUNC_16("cannot access temporary indexes of other sessions")));




 VAR_10 = FUNC_9(VAR_9, VAR_4);
 FUNC_7(VAR_10, VAR_5);
 VAR_11 = FUNC_0(VAR_10);
 VAR_12 = FUNC_1(VAR_11);

 VAR_13.version = VAR_12->ginVersion;
 VAR_13.pending_pages = VAR_12->nPendingPages;
 VAR_13.pending_tuples = VAR_12->nPendingHeapTuples;

 FUNC_12(VAR_10);
 FUNC_19(VAR_9, VAR_0);




 if (FUNC_17(VAR_8, ((void*)0), &VAR_15) != VAR_6)
  FUNC_13(VAR_3, "return type must be a row type");

 VAR_16[0] = FUNC_5(VAR_13.version);
 VAR_16[1] = FUNC_11(VAR_13.pending_pages);
 VAR_16[2] = FUNC_6(VAR_13.pending_tuples);




 VAR_14 = FUNC_18(VAR_15, VAR_16, VAR_17);
 VAR_18 = FUNC_2(VAR_14);

 return VAR_18;
}
