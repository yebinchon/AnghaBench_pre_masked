
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_3__* TableScanDesc ;
struct TYPE_13__ {int * t_data; } ;
struct TYPE_10__ {int rs_flags; int rs_rd; int rs_key; int rs_nkeys; } ;
struct TYPE_14__ {TYPE_4__ rs_ctup; TYPE_1__ rs_base; } ;
struct TYPE_12__ {TYPE_2__* rs_rd; } ;
struct TYPE_11__ {scalar_t__ rd_tableam; } ;
typedef int ScanDirection ;
typedef TYPE_4__* HeapTuple ;
typedef TYPE_5__* HeapScanDesc ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

HeapTuple
FUNC_8(TableScanDesc VAR_6, ScanDirection VAR_7)
{
 HeapScanDesc VAR_8 = (HeapScanDesc) VAR_6;
 if (FUNC_7(VAR_6->rs_rd->rd_tableam != FUNC_0()))
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("only heap AM is supported")));



 VAR_2;

 if (VAR_8->rs_base.rs_flags & VAR_5)
  FUNC_5(VAR_8, VAR_7,
       VAR_8->rs_base.rs_nkeys, VAR_8->rs_base.rs_key);
 else
  FUNC_4(VAR_8, VAR_7,
       VAR_8->rs_base.rs_nkeys, VAR_8->rs_base.rs_key);

 if (VAR_8->rs_ctup.t_data == ((void*)0))
 {
  VAR_3;
  return ((void*)0);
 }





 VAR_4;

 FUNC_6(VAR_8->rs_base.rs_rd);

 return &VAR_8->rs_ctup;
}
