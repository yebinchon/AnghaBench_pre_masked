
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {unsigned long expires; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct timer_list*) ;

unsigned long FUNC_1(struct timer_list *VAR_1)
{
 if (!FUNC_0(VAR_1))
  return 0;

 return VAR_1->expires - VAR_0;
}
