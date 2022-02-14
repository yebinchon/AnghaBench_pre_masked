
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mutex {int osq; int wait_list; int wait_lock; int owner; } ;
struct lock_class_key {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct mutex*,char const*,struct lock_class_key*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct mutex *VAR_0, const char *VAR_1, struct lock_class_key *VAR_2)
{
 FUNC_1(&VAR_0->owner, 0);
 FUNC_4(&VAR_0->wait_lock);
 FUNC_0(&VAR_0->wait_list);




 FUNC_2(VAR_0, VAR_1, VAR_2);
}
