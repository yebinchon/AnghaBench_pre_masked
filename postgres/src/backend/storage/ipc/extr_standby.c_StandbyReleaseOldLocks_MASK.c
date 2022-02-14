
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_4__ {int locks; int xid; } ;
typedef TYPE_1__ RecoveryLockListsEntry ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_1__*,int ,int *) ;
 int FUNC_6 (int *,int ) ;
 TYPE_1__* FUNC_7 (int *) ;

void
FUNC_8(TransactionId VAR_2)
{
 HASH_SEQ_STATUS VAR_3;
 RecoveryLockListsEntry *VAR_4;

 FUNC_6(&VAR_3, VAR_1);
 while ((VAR_4 = FUNC_7(&VAR_3)))
 {
  FUNC_0(FUNC_3(VAR_4->xid));


  if (FUNC_2(VAR_4->xid))
   continue;


  if (!FUNC_4(VAR_4->xid, VAR_2))
   continue;


  FUNC_1(VAR_4->locks);
  FUNC_5(VAR_1, VAR_4, VAR_0, ((void*)0));
 }
}
