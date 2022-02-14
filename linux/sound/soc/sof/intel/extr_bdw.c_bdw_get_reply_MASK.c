
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; } ;
struct sof_ipc_reply {int error; TYPE_1__ hdr; } ;
struct snd_sof_ipc_msg {int reply_size; int reply_error; struct sof_ipc_reply* reply_data; } ;
struct TYPE_4__ {int offset; } ;
struct snd_sof_dev {TYPE_2__ host_box; int dev; struct snd_sof_ipc_msg* msg; } ;
typedef int reply ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sof_ipc_reply*,struct sof_ipc_reply*,int) ;
 int FUNC_3 (struct snd_sof_dev*,int ,struct sof_ipc_reply*,int) ;

__attribute__((used)) static void FUNC_4(struct snd_sof_dev *VAR_1)
{
 struct snd_sof_ipc_msg *VAR_2 = VAR_1->msg;
 struct sof_ipc_reply VAR_3;
 int VAR_4 = 0;






 if (!VAR_2) {
  FUNC_1(VAR_1->dev, "unexpected ipc interrupt raised!\n");
  return;
 }


 FUNC_3(VAR_1, VAR_1->host_box.offset, &VAR_3, sizeof(VAR_3));

 if (VAR_3.error < 0) {
  FUNC_2(VAR_2->reply_data, &VAR_3, sizeof(VAR_3));
  VAR_4 = VAR_3.error;
 } else {

  if (VAR_3.hdr.size != VAR_2->reply_size) {
   FUNC_0(VAR_1->dev, "error: reply expected %zu got %u bytes\n",
    VAR_2->reply_size, VAR_3.hdr.size);
   VAR_4 = -VAR_0;
  }


  if (VAR_2->reply_size > 0)
   FUNC_3(VAR_1, VAR_1->host_box.offset,
      VAR_2->reply_data, VAR_2->reply_size);
 }

 VAR_2->reply_error = VAR_4;
}
