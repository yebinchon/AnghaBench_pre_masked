
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef TYPE_1__* TableScanDesc ;
struct TYPE_9__ {int t_self; int t_tableOid; int t_len; scalar_t__ t_data; } ;
struct TYPE_8__ {int rd_id; } ;
struct TYPE_7__ {size_t rs_cindex; size_t rs_ntuples; int rs_cbuf; TYPE_5__ rs_ctup; int rs_cblock; int * rs_vistuples; } ;
struct TYPE_6__ {TYPE_3__* rs_rd; } ;
typedef int TBMIterateResult ;
typedef scalar_t__ Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef scalar_t__ HeapTupleHeader ;
typedef TYPE_2__* HeapScanDesc ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static bool
FUNC_9(TableScanDesc VAR_0,
         TBMIterateResult *VAR_1,
         TupleTableSlot *VAR_2)
{
 HeapScanDesc VAR_3 = (HeapScanDesc) VAR_0;
 OffsetNumber VAR_4;
 Page VAR_5;
 ItemId VAR_6;




 if (VAR_3->rs_cindex < 0 || VAR_3->rs_cindex >= VAR_3->rs_ntuples)
  return 0;

 VAR_4 = VAR_3->rs_vistuples[VAR_3->rs_cindex];
 VAR_5 = (Page) FUNC_1(VAR_3->rs_cbuf);
 VAR_6 = FUNC_7(VAR_5, VAR_4);
 FUNC_0(FUNC_4(VAR_6));

 VAR_3->rs_ctup.t_data = (HeapTupleHeader) FUNC_6((Page) VAR_5, VAR_6);
 VAR_3->rs_ctup.t_len = FUNC_3(VAR_6);
 VAR_3->rs_ctup.t_tableOid = VAR_0->rs_rd->rd_id;
 FUNC_5(&VAR_3->rs_ctup.t_self, VAR_3->rs_cblock, VAR_4);

 FUNC_8(VAR_0->rs_rd);





 FUNC_2(&VAR_3->rs_ctup,
        VAR_2,
        VAR_3->rs_cbuf);

 VAR_3->rs_cindex++;

 return 1;
}
