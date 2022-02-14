
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_14__ {int table_len; int free_space; int dead_tuple_count; int dead_tuple_len; int tuple_count; int tuple_len; int member_0; } ;
typedef TYPE_2__ pgstattuple_type ;
typedef scalar_t__ TableScanDesc ;
struct TYPE_17__ {scalar_t__ rs_nblocks; int rs_strategy; int rs_cbuf; } ;
struct TYPE_16__ {int t_self; scalar_t__ t_len; } ;
struct TYPE_15__ {TYPE_1__* rd_rel; } ;
struct TYPE_13__ {scalar_t__ relam; } ;
typedef int SnapshotData ;
typedef TYPE_3__* Relation ;
typedef int Page ;
typedef TYPE_4__* HeapTuple ;
typedef TYPE_5__* HeapScanDesc ;
typedef int FunctionCallInfo ;
typedef int Datum ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_4__*,int *,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_9 ;
 int FUNC_7 (TYPE_3__*,int ,scalar_t__,int ,int ) ;
 int VAR_10 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 TYPE_4__* FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_15 (TYPE_3__*,int ,int ,int *,int,int) ;
 int FUNC_16 (scalar_t__) ;

__attribute__((used)) static Datum
FUNC_17(Relation VAR_11, FunctionCallInfo VAR_12)
{
 TableScanDesc VAR_13;
 HeapScanDesc VAR_14;
 HeapTuple VAR_15;
 BlockNumber VAR_16;
 BlockNumber VAR_17 = 0;
 BlockNumber VAR_18;
 Buffer VAR_19;
 pgstattuple_type VAR_20 = {0};
 SnapshotData VAR_21;

 if (VAR_11->rd_rel->relam != VAR_7)
  FUNC_10(VAR_5,
    (FUNC_11(VAR_4),
     FUNC_12("only heap AM is supported")));


 VAR_13 = FUNC_15(VAR_11, VAR_10, 0, ((void*)0), 1, 0);
 VAR_14 = (HeapScanDesc) VAR_13;

 FUNC_3(VAR_21);

 VAR_16 = VAR_14->rs_nblocks;


 while ((VAR_15 = FUNC_13(VAR_13, VAR_6)) != ((void*)0))
 {
  FUNC_1();


  FUNC_5(VAR_14->rs_cbuf, VAR_2);

  if (FUNC_2(VAR_15, &VAR_21, VAR_14->rs_cbuf))
  {
   VAR_20.tuple_len += VAR_15->t_len;
   VAR_20.tuple_count++;
  }
  else
  {
   VAR_20.dead_tuple_len += VAR_15->t_len;
   VAR_20.dead_tuple_count++;
  }

  FUNC_5(VAR_14->rs_cbuf, VAR_3);







  VAR_18 = FUNC_4(&VAR_15->t_self);

  while (VAR_17 <= VAR_18)
  {
   FUNC_1();

   VAR_19 = FUNC_7(VAR_11, VAR_8, VAR_17,
          VAR_9, VAR_14->rs_strategy);
   FUNC_5(VAR_19, VAR_2);
   VAR_20.free_space += FUNC_6((Page) FUNC_0(VAR_19));
   FUNC_8(VAR_19);
   VAR_17++;
  }
 }

 while (VAR_17 < VAR_16)
 {
  FUNC_1();

  VAR_19 = FUNC_7(VAR_11, VAR_8, VAR_17,
         VAR_9, VAR_14->rs_strategy);
  FUNC_5(VAR_19, VAR_2);
  VAR_20.free_space += FUNC_6((Page) FUNC_0(VAR_19));
  FUNC_8(VAR_19);
  VAR_17++;
 }

 FUNC_16(VAR_13);
 FUNC_14(VAR_11, VAR_0);

 VAR_20.table_len = (uint64) VAR_16 * VAR_1;

 return FUNC_9(&VAR_20, VAR_12);
}
