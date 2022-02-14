
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int busy_interrupt; } ;
union sst_imr_reg_mrfld {void* full; TYPE_2__ part; } ;
struct TYPE_11__ {int msg_id; scalar_t__ large; scalar_t__ done; } ;
struct TYPE_12__ {TYPE_4__ part; } ;
struct TYPE_13__ {unsigned int header_low_payload; TYPE_5__ header_high; } ;
union ipc_header_mrfld {TYPE_6__ p; void* full; } ;
struct TYPE_8__ {int done_interrupt; scalar_t__ busy_interrupt; } ;
union interrupt_reg_mrfld {TYPE_1__ part; void* full; } ;
struct ipc_post {int node; int is_process_reply; union ipc_header_mrfld mrfld_header; int mailbox_data; } ;
struct TYPE_10__ {int ipcd; int ipcx; } ;
struct intel_sst_drv {TYPE_7__* ops; int rx_msg_lock; int rx_list; int dev; scalar_t__ mailbox_recv_offset; scalar_t__ mailbox; TYPE_3__ ipc_reg; int shim; int ipc_spin_lock; int ipc_post_msg_wq; int post_msg_wq; } ;
typedef int irqreturn_t ;
struct TYPE_14__ {int (* clear_interrupt ) (struct intel_sst_drv*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,scalar_t__,unsigned int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct ipc_post**,scalar_t__) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,void*) ;
 scalar_t__ FUNC_10 (unsigned int) ;
 int FUNC_11 (struct intel_sst_drv*) ;
 int FUNC_12 (struct intel_sst_drv*) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_4, void *VAR_5)
{
 union interrupt_reg_mrfld VAR_6;
 union ipc_header_mrfld VAR_7;
 union sst_imr_reg_mrfld VAR_8;
 struct ipc_post *VAR_9 = ((void*)0);
 unsigned int VAR_10 = 0;
 struct intel_sst_drv *VAR_11 = (struct intel_sst_drv *) VAR_5;
 irqreturn_t VAR_12 = VAR_0;


 VAR_6.full = FUNC_8(VAR_11->shim, VAR_3);

 if (VAR_6.part.done_interrupt) {

  FUNC_4(&VAR_11->ipc_spin_lock);
  VAR_7.full = FUNC_8(VAR_11->shim,
     VAR_11->ipc_reg.ipcx);
  VAR_7.p.header_high.part.done = 0;
  FUNC_9(VAR_11->shim, VAR_11->ipc_reg.ipcx, VAR_7.full);

                                        ;
  VAR_6.part.done_interrupt = 1;
  FUNC_9(VAR_11->shim, VAR_3, VAR_6.full);
  FUNC_5(&VAR_11->ipc_spin_lock);


  FUNC_3(VAR_11->post_msg_wq, &VAR_11->ipc_post_msg_wq);
  VAR_12 = VAR_0;
 }

 if (VAR_6.part.busy_interrupt) {

  FUNC_4(&VAR_11->ipc_spin_lock);
  VAR_8.full = FUNC_8(VAR_11->shim, VAR_2);
  VAR_8.part.busy_interrupt = 1;
  FUNC_9(VAR_11->shim, VAR_2, VAR_8.full);
  FUNC_5(&VAR_11->ipc_spin_lock);
  VAR_7.full = FUNC_8(VAR_11->shim, VAR_11->ipc_reg.ipcd);

  if (FUNC_6(&VAR_9, VAR_7.p.header_high.part.large)) {
   VAR_11->ops->clear_interrupt(VAR_11);
   return VAR_0;
  }

  if (VAR_7.p.header_high.part.large) {
   VAR_10 = VAR_7.p.header_low_payload;
   if (FUNC_10(VAR_10)) {
    FUNC_2(VAR_9->mailbox_data,
     VAR_11->mailbox + VAR_11->mailbox_recv_offset, VAR_10);
   } else {
    FUNC_0(VAR_11->dev,
     "Mailbox not copied, payload size is: %u\n", VAR_10);
    VAR_7.p.header_low_payload = 0;
   }
  }

  VAR_9->mrfld_header = VAR_7;
  VAR_9->is_process_reply =
   FUNC_7(VAR_7.p.header_high.part.msg_id);
  FUNC_4(&VAR_11->rx_msg_lock);
  FUNC_1(&VAR_9->node, &VAR_11->rx_list);
  FUNC_5(&VAR_11->rx_msg_lock);
  VAR_11->ops->clear_interrupt(VAR_11);
  VAR_12 = VAR_1;
 }
 return VAR_12;
}
