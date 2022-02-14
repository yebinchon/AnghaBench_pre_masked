
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_digital_dev {int dummy; } ;


 int FUNC_0 (struct nfc_digital_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct nfc_digital_dev*,int) ;
 int FUNC_3 (struct nfc_digital_dev*,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct nfc_digital_dev*,struct sk_buff*,int,int ,int *) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_7(struct nfc_digital_dev *VAR_5)
{
 struct sk_buff *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_5, 1);
 if (!VAR_6)
  return -VAR_1;

 FUNC_6(VAR_6, VAR_0);

 if (!FUNC_0(VAR_5))
  FUNC_1(VAR_6);

 VAR_7 = FUNC_3(VAR_5, VAR_2,
         VAR_3);
 if (VAR_7) {
  FUNC_5(VAR_6);
  return VAR_7;
 }

 VAR_7 = FUNC_4(VAR_5, VAR_6, 300, VAR_4,
     ((void*)0));
 if (VAR_7)
  FUNC_5(VAR_6);

 return VAR_7;
}
