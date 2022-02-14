
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {scalar_t__ data; } ;
struct nci_hcp_message {int header; } ;
struct nci_dev {TYPE_1__* hci_dev; } ;
struct nci_data {size_t pipe; size_t* data; int data_len; int cmd; int conn_id; } ;
struct nci_conn_info {struct sk_buff* rx_skb; int conn_id; } ;
struct TYPE_2__ {size_t* gate2pipe; struct nci_conn_info* conn_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (struct nci_dev*,int ,unsigned long,int ) ;
 int FUNC_5 (char*,size_t,size_t) ;
 int FUNC_6 (struct sk_buff*,int ) ;

int FUNC_7(struct nci_dev *VAR_9, u8 VAR_10, u8 VAR_11,
        struct sk_buff **VAR_12)
{
 struct nci_hcp_message *VAR_13;
 struct nci_conn_info *VAR_14;
 struct nci_data VAR_15;
 int VAR_16;
 u8 VAR_17 = VAR_9->hci_dev->gate2pipe[VAR_10];

 FUNC_5("idx=%d to gate %d\n", VAR_11, VAR_10);

 if (VAR_17 == VAR_6)
  return -VAR_0;

 VAR_14 = VAR_9->hci_dev->conn_info;
 if (!VAR_14)
  return -VAR_1;

 VAR_15.conn_id = VAR_14->conn_id;
 VAR_15.pipe = VAR_17;
 VAR_15.cmd = FUNC_0(VAR_4,
      VAR_3);
 VAR_15.data = &VAR_11;
 VAR_15.data_len = 1;

 VAR_16 = FUNC_4(VAR_9, VAR_8, (unsigned long)&VAR_15,
   FUNC_2(VAR_2));

 if (VAR_16 == VAR_7) {
  VAR_13 = (struct nci_hcp_message *)VAR_14->rx_skb->data;
  VAR_16 = FUNC_3(
   FUNC_1(VAR_13->header));
  FUNC_6(VAR_14->rx_skb, VAR_5);

  if (!VAR_16 && VAR_12)
   *VAR_12 = VAR_14->rx_skb;
 }

 return VAR_16;
}
