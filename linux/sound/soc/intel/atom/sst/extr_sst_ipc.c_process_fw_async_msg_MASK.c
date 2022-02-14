
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct stream_info {int drain_cb_param; int (* drain_notify ) (int ) ;int compr_cb_param; int (* compr_cb ) (int ) ;int pcm_substream; int (* period_elapsed ) (int ) ;int status; } ;
struct TYPE_3__ {int header_low_payload; } ;
struct TYPE_4__ {TYPE_1__ p; } ;
struct ipc_post {void* mailbox_data; TYPE_2__ mrfld_header; } ;
struct ipc_dsp_hdr {int cmd_id; int pipe_id; } ;
struct intel_sst_drv {int dev; struct stream_info* streams; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct intel_sst_drv*,int) ;
 int FUNC_3 (int ,int *,int ,int,int,void*,int,int) ;
 int FUNC_4 (struct intel_sst_drv*,void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct intel_sst_drv *VAR_3,
   struct ipc_post *VAR_4)
{
 u32 VAR_5;
 int VAR_6;
 u32 VAR_7, VAR_8;
 void *VAR_9;
 struct stream_info *VAR_10;
 u32 VAR_11, VAR_12;

 VAR_11 = VAR_4->mrfld_header.p.header_low_payload;
 VAR_5 = ((struct ipc_dsp_hdr *)VAR_4->mailbox_data)->cmd_id;
 VAR_9 = (VAR_4->mailbox_data + sizeof(struct ipc_dsp_hdr));
 VAR_7 = VAR_11 - (sizeof(struct ipc_dsp_hdr));

 switch (VAR_5) {
 case 128:
  VAR_12 = ((struct ipc_dsp_hdr *)VAR_4->mailbox_data)->pipe_id;
  VAR_6 = FUNC_2(VAR_3, VAR_12);
  if (VAR_6 > 0) {
   FUNC_0(VAR_3->dev,
    "Period elapsed rcvd for pipe id 0x%x\n",
    VAR_12);
   VAR_10 = &VAR_3->streams[VAR_6];

   if (VAR_10->status == VAR_2)
    break;
   if (VAR_10->period_elapsed)
    VAR_10->period_elapsed(VAR_10->pcm_substream);
   if (VAR_10->compr_cb)
    VAR_10->compr_cb(VAR_10->compr_cb_param);
  }
  break;

 case 131:
  VAR_12 = ((struct ipc_dsp_hdr *)VAR_4->mailbox_data)->pipe_id;
  VAR_6 = FUNC_2(VAR_3, VAR_12);
  if (VAR_6 > 0) {
   VAR_10 = &VAR_3->streams[VAR_6];
   if (VAR_10->drain_notify)
    VAR_10->drain_notify(VAR_10->drain_cb_param);
  }
  break;

 case 130:
  FUNC_1(VAR_3->dev, "FW sent async error msg:\n");
  for (VAR_8 = 0; VAR_8 < (VAR_7/4); VAR_8++)
   FUNC_3(VAR_1, ((void*)0), VAR_0,
     16, 4, VAR_9, VAR_7, 0);
  break;

 case 129:
  FUNC_4(VAR_3, VAR_9);
  break;

 case 132:
  VAR_12 = ((struct ipc_dsp_hdr *)VAR_4->mailbox_data)->pipe_id;
  VAR_6 = FUNC_2(VAR_3, VAR_12);
  if (VAR_6 > 0)
   FUNC_1(VAR_3->dev,
    "Buffer under-run for pipe:%#x str_id:%d\n",
    VAR_12, VAR_6);
  break;

 default:
  FUNC_1(VAR_3->dev,
   "Unrecognized async msg from FW msg_id %#x\n", VAR_5);
 }
}
