
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ by_txn_last_xid; int * by_txn_last_txn; } ;
struct TYPE_6__ {scalar_t__ xid; struct TYPE_6__* invalidations; int * tuplecid_hash; } ;
typedef TYPE_1__ ReorderBufferTXN ;
typedef TYPE_2__ ReorderBuffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(ReorderBuffer *VAR_1, ReorderBufferTXN *VAR_2)
{

 if (VAR_1->by_txn_last_xid == VAR_2->xid)
 {
  VAR_1->by_txn_last_xid = VAR_0;
  VAR_1->by_txn_last_txn = ((void*)0);
 }



 if (VAR_2->tuplecid_hash != ((void*)0))
 {
  FUNC_0(VAR_2->tuplecid_hash);
  VAR_2->tuplecid_hash = ((void*)0);
 }

 if (VAR_2->invalidations)
 {
  FUNC_1(VAR_2->invalidations);
  VAR_2->invalidations = ((void*)0);
 }

 FUNC_1(VAR_2);
}
