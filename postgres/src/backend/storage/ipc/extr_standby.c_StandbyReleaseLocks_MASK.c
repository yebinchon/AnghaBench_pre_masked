
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int locks; } ;
typedef TYPE_1__ TransactionId ;
typedef TYPE_1__ RecoveryLockListsEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__) ;
 TYPE_1__* FUNC_3 (int ,TYPE_1__*,int ,int *) ;

__attribute__((used)) static void
FUNC_4(TransactionId VAR_3)
{
 RecoveryLockListsEntry *VAR_4;

 if (FUNC_2(VAR_3))
 {
  if ((VAR_4 = FUNC_3(VAR_2, &VAR_3, VAR_0, ((void*)0))))
  {
   FUNC_1(VAR_4->locks);
   FUNC_3(VAR_2, VAR_4, VAR_1, ((void*)0));
  }
 }
 else
  FUNC_0();
}
