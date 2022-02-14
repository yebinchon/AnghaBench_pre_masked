
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct nci_dev {int tx_work; int tx_wq; int cur_conn_id; int tx_q; } ;
struct nci_conn_info {scalar_t__ max_pkt_payload_len; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct nci_conn_info* FUNC_1 (struct nci_dev*,int ) ;
 int FUNC_2 (struct nci_dev*,int ,struct sk_buff*,int ) ;
 int FUNC_3 (struct nci_dev*,int ,struct sk_buff*) ;
 int FUNC_4 (char*,int ,scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,struct sk_buff*) ;

int FUNC_8(struct nci_dev *VAR_2, __u8 VAR_3, struct sk_buff *VAR_4)
{
 struct nci_conn_info *VAR_5;
 int VAR_6 = 0;

 FUNC_4("conn_id 0x%x, plen %d\n", VAR_3, VAR_4->len);

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto free_exit;
 }


 if (VAR_4->len <= VAR_5->max_pkt_payload_len) {

  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_1);

  FUNC_7(&VAR_2->tx_q, VAR_4);
 } else {

  VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);
  if (VAR_6) {
   FUNC_5("failed to fragment tx data packet\n");
   goto free_exit;
  }
 }

 VAR_2->cur_conn_id = VAR_3;
 FUNC_6(VAR_2->tx_wq, &VAR_2->tx_work);

 goto exit;

free_exit:
 FUNC_0(VAR_4);

exit:
 return VAR_6;
}
