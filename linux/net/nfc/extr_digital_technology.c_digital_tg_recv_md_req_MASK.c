
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nfc_digital_dev {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* tg_get_rf_tech ) (struct nfc_digital_dev*,int*) ;} ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;



 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct nfc_digital_dev*) ;
 int FUNC_3 (struct nfc_digital_dev*) ;
 int FUNC_4 (struct nfc_digital_dev*,int) ;
 int FUNC_5 (struct nfc_digital_dev*,void*,struct sk_buff*) ;
 int FUNC_6 (struct nfc_digital_dev*,void*,struct sk_buff*) ;
 int FUNC_7 (struct nfc_digital_dev*,int*) ;

void FUNC_8(struct nfc_digital_dev *VAR_0, void *VAR_1,
       struct sk_buff *VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_2)) {
  VAR_2 = ((void*)0);
  goto exit_free_skb;
 }

 VAR_4 = VAR_0->ops->tg_get_rf_tech(VAR_0, &VAR_3);
 if (VAR_4)
  goto exit_free_skb;

 switch (VAR_3) {
 case 130:
  VAR_4 = FUNC_3(VAR_0);
  if (VAR_4)
   goto exit_free_skb;
  FUNC_5(VAR_0, VAR_1, VAR_2);
  break;
 case 129:
 case 128:
  VAR_4 = FUNC_4(VAR_0, VAR_3);
  if (VAR_4)
   goto exit_free_skb;
  FUNC_6(VAR_0, VAR_1, VAR_2);
  break;
 default:
  goto exit_free_skb;
 }

 return;

exit_free_skb:
 FUNC_2(VAR_0);
 FUNC_1(VAR_2);
}
