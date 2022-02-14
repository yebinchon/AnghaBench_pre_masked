
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct nfc_target {int dummy; } ;
struct nfc_digital_dev {int dummy; } ;
struct digital_attrib_res {int mbli_did; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct nfc_digital_dev*) ;
 int FUNC_5 (struct nfc_digital_dev*,struct nfc_target*,int ) ;
 int FUNC_6 (struct nfc_target*) ;

__attribute__((used)) static void FUNC_7(struct nfc_digital_dev *VAR_2, void *VAR_3,
           struct sk_buff *VAR_4)
{
 struct nfc_target *VAR_5 = VAR_3;
 struct digital_attrib_res *VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_4)) {
  VAR_7 = FUNC_2(VAR_4);
  VAR_4 = ((void*)0);
  goto exit;
 }

 if (VAR_4->len < sizeof(*VAR_6)) {
  FUNC_1("12.6.2");
  VAR_7 = -VAR_0;
  goto exit;
 }

 VAR_6 = (struct digital_attrib_res *)VAR_4->data;

 if (VAR_6->mbli_did & 0x0f) {
  FUNC_1("12.6.2.1");
  VAR_7 = -VAR_0;
  goto exit;
 }

 VAR_7 = FUNC_5(VAR_2, VAR_5, VAR_1);

exit:
 FUNC_3(VAR_4);
 FUNC_6(VAR_5);

 if (VAR_7)
  FUNC_4(VAR_2);
}
