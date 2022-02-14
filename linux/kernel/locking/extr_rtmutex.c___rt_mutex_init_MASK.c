
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_mutex {int waiters; int wait_lock; int * owner; } ;
struct lock_class_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt_mutex*,char const*,struct lock_class_key*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct rt_mutex *VAR_1, const char *VAR_2,
       struct lock_class_key *VAR_3)
{
 VAR_1->owner = ((void*)0);
 FUNC_1(&VAR_1->wait_lock);
 VAR_1->waiters = VAR_0;

 if (VAR_2 && VAR_3)
  FUNC_0(VAR_1, VAR_2, VAR_3);
}
