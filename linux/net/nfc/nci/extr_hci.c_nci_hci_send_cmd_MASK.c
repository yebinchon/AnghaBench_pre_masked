
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {scalar_t__ data; } ;
struct nci_hcp_message {int header; } ;
struct nci_dev {TYPE_1__* hci_dev; } ;
struct nci_data {size_t pipe; size_t const* data; size_t data_len; int cmd; int conn_id; } ;
struct nci_conn_info {struct sk_buff* rx_skb; int conn_id; } ;
struct TYPE_2__ {size_t* gate2pipe; struct nci_conn_info* conn_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (struct nci_dev*,int ,unsigned long,int ) ;
 int FUNC_5 (struct sk_buff*,int ) ;

int FUNC_6(struct nci_dev *VAR_8, u8 VAR_9, u8 VAR_10,
       const u8 *VAR_11, size_t VAR_12,
       struct sk_buff **VAR_13)
{
 struct nci_hcp_message *VAR_14;
 struct nci_conn_info *VAR_15;
 struct nci_data VAR_16;
 int VAR_17;
 u8 VAR_18 = VAR_8->hci_dev->gate2pipe[VAR_9];

 if (VAR_18 == VAR_5)
  return -VAR_0;

 VAR_15 = VAR_8->hci_dev->conn_info;
 if (!VAR_15)
  return -VAR_1;

 VAR_16.conn_id = VAR_15->conn_id;
 VAR_16.pipe = VAR_18;
 VAR_16.cmd = FUNC_0(VAR_3, VAR_10);
 VAR_16.data = VAR_11;
 VAR_16.data_len = VAR_12;

 VAR_17 = FUNC_4(VAR_8, VAR_7, (unsigned long)&VAR_16,
   FUNC_2(VAR_2));
 if (VAR_17 == VAR_6) {
  VAR_14 = (struct nci_hcp_message *)VAR_15->rx_skb->data;
  VAR_17 = FUNC_3(
   FUNC_1(VAR_14->header));
  FUNC_5(VAR_15->rx_skb, VAR_4);

  if (!VAR_17 && VAR_13)
   *VAR_13 = VAR_15->rx_skb;
 }

 return VAR_17;
}
