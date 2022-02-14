
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sst_generic_ipc {TYPE_3__* msg; int empty_list; int rx_data_max_size; int tx_data_max_size; } ;
struct ipc_message {int dummy; } ;
struct TYPE_6__ {TYPE_3__* data; } ;
struct TYPE_5__ {TYPE_3__* data; } ;
struct TYPE_7__ {TYPE_2__ rx; TYPE_1__ tx; int list; int waitq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int,int,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct sst_generic_ipc *VAR_3)
{
 int VAR_4;

 VAR_3->msg = FUNC_1(VAR_2, sizeof(struct ipc_message),
      VAR_1);
 if (VAR_3->msg == ((void*)0))
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3->msg[VAR_4].tx.data = FUNC_3(VAR_3->tx_data_max_size, VAR_1);
  if (VAR_3->msg[VAR_4].tx.data == ((void*)0))
   goto free_mem;

  VAR_3->msg[VAR_4].rx.data = FUNC_3(VAR_3->rx_data_max_size, VAR_1);
  if (VAR_3->msg[VAR_4].rx.data == ((void*)0)) {
   FUNC_2(VAR_3->msg[VAR_4].tx.data);
   goto free_mem;
  }

  FUNC_0(&VAR_3->msg[VAR_4].waitq);
  FUNC_4(&VAR_3->msg[VAR_4].list, &VAR_3->empty_list);
 }

 return 0;

free_mem:
 while (VAR_4 > 0) {
  FUNC_2(VAR_3->msg[VAR_4-1].tx.data);
  FUNC_2(VAR_3->msg[VAR_4-1].rx.data);
  --VAR_4;
 }
 FUNC_2(VAR_3->msg);

 return -VAR_0;
}
