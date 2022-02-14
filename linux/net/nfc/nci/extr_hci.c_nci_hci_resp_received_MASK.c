
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nci_dev {TYPE_1__* hci_dev; } ;
struct nci_conn_info {struct sk_buff* rx_skb; } ;
struct TYPE_2__ {struct nci_conn_info* conn_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nci_dev*,int ) ;

__attribute__((used)) static void FUNC_1(struct nci_dev *VAR_2, u8 VAR_3,
      u8 VAR_4, struct sk_buff *VAR_5)
{
 struct nci_conn_info *VAR_6;
 u8 VAR_7 = VAR_4;

 VAR_6 = VAR_2->hci_dev->conn_info;
 if (!VAR_6) {
  VAR_7 = VAR_1;
  goto exit;
 }

 VAR_6->rx_skb = VAR_5;

exit:
 FUNC_0(VAR_2, VAR_0);
}
