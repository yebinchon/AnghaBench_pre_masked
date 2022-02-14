
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int held; int childLocks; } ;
typedef int PREDICATELOCKTARGETTAG ;
typedef TYPE_1__ LOCALPREDICATELOCK ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int*) ;

__attribute__((used)) static bool
FUNC_4(const PREDICATELOCKTARGETTAG *VAR_2)
{
 PREDICATELOCKTARGETTAG VAR_3,
    VAR_4,
    VAR_5;
 LOCALPREDICATELOCK *VAR_6;
 bool VAR_7,
    VAR_8;

 VAR_8 = 0;

 VAR_3 = *VAR_2;


 while (FUNC_0(&VAR_3, &VAR_4))
 {
  VAR_3 = VAR_4;
  VAR_6 = (LOCALPREDICATELOCK *) FUNC_3(VAR_1,
              &VAR_3,
              VAR_0,
              &VAR_7);
  if (!VAR_7)
  {
   VAR_6->held = 0;
   VAR_6->childLocks = 1;
  }
  else
   VAR_6->childLocks++;

  if (VAR_6->childLocks >
   FUNC_1(&VAR_3))
  {






   VAR_5 = VAR_3;
   VAR_8 = 1;
  }
 }

 if (VAR_8)
 {

  FUNC_2(&VAR_5);
  return 1;
 }
 else
  return 0;
}
