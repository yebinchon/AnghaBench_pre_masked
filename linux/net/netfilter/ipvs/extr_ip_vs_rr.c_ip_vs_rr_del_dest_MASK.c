
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {TYPE_1__* next; } ;
struct ip_vs_service {int sched_lock; scalar_t__ sched_data; } ;
struct ip_vs_dest {struct list_head n_list; } ;
struct TYPE_2__ {scalar_t__ prev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ip_vs_service *VAR_0, struct ip_vs_dest *VAR_1)
{
 struct list_head *VAR_2;

 FUNC_0(&VAR_0->sched_lock);
 VAR_2 = (struct list_head *) VAR_0->sched_data;



 if (VAR_2 == &VAR_1->n_list)
  VAR_0->sched_data = VAR_2->next->prev;
 FUNC_1(&VAR_0->sched_lock);
 return 0;
}
