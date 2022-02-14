
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mutex {int dummy; } ;
typedef int atomic_t ;


 scalar_t__ FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;

int FUNC_4(atomic_t *VAR_0, struct mutex *VAR_1)
{

 if (FUNC_0(VAR_0, -1, 1))
  return 0;

 FUNC_2(VAR_1);
 if (!FUNC_1(VAR_0)) {

  FUNC_3(VAR_1);
  return 0;
 }

 return 1;
}
