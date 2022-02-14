
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nfc_llcp_local {int tx_queue; struct nfc_dev* dev; } ;
struct nfc_dev {scalar_t__ tx_headroom; scalar_t__ tx_tailroom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 struct sk_buff* FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct sk_buff*,int *,int) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;

int FUNC_6(struct nfc_llcp_local *VAR_6, u8 VAR_7, u8 VAR_8, u8 VAR_9)
{
 struct sk_buff *VAR_10;
 struct nfc_dev *VAR_11;
 u16 VAR_12 = 1;

 FUNC_2("Sending DM reason 0x%x\n", VAR_9);

 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_11 = VAR_6->dev;
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 VAR_12 += VAR_3;
 VAR_12 += VAR_11->tx_headroom + VAR_11->tx_tailroom + VAR_5;

 VAR_10 = FUNC_0(VAR_12, VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;

 FUNC_5(VAR_10, VAR_11->tx_headroom + VAR_5);

 VAR_10 = FUNC_1(VAR_10, VAR_8, VAR_7, VAR_4);

 FUNC_3(VAR_10, &VAR_9, 1);

 FUNC_4(&VAR_6->tx_queue, VAR_10);

 return 0;
}
