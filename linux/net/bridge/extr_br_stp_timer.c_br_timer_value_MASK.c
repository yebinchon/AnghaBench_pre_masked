
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {scalar_t__ expires; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct timer_list const*) ;

unsigned long FUNC_2(const struct timer_list *VAR_1)
{
 return FUNC_1(VAR_1)
  ? FUNC_0(VAR_1->expires - VAR_0) : 0;
}
