
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct nfc_llcp_local {struct nfc_dev* dev; } ;
struct nfc_dev {scalar_t__ tx_headroom; scalar_t__ tx_tailroom; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct sk_buff* FUNC_1 (size_t,int ) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct nfc_llcp_local *VAR_7,
          size_t VAR_8)
{
 struct sk_buff *VAR_9;
 struct nfc_dev *VAR_10;
 u16 VAR_11 = 0;

 if (VAR_7 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_10 = VAR_7->dev;
 if (VAR_10 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_11 += VAR_3;
 VAR_11 += VAR_10->tx_headroom + VAR_10->tx_tailroom + VAR_6;
 VAR_11 += VAR_8;

 VAR_9 = FUNC_1(VAR_11, VAR_2);
 if (VAR_9 == ((void*)0))
  return FUNC_0(-VAR_1);

 FUNC_3(VAR_9, VAR_10->tx_headroom + VAR_6);

 VAR_9 = FUNC_2(VAR_9, VAR_5, VAR_5, VAR_4);

 return VAR_9;
}
