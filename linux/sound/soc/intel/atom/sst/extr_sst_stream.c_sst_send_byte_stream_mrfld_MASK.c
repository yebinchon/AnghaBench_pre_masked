
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sst_block {unsigned char* data; } ;
struct snd_sst_bytes_v2 {scalar_t__ type; unsigned char bytes; int block; int len; int ipc_msg; int task_id; int pipe_id; } ;
struct TYPE_5__ {int res_rqd; } ;
struct TYPE_6__ {TYPE_1__ part; } ;
struct TYPE_7__ {int header_low_payload; TYPE_2__ header_high; } ;
struct TYPE_8__ {TYPE_3__ p; } ;
struct ipc_post {unsigned char mailbox_data; TYPE_4__ mrfld_header; } ;
struct intel_sst_drv {int pvt_id; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct ipc_post*) ;
 int FUNC_3 (unsigned char,unsigned char*,int ) ;
 int FUNC_4 (struct intel_sst_drv*,struct ipc_post*) ;
 int FUNC_5 (struct intel_sst_drv*) ;
 struct sst_block* FUNC_6 (struct intel_sst_drv*,int ,int) ;
 scalar_t__ FUNC_7 (struct ipc_post**,int) ;
 int FUNC_8 (TYPE_4__*,int ,int ,int,int) ;
 int FUNC_9 (struct intel_sst_drv*,struct sst_block*) ;
 int FUNC_10 (struct intel_sst_drv*,struct sst_block*) ;
 int FUNC_11 (int,int *) ;

int FUNC_12(struct intel_sst_drv *VAR_2,
  struct snd_sst_bytes_v2 *VAR_3)
{ struct ipc_post *VAR_4 = ((void*)0);
 u32 VAR_5;
 int VAR_6, VAR_7 = 0;
 struct sst_block *VAR_8 = ((void*)0);

 FUNC_0(VAR_2->dev,
  "type:%u ipc_msg:%u block:%u task_id:%u pipe: %#x length:%#x\n",
  VAR_3->type, VAR_3->ipc_msg, VAR_3->block, VAR_3->task_id,
  VAR_3->pipe_id, VAR_3->len);

 if (FUNC_7(&VAR_4, 1))
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_2);
 FUNC_8(&VAR_4->mrfld_header, VAR_3->ipc_msg,
   VAR_3->task_id, 1, VAR_6);
 VAR_4->mrfld_header.p.header_high.part.res_rqd = VAR_3->block;
 VAR_5 = VAR_3->len;
 VAR_4->mrfld_header.p.header_low_payload = VAR_5;
 FUNC_0(VAR_2->dev, "length is %d\n", VAR_5);
 FUNC_3(VAR_4->mailbox_data, &VAR_3->bytes, VAR_3->len);
 if (VAR_3->block) {
  VAR_8 = FUNC_6(VAR_2, VAR_3->ipc_msg, VAR_6);
  if (VAR_8 == ((void*)0)) {
   FUNC_2(VAR_4);
   VAR_7 = -VAR_0;
   goto out;
  }
 }

 FUNC_4(VAR_2, VAR_4);
 FUNC_0(VAR_2->dev, "msg->mrfld_header.p.header_low_payload:%d",
   VAR_4->mrfld_header.p.header_low_payload);

 if (VAR_3->block) {
  VAR_7 = FUNC_10(VAR_2, VAR_8);
  if (VAR_7) {
   FUNC_1(VAR_2->dev, "fw returned err %d\n", VAR_7);
   FUNC_9(VAR_2, VAR_8);
   goto out;
  }
 }
 if (VAR_3->type == VAR_1) {




  if (VAR_3->block) {
   unsigned char *VAR_9 = VAR_8->data;

   FUNC_0(VAR_2->dev, "read back %d bytes",
     VAR_3->len);
   FUNC_3(VAR_3->bytes, VAR_9, VAR_3->len);
  }
 }
 if (VAR_3->block)
  FUNC_9(VAR_2, VAR_8);
out:
 FUNC_11(VAR_6, &VAR_2->pvt_id);
 return VAR_7;
}
