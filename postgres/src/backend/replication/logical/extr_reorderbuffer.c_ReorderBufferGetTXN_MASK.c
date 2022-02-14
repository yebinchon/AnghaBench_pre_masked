
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int txn_context; } ;
struct TYPE_6__ {int subtxns; int tuplecids; int changes; } ;
typedef TYPE_1__ ReorderBufferTXN ;
typedef TYPE_2__ ReorderBuffer ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static ReorderBufferTXN *
FUNC_3(ReorderBuffer *VAR_0)
{
 ReorderBufferTXN *VAR_1;

 VAR_1 = (ReorderBufferTXN *)
  FUNC_0(VAR_0->txn_context, sizeof(ReorderBufferTXN));

 FUNC_2(VAR_1, 0, sizeof(ReorderBufferTXN));

 FUNC_1(&VAR_1->changes);
 FUNC_1(&VAR_1->tuplecids);
 FUNC_1(&VAR_1->subtxns);

 return VAR_1;
}
