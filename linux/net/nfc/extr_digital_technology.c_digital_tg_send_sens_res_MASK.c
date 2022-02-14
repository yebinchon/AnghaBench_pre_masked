
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
 struct sk_buff* FUNC_0 (struct nfc_digital_dev*,int) ;
 int FUNC_1 (struct nfc_digital_dev*,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct nfc_digital_dev*,struct sk_buff*,int,int ,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int* FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_5(struct nfc_digital_dev *VAR_5)
{
 struct sk_buff *VAR_6;
 u8 *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_5, 2);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_4(VAR_6, 2);

 VAR_7[0] = (VAR_0 >> 8) & 0xFF;
 VAR_7[1] = VAR_0 & 0xFF;

 VAR_8 = FUNC_1(VAR_5, VAR_2,
         VAR_3);
 if (VAR_8) {
  FUNC_3(VAR_6);
  return VAR_8;
 }

 VAR_8 = FUNC_2(VAR_5, VAR_6, 300, VAR_4,
     ((void*)0));
 if (VAR_8)
  FUNC_3(VAR_6);

 return VAR_8;
}
