
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_sof_ipc_msg {int ipc_complete; int waitq; } ;
struct snd_sof_dev {int dev; TYPE_1__* ipc; } ;
struct TYPE_2__ {struct snd_sof_ipc_msg msg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct snd_sof_dev *VAR_1, u32 VAR_2)
{
 struct snd_sof_ipc_msg *VAR_3 = &VAR_1->ipc->msg;

 if (VAR_3->ipc_complete) {
  FUNC_0(VAR_1->dev, "error: no reply expected, received 0x%x",
   VAR_2);
  return -VAR_0;
 }


 VAR_3->ipc_complete = 1;
 FUNC_1(&VAR_3->waitq);

 return 0;
}
