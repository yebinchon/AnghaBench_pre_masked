
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hash_ctl ;
typedef int TransactionId ;
struct TYPE_8__ {int name; } ;
struct TYPE_11__ {TYPE_1__ data; } ;
struct TYPE_10__ {int keysize; int entrysize; int hcxt; } ;
struct TYPE_9__ {int txns_by_base_snapshot_lsn; int toplevel_by_lsn; int current_restart_decoding_lsn; scalar_t__ outbufsize; int * outbuf; int * by_txn_last_txn; int by_txn_last_xid; int by_txn; int context; int tup_context; void* txn_context; void* change_context; } ;
typedef int ReorderBufferTXNByIdEnt ;
typedef int ReorderBufferTXN ;
typedef int ReorderBufferChange ;
typedef TYPE_2__ ReorderBuffer ;
typedef int MemoryContext ;
typedef TYPE_3__ HASHCTL ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int) ;
 TYPE_7__* VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_6 (int ,char*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,TYPE_3__*,int) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;

ReorderBuffer *
FUNC_10(void)
{
 ReorderBuffer *VAR_10;
 HASHCTL VAR_11;
 MemoryContext VAR_12;

 FUNC_1(VAR_7 != ((void*)0));


 VAR_12 = FUNC_0(VAR_1,
         "ReorderBuffer",
         VAR_0);

 VAR_10 =
  (ReorderBuffer *) FUNC_3(VAR_12, sizeof(ReorderBuffer));

 FUNC_9(&VAR_11, 0, sizeof(VAR_11));

 VAR_10->context = VAR_12;

 VAR_10->change_context = FUNC_6(VAR_12,
              "Change",
              VAR_8,
              sizeof(ReorderBufferChange));

 VAR_10->txn_context = FUNC_6(VAR_12,
           "TXN",
           VAR_8,
           sizeof(ReorderBufferTXN));

 VAR_10->tup_context = FUNC_2(VAR_12,
              "Tuples",
              VAR_9);

 VAR_11.keysize = sizeof(TransactionId);
 VAR_11.entrysize = sizeof(ReorderBufferTXNByIdEnt);
 VAR_11.hcxt = VAR_10->context;

 VAR_10->by_txn = FUNC_8("ReorderBufferByXid", 1000, &VAR_11,
         VAR_4 | VAR_2 | VAR_3);

 VAR_10->by_txn_last_xid = VAR_5;
 VAR_10->by_txn_last_txn = ((void*)0);

 VAR_10->outbuf = ((void*)0);
 VAR_10->outbufsize = 0;

 VAR_10->current_restart_decoding_lsn = VAR_6;

 FUNC_7(&VAR_10->toplevel_by_lsn);
 FUNC_7(&VAR_10->txns_by_base_snapshot_lsn);






 FUNC_5(FUNC_4(VAR_7->data.name));

 return VAR_10;
}
