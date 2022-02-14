
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef TYPE_2__* TableScanDesc ;
struct TYPE_11__ {int * t_data; } ;
struct TYPE_8__ {int rs_rd; } ;
struct TYPE_10__ {int rs_cbuf; TYPE_7__ rs_ctup; TYPE_1__ rs_base; } ;
struct TYPE_9__ {int rs_flags; int rs_key; int rs_nkeys; } ;
typedef int ScanDirection ;
typedef TYPE_3__* HeapScanDesc ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_7__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_4 (int ) ;

bool
FUNC_5(TableScanDesc VAR_4, ScanDirection VAR_5, TupleTableSlot *VAR_6)
{
 HeapScanDesc VAR_7 = (HeapScanDesc) VAR_4;



 VAR_0;

 if (VAR_4->rs_flags & VAR_3)
  FUNC_3(VAR_7, VAR_5, VAR_4->rs_nkeys, VAR_4->rs_key);
 else
  FUNC_2(VAR_7, VAR_5, VAR_4->rs_nkeys, VAR_4->rs_key);

 if (VAR_7->rs_ctup.t_data == ((void*)0))
 {
  VAR_1;
  FUNC_0(VAR_6);
  return 0;
 }





 VAR_2;

 FUNC_4(VAR_7->rs_base.rs_rd);

 FUNC_1(&VAR_7->rs_ctup, VAR_6,
        VAR_7->rs_cbuf);
 return 1;
}
