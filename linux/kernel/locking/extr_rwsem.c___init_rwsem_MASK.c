
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_semaphore {int osq; int owner; int wait_list; int wait_lock; int count; struct rw_semaphore* magic; int dep_map; } ;
struct lock_class_key {int dummy; } ;


 int FUNC_0 (int *) ;
 long VAR_0 ;
 int FUNC_1 (int *,long) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (int *,char const*,struct lock_class_key*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct rw_semaphore *VAR_1, const char *VAR_2,
    struct lock_class_key *VAR_3)
{
 FUNC_1(&VAR_1->count, VAR_0);
 FUNC_5(&VAR_1->wait_lock);
 FUNC_0(&VAR_1->wait_list);
 FUNC_1(&VAR_1->owner, 0L);



}
