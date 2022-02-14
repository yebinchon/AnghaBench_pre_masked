
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_8__ {int txns_by_base_snapshot_lsn; } ;
struct TYPE_7__ {int base_snapshot_node; int base_snapshot_lsn; int * base_snapshot; int toplevel_xid; scalar_t__ is_known_as_subxact; } ;
typedef int * Snapshot ;
typedef TYPE_1__ ReorderBufferTXN ;
typedef TYPE_2__ ReorderBuffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (TYPE_2__*,int ,int,int*,int ,int) ;
 int FUNC_4 (int *,int *) ;

void
FUNC_5(ReorderBuffer *VAR_1, TransactionId VAR_2,
        XLogRecPtr VAR_3, Snapshot VAR_4)
{
 ReorderBufferTXN *VAR_5;
 bool VAR_6;

 FUNC_1(VAR_4 != ((void*)0));





 VAR_5 = FUNC_3(VAR_1, VAR_2, 1, &VAR_6, VAR_3, 1);
 if (VAR_5->is_known_as_subxact)
  VAR_5 = FUNC_3(VAR_1, VAR_5->toplevel_xid, 0,
         ((void*)0), VAR_0, 0);
 FUNC_0(VAR_5->base_snapshot == ((void*)0));

 VAR_5->base_snapshot = VAR_4;
 VAR_5->base_snapshot_lsn = VAR_3;
 FUNC_4(&VAR_1->txns_by_base_snapshot_lsn, &VAR_5->base_snapshot_node);

 FUNC_2(VAR_1);
}
