
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__* data; int len; } ;
struct nfc_digital_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct nfc_digital_dev*) ;
 int FUNC_4 (struct nfc_digital_dev*) ;

void FUNC_5(struct nfc_digital_dev *VAR_3, void *VAR_4,
         struct sk_buff *VAR_5)
{
 u8 VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_5)) {
  VAR_7 = FUNC_1(VAR_5);
  VAR_5 = ((void*)0);
  goto exit;
 }

 VAR_6 = VAR_5->data[0];

 if (!VAR_5->len || (VAR_6 != VAR_1 &&
     VAR_6 != VAR_0)) {
  VAR_7 = -VAR_2;
  goto exit;
 }

 VAR_7 = FUNC_4(VAR_3);

exit:
 if (VAR_7)
  FUNC_3(VAR_3);

 FUNC_2(VAR_5);
}
