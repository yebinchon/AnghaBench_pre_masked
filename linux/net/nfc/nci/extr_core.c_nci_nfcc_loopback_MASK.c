
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nci_loopback_data {int conn_id; struct sk_buff* data; } ;
struct nci_dev {int cur_conn_id; } ;
struct nci_conn_info {struct sk_buff* rx_skb; struct nci_dev* data_exchange_cb_context; int data_exchange_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nci_dev*,int ,int ,int ,int *) ;
 struct nci_conn_info* FUNC_2 (struct nci_dev*,int) ;
 int FUNC_3 (struct nci_dev*,int ,int *) ;
 int VAR_7 ;
 int FUNC_4 (struct nci_dev*,int ,unsigned long,int ) ;
 int VAR_8 ;
 struct sk_buff* FUNC_5 (struct nci_dev*,scalar_t__,int ) ;
 int FUNC_6 (struct sk_buff*,void*,size_t) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;

int FUNC_8(struct nci_dev *VAR_9, void *VAR_10, size_t VAR_11,
        struct sk_buff **VAR_12)
{
 int VAR_13;
 struct nci_loopback_data VAR_14;
 struct nci_conn_info *VAR_15;
 struct sk_buff *VAR_16;
 int VAR_17 = FUNC_3(VAR_9,
     VAR_5, ((void*)0));

 if (VAR_17 < 0) {
  VAR_13 = FUNC_1(VAR_9, VAR_5,
      0, 0, ((void*)0));
  if (VAR_13 != VAR_6)
   return VAR_13;

  VAR_17 = FUNC_3(VAR_9,
     VAR_5,
     ((void*)0));
 }

 VAR_15 = FUNC_2(VAR_9, VAR_17);
 if (!VAR_15)
  return -VAR_1;


 VAR_15->data_exchange_cb = VAR_7;
 VAR_15->data_exchange_cb_context = VAR_9;

 VAR_16 = FUNC_5(VAR_9, VAR_3 + VAR_11, VAR_2);
 if (!VAR_16)
  return -VAR_0;

 FUNC_7(VAR_16, VAR_3);
 FUNC_6(VAR_16, VAR_10, VAR_11);

 VAR_14.conn_id = VAR_17;
 VAR_14.data = VAR_16;

 VAR_9->cur_conn_id = VAR_17;
 VAR_13 = FUNC_4(VAR_9, VAR_8, (unsigned long)&VAR_14,
   FUNC_0(VAR_4));
 if (VAR_13 == VAR_6 && VAR_12)
  *VAR_12 = VAR_15->rx_skb;

 return VAR_13;
}
