
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ data; } ;
struct nfc_hci_dev {int max_data_link_payload; int msg_tx_work; int msg_tx_mutex; int msg_tx_queue; scalar_t__ shutting_down; struct nfc_dev* ndev; } ;
struct nfc_dev {int tx_headroom; int tx_tailroom; } ;
struct TYPE_2__ {struct TYPE_2__* data; int header; } ;
struct hcp_packet {scalar_t__ header; TYPE_1__ message; } ;
struct hci_msg {int wait_response; unsigned long completion_delay; int msg_frags; int msg_l; void* cb_context; int cb; } ;
typedef int data_exchange_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (struct hci_msg*) ;
 struct hci_msg* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_1__*,scalar_t__ const*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,int) ;

int FUNC_15(struct nfc_hci_dev *VAR_6, u8 VAR_7,
      u8 VAR_8, u8 VAR_9,
      const u8 *VAR_10, size_t VAR_11,
      data_exchange_cb_t VAR_12, void *VAR_13,
      unsigned long VAR_14)
{
 struct nfc_dev *VAR_15 = VAR_6->ndev;
 struct hci_msg *VAR_16;
 const u8 *VAR_17 = VAR_10;
 int VAR_18, VAR_19;
 bool VAR_20 = 1;

 VAR_16 = FUNC_4(sizeof(struct hci_msg), VAR_2);
 if (VAR_16 == ((void*)0))
  return -VAR_0;

 FUNC_1(&VAR_16->msg_l);
 FUNC_11(&VAR_16->msg_frags);
 VAR_16->wait_response = (VAR_8 == VAR_4) ? 1 : 0;
 VAR_16->cb = VAR_12;
 VAR_16->cb_context = VAR_13;
 VAR_16->completion_delay = VAR_14;

 VAR_18 = VAR_11 + 1;
 while (VAR_18 > 0) {
  struct sk_buff *VAR_21;
  int VAR_22, VAR_23;
  struct hcp_packet *VAR_24;

  if (VAR_5 + VAR_18 <=
      VAR_6->max_data_link_payload)
   VAR_23 = VAR_18;
  else
   VAR_23 = VAR_6->max_data_link_payload -
     VAR_5;

  VAR_22 = VAR_15->tx_headroom + VAR_5 +
     VAR_23 + VAR_15->tx_tailroom;
  VAR_18 -= VAR_23;

  VAR_21 = FUNC_2(VAR_22, VAR_2);
  if (VAR_21 == ((void*)0)) {
   VAR_19 = -VAR_0;
   goto out_skb_err;
  }
  FUNC_14(VAR_21, VAR_15->tx_headroom);

  FUNC_10(VAR_21, VAR_5 + VAR_23);


  VAR_24 = (struct hcp_packet *)VAR_21->data;
  VAR_24->header = VAR_7;
  if (VAR_20) {
   VAR_20 = 0;
   VAR_24->message.header = FUNC_0(VAR_8, VAR_9);
   if (VAR_17) {
    FUNC_6(VAR_24->message.data, VAR_17,
           VAR_23 - 1);
    VAR_17 += VAR_23 - 1;
   }
  } else {
   FUNC_6(&VAR_24->message, VAR_17, VAR_23);
   VAR_17 += VAR_23;
  }


  if (VAR_18 == 0)
   VAR_24->header |= ~VAR_3;

  FUNC_13(&VAR_16->msg_frags, VAR_21);
 }

 FUNC_7(&VAR_6->msg_tx_mutex);

 if (VAR_6->shutting_down) {
  VAR_19 = -VAR_1;
  FUNC_8(&VAR_6->msg_tx_mutex);
  goto out_skb_err;
 }

 FUNC_5(&VAR_16->msg_l, &VAR_6->msg_tx_queue);
 FUNC_8(&VAR_6->msg_tx_mutex);

 FUNC_9(&VAR_6->msg_tx_work);

 return 0;

out_skb_err:
 FUNC_12(&VAR_16->msg_frags);
 FUNC_3(VAR_16);

 return VAR_19;
}
