
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ts_id; } ;
typedef TYPE_1__ xl_tblspc_drop_rec ;
typedef int TableScanDesc ;
struct TYPE_12__ {char* tablespacename; int missing_ok; } ;
struct TYPE_11__ {scalar_t__ oid; } ;
struct TYPE_10__ {int t_self; } ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_tablespace ;
typedef TYPE_4__ DropTableSpaceStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 () ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_14 ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,scalar_t__,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_11 (int) ;
 int VAR_20 ;
 int FUNC_12 (int *,int ,int ,int ,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (int ,int ,char*) ;
 int FUNC_17 (int ,scalar_t__,int ) ;
 int FUNC_18 (scalar_t__,int) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*,...) ;
 TYPE_2__* FUNC_22 (int ,int ) ;
 int FUNC_23 (scalar_t__,int ) ;
 int FUNC_24 (int ,int,int *) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ,int ) ;

void
FUNC_28(DropTableSpaceStmt *VAR_24)
{
 FUNC_19(VAR_11,
   (FUNC_20(VAR_8),
    FUNC_21("tablespaces are not supported on this platform")));

}
