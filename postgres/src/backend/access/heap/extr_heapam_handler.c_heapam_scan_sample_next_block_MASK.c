
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ (* NextSampleBlock ) (TYPE_3__*,scalar_t__) ;} ;
typedef TYPE_1__ TsmRoutine ;
typedef TYPE_2__* TableScanDesc ;
struct TYPE_12__ {scalar_t__ rs_nblocks; scalar_t__ rs_cblock; int rs_inited; scalar_t__ rs_startblock; int rs_cbuf; } ;
struct TYPE_11__ {TYPE_1__* tsmroutine; } ;
struct TYPE_10__ {int rs_flags; int rs_rd; } ;
typedef TYPE_3__ SampleScanState ;
typedef TYPE_4__* HeapScanDesc ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static bool
FUNC_7(TableScanDesc VAR_3, SampleScanState *VAR_4)
{
 HeapScanDesc VAR_5 = (HeapScanDesc) VAR_3;
 TsmRoutine *VAR_6 = VAR_4->tsmroutine;
 BlockNumber VAR_7;


 if (VAR_5->rs_nblocks == 0)
  return 0;

 if (VAR_6->NextSampleBlock)
 {
  VAR_7 = VAR_6->NextSampleBlock(VAR_4, VAR_5->rs_nblocks);
  VAR_5->rs_cblock = VAR_7;
 }
 else
 {


  if (VAR_5->rs_cblock == VAR_0)
  {
   FUNC_0(!VAR_5->rs_inited);
   VAR_7 = VAR_5->rs_startblock;
  }
  else
  {
   FUNC_0(VAR_5->rs_inited);

   VAR_7 = VAR_5->rs_cblock + 1;

   if (VAR_7 >= VAR_5->rs_nblocks)
   {

    VAR_7 = 0;
   }
   if (VAR_3->rs_flags & VAR_2)
    FUNC_5(VAR_3->rs_rd, VAR_7);

   if (VAR_7 == VAR_5->rs_startblock)
   {
    VAR_7 = VAR_0;
   }
  }
 }

 if (!FUNC_1(VAR_7))
 {
  if (FUNC_2(VAR_5->rs_cbuf))
   FUNC_3(VAR_5->rs_cbuf);
  VAR_5->rs_cbuf = VAR_1;
  VAR_5->rs_cblock = VAR_0;
  VAR_5->rs_inited = 0;

  return 0;
 }

 FUNC_4(VAR_3, VAR_7);
 VAR_5->rs_inited = 1;

 return 1;
}
