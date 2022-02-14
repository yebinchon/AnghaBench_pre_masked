
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef scalar_t__ LockAcquireResult ;
typedef int LOCKTAG ;
typedef int LOCKMODE ;
typedef int LOCALLOCK ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,int,int,int,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4(Oid VAR_1, LOCKMODE VAR_2)
{
 LOCKTAG VAR_3;
 LOCALLOCK *VAR_4;
 LockAcquireResult VAR_5;

 FUNC_3(&VAR_3, VAR_1);

 VAR_5 = FUNC_1(&VAR_3, VAR_2, 0, 0, 1, &VAR_4);
 if (VAR_5 != VAR_0)
 {
  FUNC_0();
  FUNC_2(VAR_4);
 }
}
