
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nfc_target {int nfcid1_len; } ;
struct nfc_digital_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nfc_digital_dev*,int ,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct nfc_digital_dev*,struct sk_buff*,int,int ,struct nfc_target*) ;
 struct sk_buff* FUNC_2 (struct nfc_digital_dev*,int) ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct nfc_digital_dev *VAR_8,
       struct nfc_target *VAR_9)
{
 int VAR_10;
 struct sk_buff *VAR_11;
 u8 VAR_12;

 VAR_10 = FUNC_0(VAR_8, VAR_5,
         VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_11 = FUNC_2(VAR_8, 2);
 if (!VAR_11)
  return -VAR_4;

 if (VAR_9->nfcid1_len == 0)
  VAR_12 = VAR_0;
 else if (VAR_9->nfcid1_len == 3)
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_2;

 FUNC_3(VAR_11, VAR_12);
 FUNC_3(VAR_11, VAR_3);

 return FUNC_1(VAR_8, VAR_11, 30, VAR_7,
       VAR_9);
}
