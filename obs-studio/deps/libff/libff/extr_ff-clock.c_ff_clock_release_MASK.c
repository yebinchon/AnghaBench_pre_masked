
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_clock {int mutex; int cond; int retain; } ;


 int FUNC_0 (struct ff_clock*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ff_clock **VAR_0)
{
 if (FUNC_1(&(*VAR_0)->retain) == 0) {
  FUNC_2(&(*VAR_0)->cond);
  FUNC_3(&(*VAR_0)->mutex);
  FUNC_0(*VAR_0);
 }

 *VAR_0 = ((void*)0);
}
