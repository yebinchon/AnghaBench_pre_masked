
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nfc_digital_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nfc_digital_dev*,int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct nfc_digital_dev*,struct sk_buff*,int,int ,int *) ;
 struct sk_buff* FUNC_2 (struct nfc_digital_dev*,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ) ;

int FUNC_5(struct nfc_digital_dev *VAR_7, u8 VAR_8)
{
 struct sk_buff *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_7, VAR_3,
         VAR_5);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_7, VAR_2,
         VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_2(VAR_7, 1);
 if (!VAR_9)
  return -VAR_1;

 FUNC_4(VAR_9, VAR_0);

 VAR_10 = FUNC_1(VAR_7, VAR_9, 30, VAR_6, ((void*)0));
 if (VAR_10)
  FUNC_3(VAR_9);

 return VAR_10;
}
