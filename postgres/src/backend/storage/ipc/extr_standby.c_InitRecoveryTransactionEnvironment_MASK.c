
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int hash_ctl ;
struct TYPE_6__ {int localTransactionId; int backendId; } ;
typedef TYPE_1__ VirtualTransactionId ;
typedef int TransactionId ;
struct TYPE_7__ {int keysize; int entrysize; } ;
typedef int RecoveryLockListsEntry ;
typedef TYPE_2__ HASHCTL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (char*,int,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int VAR_5 ;

void
FUNC_5(void)
{
 VirtualTransactionId VAR_6;
 HASHCTL VAR_7;





 FUNC_4(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.keysize = sizeof(TransactionId);
 VAR_7.entrysize = sizeof(RecoveryLockListsEntry);
 VAR_3 = FUNC_3("RecoveryLockLists",
         64,
         &VAR_7,
         VAR_1 | VAR_0);







 FUNC_1(1);
 VAR_6.backendId = VAR_2;
 VAR_6.localTransactionId = FUNC_0();
 FUNC_2(VAR_6);

 VAR_5 = VAR_4;
}
