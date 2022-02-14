
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_ipc_msg {size_t msg_size; size_t reply_size; int ipc_complete; int header; int msg_data; scalar_t__ reply_error; } ;
struct snd_sof_ipc {struct snd_sof_ipc_msg msg; scalar_t__ disable_ipc_tx; struct snd_sof_dev* sdev; } ;
struct snd_sof_dev {int dev; int ipc_lock; struct snd_sof_ipc_msg* msg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,void*,size_t) ;
 int FUNC_3 (struct snd_sof_dev*,struct snd_sof_ipc_msg*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_sof_ipc*,struct snd_sof_ipc_msg*,void*) ;

__attribute__((used)) static int FUNC_7(struct snd_sof_ipc *VAR_1, u32 VAR_2,
           void *VAR_3, size_t VAR_4,
           void *VAR_5, size_t VAR_6)
{
 struct snd_sof_dev *VAR_7 = VAR_1->sdev;
 struct snd_sof_ipc_msg *VAR_8;
 int VAR_9;

 if (VAR_1->disable_ipc_tx)
  return -VAR_0;





 FUNC_4(&VAR_7->ipc_lock);


 VAR_8 = &VAR_1->msg;

 VAR_8->header = VAR_2;
 VAR_8->msg_size = VAR_4;
 VAR_8->reply_size = VAR_6;
 VAR_8->reply_error = 0;


 if (VAR_4)
  FUNC_2(VAR_8->msg_data, VAR_3, VAR_4);

 VAR_7->msg = VAR_8;

 VAR_9 = FUNC_3(VAR_7, VAR_8);

 if (!VAR_9)
  VAR_8->ipc_complete = 0;

 FUNC_5(&VAR_7->ipc_lock);

 if (VAR_9 < 0) {

  FUNC_0(VAR_7->dev,
        "error: ipc tx failed with error %d\n",
        VAR_9);
  return VAR_9;
 }

 FUNC_1(VAR_7->dev, "ipc tx", VAR_8->header);


 if (!VAR_9)
  VAR_9 = FUNC_6(VAR_1, VAR_8, VAR_5);

 return VAR_9;
}
