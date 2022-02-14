
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sof_ipc_cmd_hdr {int cmd; int size; } ;
struct snd_sof_ipc_msg {int reply_error; int reply_size; int reply_data; int ipc_complete; int waitq; struct sof_ipc_cmd_hdr* msg_data; } ;
struct snd_sof_ipc {struct snd_sof_dev* sdev; } ;
struct snd_sof_dev {int dev; int ipc_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (void*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_sof_dev*,int) ;
 int FUNC_5 (struct snd_sof_dev*) ;
 int FUNC_6 (struct snd_sof_dev*) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_sof_ipc *VAR_3, struct snd_sof_ipc_msg *VAR_4,
   void *VAR_5)
{
 struct snd_sof_dev *VAR_6 = VAR_3->sdev;
 struct sof_ipc_cmd_hdr *VAR_7 = VAR_4->msg_data;
 int VAR_8;


 VAR_8 = FUNC_7(VAR_4->waitq, VAR_4->ipc_complete,
     FUNC_3(VAR_6->ipc_timeout));

 if (VAR_8 == 0) {
  FUNC_0(VAR_6->dev, "error: ipc timed out for 0x%x size %d\n",
   VAR_7->cmd, VAR_7->size);
  FUNC_4(VAR_3->sdev, VAR_2 | VAR_1);
  FUNC_5(VAR_3->sdev);
  FUNC_6(VAR_3->sdev);
  VAR_8 = -VAR_0;
 } else {

  VAR_8 = VAR_4->reply_error;
  if (VAR_4->reply_size)
   FUNC_2(VAR_5, VAR_4->reply_data, VAR_4->reply_size);
  if (VAR_8 < 0)
   FUNC_0(VAR_6->dev, "error: ipc error for 0x%x size %zu\n",
    VAR_7->cmd, VAR_4->reply_size);
  else
   FUNC_1(VAR_6->dev, "ipc tx succeeded", VAR_7->cmd);
 }

 return VAR_8;
}
