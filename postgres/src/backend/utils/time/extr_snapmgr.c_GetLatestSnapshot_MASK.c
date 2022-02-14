
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Snapshot ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,char*) ;

Snapshot
FUNC_6(void)
{




 if (FUNC_4())
  FUNC_5(VAR_0,
    "cannot update SecondarySnapshot during a parallel operation");





 FUNC_0(!FUNC_3());


 if (!VAR_1)
  return FUNC_2();

 VAR_2 = FUNC_1(&VAR_3);

 return VAR_2;
}
