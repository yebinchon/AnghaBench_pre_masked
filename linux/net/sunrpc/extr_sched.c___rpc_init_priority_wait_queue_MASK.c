
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; int dwork; scalar_t__ expires; } ;
struct rpc_wait_queue {unsigned char maxpriority; TYPE_1__ timer_list; scalar_t__ qlen; int * tasks; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct rpc_wait_queue*,char const*) ;
 int FUNC_4 (struct rpc_wait_queue*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct rpc_wait_queue *VAR_1, const char *VAR_2, unsigned char VAR_3)
{
 int VAR_4;

 FUNC_5(&VAR_1->lock);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1->tasks); VAR_4++)
  FUNC_2(&VAR_1->tasks[VAR_4]);
 VAR_1->maxpriority = VAR_3 - 1;
 FUNC_4(VAR_1);
 VAR_1->qlen = 0;
 VAR_1->timer_list.expires = 0;
 FUNC_1(&VAR_1->timer_list.dwork, VAR_0);
 FUNC_2(&VAR_1->timer_list.list);
 FUNC_3(VAR_1, VAR_2);
}
