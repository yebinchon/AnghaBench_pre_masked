
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__* data; } ;
struct nfc_digital_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nfc_digital_dev*,void*,struct sk_buff*) ;
 int FUNC_2 (struct nfc_digital_dev*,void*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct nfc_digital_dev *VAR_1,
  void *VAR_2, struct sk_buff *VAR_3)
{
 if (!FUNC_0(VAR_3) && (VAR_3->len >= 2) &&
   (VAR_3->data[1] == VAR_0))
  FUNC_2(VAR_1, VAR_2, VAR_3);
 else
  FUNC_1(VAR_1, VAR_2, VAR_3);

 return;
}
