
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct lock_class_key {int dummy; } ;


 int FUNC_0 (struct timer_list*) ;
 int FUNC_1 (struct timer_list*,void (*) (struct timer_list*),unsigned int,char const*,struct lock_class_key*) ;

void FUNC_2(struct timer_list *VAR_0,
      void (*VAR_1)(struct timer_list *), unsigned int VAR_2,
      const char *VAR_3, struct lock_class_key *VAR_4)
{
 FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
