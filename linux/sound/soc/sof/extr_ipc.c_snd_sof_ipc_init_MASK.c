
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_ipc_msg {int ipc_complete; int waitq; void* reply_data; void* msg_data; } ;
struct snd_sof_ipc {struct snd_sof_ipc_msg msg; struct snd_sof_dev* sdev; int tx_mutex; } ;
struct snd_sof_dev {int dev; } ;
struct TYPE_2__ {int fw_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct snd_sof_dev*) ;

struct snd_sof_ipc *FUNC_5(struct snd_sof_dev *VAR_2)
{
 struct snd_sof_ipc *VAR_3;
 struct snd_sof_ipc_msg *VAR_4;


 if (!FUNC_4(VAR_2)->fw_ready) {
  FUNC_0(VAR_2->dev, "error: ipc mandatory ops not defined\n");
  return ((void*)0);
 }

 VAR_3 = FUNC_1(VAR_2->dev, sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_3(&VAR_3->tx_mutex);
 VAR_3->sdev = VAR_2;
 VAR_4 = &VAR_3->msg;


 VAR_4->ipc_complete = 1;


 VAR_4->msg_data = FUNC_1(VAR_2->dev, VAR_1,
         VAR_0);
 if (!VAR_4->msg_data)
  return ((void*)0);

 VAR_4->reply_data = FUNC_1(VAR_2->dev, VAR_1,
           VAR_0);
 if (!VAR_4->reply_data)
  return ((void*)0);

 FUNC_2(&VAR_4->waitq);

 return VAR_3;
}
