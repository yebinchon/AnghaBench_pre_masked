
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
typedef scalar_t__ TransactionId ;
struct TYPE_11__ {scalar_t__ by_txn_last_xid; TYPE_2__* by_txn_last_txn; int toplevel_by_lsn; int current_restart_decoding_lsn; int by_txn; } ;
struct TYPE_10__ {int node; int restart_decoding_lsn; scalar_t__ first_lsn; scalar_t__ xid; } ;
struct TYPE_9__ {TYPE_2__* txn; } ;
typedef TYPE_1__ ReorderBufferTXNByIdEnt ;
typedef TYPE_2__ ReorderBufferTXN ;
typedef TYPE_3__ ReorderBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int ,void*,int ,int*) ;

__attribute__((used)) static ReorderBufferTXN *
FUNC_6(ReorderBuffer *VAR_3, TransactionId VAR_4, bool VAR_5,
       bool *VAR_6, XLogRecPtr VAR_7, bool VAR_8)
{
 ReorderBufferTXN *VAR_9;
 ReorderBufferTXNByIdEnt *VAR_10;
 bool VAR_11;

 FUNC_0(FUNC_3(VAR_4));




 if (FUNC_3(VAR_3->by_txn_last_xid) &&
  VAR_3->by_txn_last_xid == VAR_4)
 {
  VAR_9 = VAR_3->by_txn_last_txn;

  if (VAR_9 != ((void*)0))
  {

   if (VAR_6)
    *VAR_6 = 0;
   return VAR_9;
  }





  if (!VAR_5)
   return ((void*)0);

 }







 VAR_10 = (ReorderBufferTXNByIdEnt *)
  FUNC_5(VAR_3->by_txn,
     (void *) &VAR_4,
     VAR_5 ? VAR_0 : VAR_1,
     &VAR_11);
 if (VAR_11)
  VAR_9 = VAR_10->txn;
 else if (VAR_5)
 {

  FUNC_0(VAR_10 != ((void*)0));
  FUNC_0(VAR_7 != VAR_2);

  VAR_10->txn = FUNC_2(VAR_3);
  VAR_10->txn->xid = VAR_4;
  VAR_9 = VAR_10->txn;
  VAR_9->first_lsn = VAR_7;
  VAR_9->restart_decoding_lsn = VAR_3->current_restart_decoding_lsn;

  if (VAR_8)
  {
   FUNC_4(&VAR_3->toplevel_by_lsn, &VAR_9->node);
   FUNC_1(VAR_3);
  }
 }
 else
  VAR_9 = ((void*)0);


 VAR_3->by_txn_last_xid = VAR_4;
 VAR_3->by_txn_last_txn = VAR_9;

 if (VAR_6)
  *VAR_6 = !VAR_11;

 FUNC_0(!VAR_5 || VAR_9 != ((void*)0));
 return VAR_9;
}
