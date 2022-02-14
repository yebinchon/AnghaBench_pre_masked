
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int locks; } ;
typedef TYPE_1__ RecoveryLockListsEntry ;
typedef int HASH_SEQ_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,TYPE_1__*,int ,int *) ;
 int FUNC_3 (int *,int ) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void
FUNC_6(void)
{
 HASH_SEQ_STATUS VAR_3;
 RecoveryLockListsEntry *VAR_4;

 FUNC_1(FUNC_5(VAR_0), "release all standby locks");

 FUNC_3(&VAR_3, VAR_2);
 while ((VAR_4 = FUNC_4(&VAR_3)))
 {
  FUNC_0(VAR_4->locks);
  FUNC_2(VAR_2, VAR_4, VAR_1, ((void*)0));
 }
}
