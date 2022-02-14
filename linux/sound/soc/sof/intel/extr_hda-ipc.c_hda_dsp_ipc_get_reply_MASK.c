
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int cmd; } ;
struct sof_ipc_reply {int error; TYPE_1__ hdr; } ;
struct sof_ipc_cmd_hdr {int cmd; } ;
struct snd_sof_ipc_msg {int reply_size; int reply_error; struct sof_ipc_reply* reply_data; struct sof_ipc_cmd_hdr* msg_data; } ;
struct TYPE_4__ {int offset; } ;
struct snd_sof_dev {TYPE_2__ host_box; int dev; struct snd_sof_ipc_msg* msg; } ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sof_ipc_reply*,struct sof_ipc_reply*,int) ;
 int FUNC_3 (struct snd_sof_dev*,int ,struct sof_ipc_reply*,int) ;

void FUNC_4(struct snd_sof_dev *VAR_4)
{
 struct snd_sof_ipc_msg *VAR_5 = VAR_4->msg;
 struct sof_ipc_reply VAR_6;
 struct sof_ipc_cmd_hdr *VAR_7;
 int VAR_8 = 0;






 if (!VAR_5) {
  FUNC_1(VAR_4->dev, "unexpected ipc interrupt raised!\n");
  return;
 }

 VAR_7 = VAR_5->msg_data;
 if (VAR_7->cmd == (VAR_1 | VAR_3)) {




  VAR_6.error = 0;
  VAR_6.hdr.cmd = VAR_2;
  VAR_6.hdr.size = sizeof(VAR_6);
  FUNC_2(VAR_5->reply_data, &VAR_6, sizeof(VAR_6));
  goto out;
 }


 FUNC_3(VAR_4, VAR_4->host_box.offset, &VAR_6,
    sizeof(VAR_6));

 if (VAR_6.error < 0) {
  FUNC_2(VAR_5->reply_data, &VAR_6, sizeof(VAR_6));
  VAR_8 = VAR_6.error;
 } else {

  if (VAR_6.hdr.size != VAR_5->reply_size) {
   FUNC_0(VAR_4->dev, "error: reply expected %zu got %u bytes\n",
    VAR_5->reply_size, VAR_6.hdr.size);
   VAR_8 = -VAR_0;
  }


  if (VAR_5->reply_size > 0)
   FUNC_3(VAR_4, VAR_4->host_box.offset,
      VAR_5->reply_data, VAR_5->reply_size);
 }

out:
 VAR_5->reply_error = VAR_8;

}
