
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nfc_llcp_local {int target_idx; } ;
struct nfc_dev {scalar_t__ tx_headroom; scalar_t__ tx_tailroom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_3 (struct nfc_dev*,int ,struct sk_buff*,int ,struct nfc_llcp_local*) ;
 struct nfc_llcp_local* FUNC_4 (struct nfc_dev*) ;
 int VAR_7 ;
 int FUNC_5 (struct nfc_llcp_local*,struct sk_buff*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;

int FUNC_8(struct nfc_dev *VAR_8)
{
 struct sk_buff *VAR_9;
 struct nfc_llcp_local *VAR_10;
 u16 VAR_11 = 0;

 FUNC_6("Sending SYMM\n");

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_11 += VAR_3;
 VAR_11 += VAR_8->tx_headroom + VAR_8->tx_tailroom + VAR_6;

 VAR_9 = FUNC_1(VAR_11, VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 FUNC_7(VAR_9, VAR_8->tx_headroom + VAR_6);

 VAR_9 = FUNC_2(VAR_9, 0, 0, VAR_4);

 FUNC_0(VAR_9);

 FUNC_5(VAR_10, VAR_9, VAR_5);

 return FUNC_3(VAR_8, VAR_10->target_idx, VAR_9,
     VAR_7, VAR_10);
}
