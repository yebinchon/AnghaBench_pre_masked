
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_generic_ipc {int empty_list; } ;
struct ipc_message {int complete; int waitq; int list; int wait; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct sst_generic_ipc *VAR_0,
 struct ipc_message *VAR_1)
{
 VAR_1->complete = 1;

 if (!VAR_1->wait)
  FUNC_0(&VAR_1->list, &VAR_0->empty_list);
 else
  FUNC_1(&VAR_1->waitq);
}
