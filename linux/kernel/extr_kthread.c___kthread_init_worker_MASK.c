
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_class_key {int dummy; } ;
struct kthread_worker {int delayed_work_list; int work_list; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct lock_class_key*,char const*) ;
 int FUNC_2 (struct kthread_worker*,int ,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct kthread_worker *VAR_0,
    const char *VAR_1,
    struct lock_class_key *VAR_2)
{
 FUNC_2(VAR_0, 0, sizeof(struct kthread_worker));
 FUNC_3(&VAR_0->lock);
 FUNC_1(&VAR_0->lock, VAR_2, VAR_1);
 FUNC_0(&VAR_0->work_list);
 FUNC_0(&VAR_0->delayed_work_list);
}
