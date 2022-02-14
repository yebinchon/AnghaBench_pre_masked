
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__* data; } ;
struct nfc_digital_dev {scalar_t__ atn_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nfc_digital_dev*) ;
 int FUNC_2 (struct nfc_digital_dev*,void*,struct sk_buff*) ;
 int FUNC_3 (struct nfc_digital_dev*,void*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct nfc_digital_dev *VAR_2,
          void *VAR_3, struct sk_buff *VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_4)) {
  FUNC_1(VAR_2);
  return;
 }

 VAR_5 = 2;
 if (VAR_4->data[0] == VAR_1)
  VAR_5++;

 VAR_2->atn_count = 0;

 if (VAR_4->data[VAR_5] == VAR_0)
  FUNC_3(VAR_2, VAR_3, VAR_4);
 else
  FUNC_2(VAR_2, VAR_3, VAR_4);
}
