
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nci_dev {int cur_conn_id; } ;
struct nci_conn_info {struct sk_buff* rx_skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nci_conn_info* FUNC_0 (struct nci_dev*,int ) ;
 int FUNC_1 (struct nci_dev*,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, struct sk_buff *VAR_3, int VAR_4)
{
 struct nci_dev *VAR_5 = (struct nci_dev *)VAR_2;
 struct nci_conn_info *VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_5->cur_conn_id);
 if (!VAR_6) {
  FUNC_1(VAR_5, VAR_1);
  return;
 }

 VAR_6->rx_skb = VAR_3;

 FUNC_1(VAR_5, VAR_0);
}
