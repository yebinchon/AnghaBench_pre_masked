
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_llcp_sock {struct nfc_dev* dev; struct nfc_llcp_local* local; } ;
struct nfc_llcp_local {int tx_queue; } ;
struct nfc_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct nfc_llcp_sock*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,struct sk_buff*) ;

int FUNC_3(struct nfc_llcp_sock *VAR_3)
{
 struct sk_buff *VAR_4;
 struct nfc_dev *VAR_5;
 struct nfc_llcp_local *VAR_6;

 FUNC_1("Sending DISC\n");

 VAR_6 = VAR_3->local;
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_5 = VAR_3->dev;
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_3, VAR_2, 0);
 if (VAR_4 == ((void*)0))
  return -VAR_1;

 FUNC_2(&VAR_6->tx_queue, VAR_4);

 return 0;
}
