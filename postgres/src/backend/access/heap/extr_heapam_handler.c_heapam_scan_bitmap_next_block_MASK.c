
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* TableScanDesc ;
struct TYPE_20__ {int rd_id; } ;
struct TYPE_19__ {int rs_ntuples; scalar_t__ rs_nblocks; scalar_t__* rs_vistuples; int rs_cbuf; scalar_t__ rs_cblock; scalar_t__ rs_cindex; } ;
struct TYPE_18__ {int t_self; int t_tableOid; int t_len; scalar_t__ t_data; } ;
struct TYPE_17__ {scalar_t__ blockno; scalar_t__ ntuples; scalar_t__* offsets; } ;
struct TYPE_16__ {TYPE_7__* rs_rd; int rs_snapshot; } ;
typedef TYPE_2__ TBMIterateResult ;
typedef int Snapshot ;
typedef scalar_t__ Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemPointerData ;
typedef int ItemId ;
typedef scalar_t__ HeapTupleHeader ;
typedef TYPE_3__ HeapTupleData ;
typedef TYPE_4__* HeapScanDesc ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,TYPE_7__*,TYPE_3__*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (TYPE_7__*,TYPE_3__*,int ) ;
 int FUNC_14 (int ,TYPE_7__*,scalar_t__) ;
 scalar_t__ FUNC_15 (int *,TYPE_7__*,int ,int ,TYPE_3__*,int *,int) ;
 int FUNC_16 (TYPE_7__*,int ) ;

__attribute__((used)) static bool
FUNC_17(TableScanDesc VAR_4,
         TBMIterateResult *VAR_5)
{
 HeapScanDesc VAR_6 = (HeapScanDesc) VAR_4;
 BlockNumber VAR_7 = VAR_5->blockno;
 Buffer VAR_8;
 Snapshot VAR_9;
 int VAR_10;

 VAR_6->rs_cindex = 0;
 VAR_6->rs_ntuples = 0;







 if (VAR_7 >= VAR_6->rs_nblocks)
  return 0;




 VAR_6->rs_cbuf = FUNC_14(VAR_6->rs_cbuf,
            VAR_4->rs_rd,
            VAR_7);
 VAR_6->rs_cblock = VAR_7;
 VAR_8 = VAR_6->rs_cbuf;
 VAR_9 = VAR_4->rs_snapshot;

 VAR_10 = 0;




 FUNC_16(VAR_4->rs_rd, VAR_8);






 FUNC_8(VAR_8, VAR_0);




 if (VAR_5->ntuples >= 0)
 {





  int VAR_11;

  for (VAR_11 = 0; VAR_11 < VAR_5->ntuples; VAR_11++)
  {
   OffsetNumber VAR_12 = VAR_5->offsets[VAR_11];
   ItemPointerData VAR_13;
   HeapTupleData VAR_14;

   FUNC_7(&VAR_13, VAR_7, VAR_12);
   if (FUNC_15(&VAR_13, VAR_4->rs_rd, VAR_8, VAR_9,
            &VAR_14, ((void*)0), 1))
    VAR_6->rs_vistuples[VAR_10++] = FUNC_6(&VAR_13);
  }
 }
 else
 {




  Page VAR_15 = (Page) FUNC_1(VAR_8);
  OffsetNumber VAR_16 = FUNC_12(VAR_15);
  OffsetNumber VAR_17;

  for (VAR_17 = VAR_2; VAR_17 <= VAR_16; VAR_17 = FUNC_9(VAR_17))
  {
   ItemId VAR_18;
   HeapTupleData VAR_19;
   bool VAR_20;

   VAR_18 = FUNC_11(VAR_15, VAR_17);
   if (!FUNC_5(VAR_18))
    continue;
   VAR_19.t_data = (HeapTupleHeader) FUNC_10((Page) VAR_15, VAR_18);
   VAR_19.t_len = FUNC_4(VAR_18);
   VAR_19.t_tableOid = VAR_4->rs_rd->rd_id;
   FUNC_7(&VAR_19.t_self, VAR_7, VAR_17);
   VAR_20 = FUNC_3(&VAR_19, VAR_9, VAR_8);
   if (VAR_20)
   {
    VAR_6->rs_vistuples[VAR_10++] = VAR_17;
    FUNC_13(VAR_4->rs_rd, &VAR_19, VAR_9);
   }
   FUNC_2(VAR_20, VAR_4->rs_rd, &VAR_19,
           VAR_8, VAR_9);
  }
 }

 FUNC_8(VAR_8, VAR_1);

 FUNC_0(VAR_10 <= VAR_3);
 VAR_6->rs_ntuples = VAR_10;

 return VAR_10 > 0;
}
