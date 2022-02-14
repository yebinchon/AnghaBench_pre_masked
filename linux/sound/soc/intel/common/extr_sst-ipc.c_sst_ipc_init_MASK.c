
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_generic_ipc {int kwork; int wait_txq; int empty_list; int rx_list; int tx_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct sst_generic_ipc*) ;

int FUNC_4(struct sst_generic_ipc *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_2->tx_list);
 FUNC_0(&VAR_2->rx_list);
 FUNC_0(&VAR_2->empty_list);
 FUNC_2(&VAR_2->wait_txq);

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 < 0)
  return -VAR_0;

 FUNC_1(&VAR_2->kwork, VAR_1);
 return 0;
}
