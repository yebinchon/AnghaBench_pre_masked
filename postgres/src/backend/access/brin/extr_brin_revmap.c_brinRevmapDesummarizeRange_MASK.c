
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ regOffset; int heapBlk; int pagesPerRange; } ;
typedef TYPE_1__ xl_brin_desummarize ;
typedef int XLogRecPtr ;
struct TYPE_10__ {int rm_pagesPerRange; } ;
struct TYPE_9__ {int * rm_tids; } ;
typedef TYPE_2__ RevmapContents ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemPointerData ;
typedef int ItemId ;
typedef int Buffer ;
typedef int BrinTuple ;
typedef TYPE_3__ BrinRevmap ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,scalar_t__) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ,scalar_t__) ;
 int FUNC_18 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 () ;
 int VAR_6 ;
 int FUNC_23 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_24 () ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int,int ,int ) ;
 int FUNC_27 (char*,int ) ;
 int FUNC_28 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_29 (int ,int *,int *) ;
 int FUNC_30 (TYPE_3__*) ;
 int FUNC_31 (int ,int ,int ,int ) ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (char*,...) ;
 int FUNC_35 (TYPE_3__*,int ) ;

bool
FUNC_36(Relation VAR_9, BlockNumber VAR_10)
{
 BrinRevmap *VAR_11;
 BlockNumber VAR_12;
 RevmapContents *VAR_13;
 ItemPointerData *VAR_14;
 ItemPointerData VAR_15;
 BlockNumber VAR_16;
 Buffer VAR_17;
 Buffer VAR_18;
 Page VAR_19;
 Page VAR_20;
 OffsetNumber VAR_21;
 OffsetNumber VAR_22;
 ItemId VAR_23;
 BrinTuple *VAR_24;

 VAR_11 = FUNC_29(VAR_9, &VAR_12, ((void*)0));

 VAR_16 = FUNC_35(VAR_11, VAR_10);
 if (!FUNC_1(VAR_16))
 {

  FUNC_30(VAR_11);
  return 1;
 }


 VAR_17 = FUNC_28(VAR_11, VAR_10);
 VAR_19 = FUNC_3(VAR_17);
 VAR_21 = FUNC_5(VAR_11->rm_pagesPerRange, VAR_10);

 VAR_13 = (RevmapContents *) FUNC_13(VAR_19);
 VAR_14 = VAR_13->rm_tids;
 VAR_14 += VAR_21;

 if (!FUNC_9(VAR_14))
 {

  FUNC_11(VAR_17, VAR_1);
  FUNC_30(VAR_11);
  return 1;
 }

 VAR_18 = FUNC_19(VAR_9, FUNC_7(VAR_14));
 FUNC_11(VAR_18, VAR_0);
 VAR_20 = FUNC_3(VAR_18);


 if (!FUNC_0(VAR_20))
 {
  FUNC_11(VAR_17, VAR_1);
  FUNC_11(VAR_18, VAR_1);
  FUNC_30(VAR_11);
  return 0;
 }

 VAR_22 = FUNC_8(VAR_14);
 if (VAR_22 > FUNC_16(VAR_20))
  FUNC_32(VAR_3,
    (FUNC_33(VAR_2),
     FUNC_34("corrupted BRIN index: inconsistent range map")));

 VAR_23 = FUNC_15(VAR_20, VAR_22);
 if (!FUNC_6(VAR_23))
  FUNC_32(VAR_3,
    (FUNC_33(VAR_2),
     FUNC_34("corrupted BRIN index: inconsistent range map")));
 VAR_24 = (BrinTuple *) FUNC_14(VAR_20, VAR_23);
 if (FUNC_2(VAR_24))
  FUNC_32(VAR_7,
    (FUNC_34("leftover placeholder tuple detected in BRIN index \"%s\", deleting",
      FUNC_20(VAR_9))));

 FUNC_22();

 FUNC_10(&VAR_15);
 FUNC_31(VAR_17, VAR_11->rm_pagesPerRange, VAR_10,
       VAR_15);
 FUNC_17(VAR_20, VAR_22);


 FUNC_12(VAR_18);
 FUNC_12(VAR_17);

 if (FUNC_21(VAR_9))
 {
  xl_brin_desummarize VAR_25;
  XLogRecPtr VAR_26;

  VAR_25.pagesPerRange = VAR_11->rm_pagesPerRange;
  VAR_25.heapBlk = VAR_10;
  VAR_25.regOffset = VAR_22;

  FUNC_24();
  FUNC_27((char *) &VAR_25, VAR_6);
  FUNC_26(0, VAR_17, 0);
  FUNC_26(1, VAR_18, VAR_4);
  VAR_26 = FUNC_25(VAR_5, VAR_8);
  FUNC_18(VAR_19, VAR_26);
  FUNC_18(VAR_20, VAR_26);
 }

 FUNC_4();

 FUNC_23(VAR_18);
 FUNC_11(VAR_17, VAR_1);
 FUNC_30(VAR_11);

 return 1;
}
