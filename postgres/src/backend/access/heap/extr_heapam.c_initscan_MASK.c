
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int rs_flags; int rs_nkeys; int rs_rd; int rs_key; TYPE_1__* rs_parallel; } ;
struct TYPE_8__ {int t_self; int * t_data; } ;
struct TYPE_11__ {int rs_nblocks; int rs_inited; TYPE_3__ rs_base; void* rs_cblock; int rs_cbuf; TYPE_2__ rs_ctup; void* rs_numblocks; scalar_t__ rs_startblock; int * rs_strategy; } ;
struct TYPE_10__ {int phs_nblocks; } ;
struct TYPE_7__ {scalar_t__ phs_syncscan; } ;
typedef int ScanKeyData ;
typedef int * ScanKey ;
typedef TYPE_4__* ParallelBlockTableScanDesc ;
typedef TYPE_5__* HeapScanDesc ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_8(HeapScanDesc VAR_8, ScanKey VAR_9, bool VAR_10)
{
 ParallelBlockTableScanDesc VAR_11 = ((void*)0);
 bool VAR_12;
 bool VAR_13;
 if (VAR_8->rs_base.rs_parallel != ((void*)0))
 {
  VAR_11 = (ParallelBlockTableScanDesc) VAR_8->rs_base.rs_parallel;
  VAR_8->rs_nblocks = VAR_11->phs_nblocks;
 }
 else
  VAR_8->rs_nblocks = FUNC_3(VAR_8->rs_base.rs_rd);
 if (!FUNC_4(VAR_8->rs_base.rs_rd) &&
  VAR_8->rs_nblocks > VAR_3 / 4)
 {
  VAR_12 = (VAR_8->rs_base.rs_flags & VAR_4) != 0;
  VAR_13 = (VAR_8->rs_base.rs_flags & VAR_5) != 0;
 }
 else
  VAR_12 = VAR_13 = 0;

 if (VAR_12)
 {

  if (VAR_8->rs_strategy == ((void*)0))
   VAR_8->rs_strategy = FUNC_1(VAR_0);
 }
 else
 {
  if (VAR_8->rs_strategy != ((void*)0))
   FUNC_0(VAR_8->rs_strategy);
  VAR_8->rs_strategy = ((void*)0);
 }

 if (VAR_8->rs_base.rs_parallel != ((void*)0))
 {

  if (VAR_8->rs_base.rs_parallel->phs_syncscan)
   VAR_8->rs_base.rs_flags |= VAR_5;
  else
   VAR_8->rs_base.rs_flags &= ~VAR_5;
 }
 else if (VAR_10)
 {





  if (VAR_13 && VAR_7)
   VAR_8->rs_base.rs_flags |= VAR_5;
  else
   VAR_8->rs_base.rs_flags &= ~VAR_5;
 }
 else if (VAR_13 && VAR_7)
 {
  VAR_8->rs_base.rs_flags |= VAR_5;
  VAR_8->rs_startblock = FUNC_7(VAR_8->rs_base.rs_rd, VAR_8->rs_nblocks);
 }
 else
 {
  VAR_8->rs_base.rs_flags &= ~VAR_5;
  VAR_8->rs_startblock = 0;
 }

 VAR_8->rs_numblocks = VAR_1;
 VAR_8->rs_inited = 0;
 VAR_8->rs_ctup.t_data = ((void*)0);
 FUNC_2(&VAR_8->rs_ctup.t_self);
 VAR_8->rs_cbuf = VAR_2;
 VAR_8->rs_cblock = VAR_1;






 if (VAR_9 != ((void*)0))
  FUNC_5(VAR_8->rs_base.rs_key, VAR_9, VAR_8->rs_base.rs_nkeys * sizeof(ScanKeyData));






 if (VAR_8->rs_base.rs_flags & VAR_6)
  FUNC_6(VAR_8->rs_base.rs_rd);
}
