
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int drv_id; int msg_id; scalar_t__ result; scalar_t__ large; } ;
union ipc_header_high {TYPE_3__ part; int full; } ;
typedef int u32 ;
struct TYPE_4__ {int header_low_payload; union ipc_header_high header_high; } ;
struct TYPE_5__ {TYPE_1__ p; } ;
struct ipc_post {scalar_t__ mailbox_data; TYPE_2__ mrfld_header; } ;
struct ipc_dsp_hdr {int cmd_id; } ;
struct intel_sst_drv {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (void*,int ,int ) ;
 int FUNC_4 (struct intel_sst_drv*,struct ipc_post*) ;
 scalar_t__ FUNC_5 (struct intel_sst_drv*,scalar_t__,unsigned int,int ,void*,int ) ;

void FUNC_6(struct intel_sst_drv *VAR_2,
  struct ipc_post *VAR_3)
{
 unsigned int VAR_4;
 void *VAR_5;
 union ipc_header_high VAR_6;
 u32 VAR_7;
 struct ipc_dsp_hdr *VAR_8;

 VAR_6 = VAR_3->mrfld_header.p.header_high;
 VAR_7 = VAR_3->mrfld_header.p.header_low_payload;

 FUNC_0(VAR_2->dev, "IPC process message header %x payload %x\n",
   VAR_3->mrfld_header.p.header_high.full,
   VAR_3->mrfld_header.p.header_low_payload);

 VAR_4 = VAR_6.part.drv_id;


 if (VAR_4 == VAR_1) {

  FUNC_4(VAR_2, VAR_3);
  return;
 }


 if (VAR_6.part.result && VAR_4 && !VAR_6.part.large) {

  FUNC_1(VAR_2->dev, "FW sent error response 0x%x", VAR_7);
  FUNC_5(VAR_2, VAR_6.part.result,
   VAR_6.part.drv_id,
   VAR_6.part.msg_id, ((void*)0), 0);
  return;
 }






 if (VAR_6.part.large) {
  VAR_5 = FUNC_3((void *)VAR_3->mailbox_data, VAR_7, VAR_0);
  if (!VAR_5)
   return;

  VAR_8 = (struct ipc_dsp_hdr *)VAR_5;
  FUNC_0(VAR_2->dev, "cmd_id %d\n", VAR_8->cmd_id);
  if (FUNC_5(VAR_2, VAR_6.part.result,
    VAR_6.part.drv_id,
    VAR_6.part.msg_id, VAR_5, VAR_7))
   FUNC_2(VAR_5);
 } else {
  FUNC_5(VAR_2, VAR_6.part.result,
    VAR_6.part.drv_id,
    VAR_6.part.msg_id, ((void*)0), 0);
 }

}
