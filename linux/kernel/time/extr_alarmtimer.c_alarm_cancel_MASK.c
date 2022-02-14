
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alarm {int timer; } ;


 int FUNC_0 (struct alarm*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct alarm *VAR_0)
{
 for (;;) {
  int VAR_1 = FUNC_0(VAR_0);
  if (VAR_1 >= 0)
   return VAR_1;
  FUNC_1(&VAR_0->timer);
 }
}
