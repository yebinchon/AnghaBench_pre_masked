
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
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ,int,int,int,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

bool
FUNC_4(Oid VAR_2, LOCKMODE VAR_3)
{
 LOCKTAG VAR_4;
 LOCALLOCK *VAR_5;
 LockAcquireResult VAR_6;

 FUNC_3(&VAR_4, VAR_2);

 VAR_6 = FUNC_1(&VAR_4, VAR_3, 0, 1, 1, &VAR_5);

 if (VAR_6 == VAR_1)
  return 0;





 if (VAR_6 != VAR_0)
 {
  FUNC_0();
  FUNC_2(VAR_5);
 }

 return 1;
}
