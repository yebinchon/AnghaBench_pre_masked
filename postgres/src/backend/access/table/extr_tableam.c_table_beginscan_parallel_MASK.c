
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32 ;
typedef int TableScanDesc ;
struct TYPE_11__ {scalar_t__ phs_relid; int phs_snapshot_off; int phs_snapshot_any; } ;
struct TYPE_10__ {TYPE_1__* rd_tableam; } ;
struct TYPE_9__ {int (* scan_begin ) (TYPE_2__*,int ,int ,int *,TYPE_3__*,int) ;} ;
typedef int Snapshot ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__* ParallelTableScanDesc ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*,int ,int ,int *,TYPE_3__*,int) ;

TableScanDesc
FUNC_5(Relation VAR_6, ParallelTableScanDesc VAR_7)
{
 Snapshot VAR_8;
 uint32 VAR_9 = VAR_4 |
 VAR_1 | VAR_2 | VAR_0;

 FUNC_0(FUNC_2(VAR_6) == VAR_7->phs_relid);

 if (!VAR_7->phs_snapshot_any)
 {

  VAR_8 = FUNC_3((char *) VAR_7 +
           VAR_7->phs_snapshot_off);
  FUNC_1(VAR_8);
  VAR_9 |= VAR_3;
 }
 else
 {

  VAR_8 = VAR_5;
 }

 return VAR_6->rd_tableam->scan_begin(VAR_6, VAR_8, 0, ((void*)0),
           VAR_7, VAR_9);
}
