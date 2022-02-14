
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_5__ {int is_known_as_subxact; scalar_t__ nsubtxns; int node; int subtxns; int toplevel_xid; } ;
typedef TYPE_1__ ReorderBufferTXN ;
typedef int ReorderBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int *,int ,int,int*,int ,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,char*) ;

void
FUNC_7(ReorderBuffer *VAR_1, TransactionId VAR_2,
       TransactionId VAR_3, XLogRecPtr VAR_4)
{
 ReorderBufferTXN *VAR_5;
 ReorderBufferTXN *VAR_6;
 bool VAR_7;
 bool VAR_8;

 VAR_5 = FUNC_2(VAR_1, VAR_2, 1, &VAR_7, VAR_4, 1);
 VAR_6 = FUNC_2(VAR_1, VAR_3, 1, &VAR_8, VAR_4, 0);

 if (VAR_7 && !VAR_8)
  FUNC_6(VAR_0, "subtransaction logged without previous top-level txn record");

 if (!VAR_8)
 {
  if (VAR_6->is_known_as_subxact)
  {

   return;
  }
  else
  {





   FUNC_4(&VAR_6->node);
  }
 }

 VAR_6->is_known_as_subxact = 1;
 VAR_6->toplevel_xid = VAR_2;
 FUNC_0(VAR_6->nsubtxns == 0);


 FUNC_5(&VAR_5->subtxns, &VAR_6->node);
 VAR_5->nsubtxns++;


 FUNC_3(VAR_5, VAR_6);


 FUNC_1(VAR_1);
}
