
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_ipc {int disable_ipc_tx; int tx_mutex; } ;
struct snd_sof_dev {struct snd_sof_ipc* ipc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct snd_sof_dev *VAR_0)
{
 struct snd_sof_ipc *VAR_1 = VAR_0->ipc;


 FUNC_0(&VAR_1->tx_mutex);
 VAR_1->disable_ipc_tx = 1;
 FUNC_1(&VAR_1->tx_mutex);
}
