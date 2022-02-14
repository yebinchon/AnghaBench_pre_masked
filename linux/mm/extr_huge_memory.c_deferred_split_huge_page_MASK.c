
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct mem_cgroup {int dummy; } ;
struct deferred_split {int split_queue_lock; int split_queue_len; int split_queue; } ;
struct TYPE_4__ {struct mem_cgroup* mem_cgroup; } ;
struct TYPE_3__ {int id; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int FUNC_2 (int,struct page*) ;
 TYPE_2__* FUNC_3 (struct page*) ;
 int FUNC_4 (int ) ;
 TYPE_1__ VAR_1 ;
 struct deferred_split* FUNC_5 (struct page*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct mem_cgroup*,int ,int ) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

void FUNC_13(struct page *VAR_2)
{
 struct deferred_split *VAR_3 = FUNC_5(VAR_2);



 unsigned long VAR_4;

 FUNC_2(!FUNC_1(VAR_2), VAR_2);
 if (FUNC_0(VAR_2))
  return;

 FUNC_11(&VAR_3->split_queue_lock, VAR_4);
 if (FUNC_7(FUNC_9(VAR_2))) {
  FUNC_4(VAR_0);
  FUNC_6(FUNC_9(VAR_2), &VAR_3->split_queue);
  VAR_3->split_queue_len++;





 }
 FUNC_12(&VAR_3->split_queue_lock, VAR_4);
}
