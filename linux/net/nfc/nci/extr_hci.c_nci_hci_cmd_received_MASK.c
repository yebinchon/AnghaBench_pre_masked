
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct nci_hci_delete_pipe_noti {size_t pipe; } ;
struct nci_hci_create_pipe_resp {size_t dest_gate; size_t pipe; int src_host; } ;
struct nci_hci_all_pipe_cleared_noti {int host; } ;
struct nci_dev {TYPE_3__* ops; TYPE_2__* hci_dev; } ;
struct TYPE_6__ {int (* hci_cmd_received ) (struct nci_dev*,size_t,size_t,struct sk_buff*) ;} ;
struct TYPE_5__ {size_t* gate2pipe; TYPE_1__* pipes; } ;
struct TYPE_4__ {size_t gate; int host; } ;





 size_t VAR_0 ;
 size_t VAR_1 ;

 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nci_dev*,int ) ;
 int FUNC_2 (struct nci_dev*,size_t,size_t,int *,int ) ;
 int FUNC_3 (char*,size_t,size_t,...) ;
 int FUNC_4 (struct nci_dev*,size_t,size_t,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct nci_dev *VAR_6, u8 VAR_7,
     u8 VAR_8, struct sk_buff *VAR_9)
{
 u8 VAR_10 = VAR_6->hci_dev->pipes[VAR_7].gate;
 u8 VAR_11 = VAR_1 | ~VAR_2;
 u8 VAR_12, VAR_13;
 struct nci_hci_create_pipe_resp *VAR_14;
 struct nci_hci_delete_pipe_noti *VAR_15;
 struct nci_hci_all_pipe_cleared_noti *VAR_16;

 FUNC_3("from gate %x pipe %x cmd %x\n", VAR_10, VAR_7, VAR_8);

 switch (VAR_8) {
 case 130:
  if (VAR_9->len != 5) {
   VAR_11 = VAR_0;
   goto exit;
  }
  VAR_14 = (struct nci_hci_create_pipe_resp *)VAR_9->data;
  VAR_12 = VAR_14->dest_gate;
  VAR_13 = VAR_14->pipe;
  if (VAR_13 >= VAR_5) {
   VAR_11 = VAR_0;
   goto exit;
  }






  VAR_6->hci_dev->gate2pipe[VAR_12] = VAR_13;
  VAR_6->hci_dev->pipes[VAR_13].gate = VAR_12;
  VAR_6->hci_dev->pipes[VAR_13].host =
      VAR_14->src_host;
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
  VAR_15 = (struct nci_hci_delete_pipe_noti *)VAR_9->data;
  if (VAR_15->pipe >= VAR_5) {
   VAR_11 = VAR_0;
   goto exit;
  }

  VAR_6->hci_dev->pipes[VAR_15->pipe].gate =
      VAR_3;
  VAR_6->hci_dev->pipes[VAR_15->pipe].host =
      VAR_4;
  break;
 case 131:
  if (VAR_9->len != 1) {
   VAR_11 = VAR_0;
   goto exit;
  }

  VAR_16 =
   (struct nci_hci_all_pipe_cleared_noti *)VAR_9->data;
  FUNC_1(VAR_6, VAR_16->host);
  break;
 default:
  FUNC_3("Discarded unknown cmd %x to gate %x\n", VAR_8, VAR_10);
  break;
 }

 if (VAR_6->ops->hci_cmd_received)
  VAR_6->ops->hci_cmd_received(VAR_6, VAR_7, VAR_8, VAR_9);

exit:
 FUNC_2(VAR_6, VAR_7, VAR_11, ((void*)0), 0);

 FUNC_0(VAR_9);
}
