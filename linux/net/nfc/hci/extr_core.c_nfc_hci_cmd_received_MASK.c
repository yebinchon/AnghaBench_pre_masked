
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct nfc_hci_dev {size_t* gate2pipe; TYPE_2__* ops; TYPE_1__* pipes; } ;
struct hci_delete_pipe_noti {size_t pipe; } ;
struct hci_create_pipe_resp {size_t pipe; size_t dest_gate; int src_host; } ;
struct hci_all_pipe_cleared_noti {int host; } ;
struct TYPE_4__ {int (* cmd_received ) (struct nfc_hci_dev*,size_t,size_t,struct sk_buff*) ;} ;
struct TYPE_3__ {size_t gate; int dest_host; } ;





 size_t VAR_0 ;
 size_t VAR_1 ;

 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nfc_hci_dev*,size_t,int ,size_t,int *,int ,int *,int *,int ) ;
 int FUNC_2 (struct nfc_hci_dev*,int ) ;
 int FUNC_3 (char*,size_t,size_t,size_t) ;
 int FUNC_4 (char*,size_t,size_t) ;
 int FUNC_5 (struct nfc_hci_dev*,size_t,size_t,struct sk_buff*) ;

void FUNC_6(struct nfc_hci_dev *VAR_6, u8 VAR_7, u8 VAR_8,
     struct sk_buff *VAR_9)
{
 u8 VAR_10 = VAR_6->pipes[VAR_7].gate;
 u8 VAR_11 = VAR_1;
 struct hci_create_pipe_resp *VAR_12;
 struct hci_delete_pipe_noti *VAR_13;
 struct hci_all_pipe_cleared_noti *VAR_14;

 FUNC_3("from gate %x pipe %x cmd %x\n", VAR_10, VAR_7, VAR_8);

 switch (VAR_8) {
 case 130:
  if (VAR_9->len != 5) {
   VAR_11 = VAR_0;
   goto exit;
  }
  VAR_12 = (struct hci_create_pipe_resp *)VAR_9->data;

  if (VAR_12->pipe >= VAR_5) {
   VAR_11 = VAR_0;
   goto exit;
  }






  VAR_6->gate2pipe[VAR_12->dest_gate] = VAR_12->pipe;
  VAR_6->pipes[VAR_12->pipe].gate = VAR_12->dest_gate;
  VAR_6->pipes[VAR_12->pipe].dest_host =
       VAR_12->src_host;
  break;
 case 128:
  if (VAR_10 == VAR_3) {
   VAR_11 = VAR_0;
   goto exit;
  }
  break;
 case 129:
  if (VAR_9->len != 1) {
   VAR_11 = VAR_0;
   goto exit;
  }
  VAR_13 = (struct hci_delete_pipe_noti *)VAR_9->data;

  if (VAR_13->pipe >= VAR_5) {
   VAR_11 = VAR_0;
   goto exit;
  }

  VAR_6->pipes[VAR_13->pipe].gate = VAR_3;
  VAR_6->pipes[VAR_13->pipe].dest_host = VAR_4;
  break;
 case 131:
  if (VAR_9->len != 1) {
   VAR_11 = VAR_0;
   goto exit;
  }
  VAR_14 = (struct hci_all_pipe_cleared_noti *)VAR_9->data;

  FUNC_2(VAR_6, VAR_14->host);
  break;
 default:
  FUNC_4("Discarded unknown cmd %x to gate %x\n", VAR_8, VAR_10);
  break;
 }

 if (VAR_6->ops->cmd_received)
  VAR_6->ops->cmd_received(VAR_6, VAR_7, VAR_8, VAR_9);

exit:
 FUNC_1(VAR_6, VAR_7, VAR_2,
          VAR_11, ((void*)0), 0, ((void*)0), ((void*)0), 0);

 FUNC_0(VAR_9);
}
