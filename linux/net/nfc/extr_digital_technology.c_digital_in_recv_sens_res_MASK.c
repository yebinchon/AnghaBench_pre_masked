
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct nfc_target {int sens_res; } ;
struct nfc_digital_dev {int dummy; } ;
typedef int __le16 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct nfc_digital_dev*,struct nfc_target*) ;
 int FUNC_8 (struct nfc_digital_dev*) ;
 int FUNC_9 (struct nfc_digital_dev*,struct nfc_target*,int ) ;
 int FUNC_10 (struct nfc_target*) ;
 struct nfc_target* FUNC_11 (int,int ) ;

__attribute__((used)) static void FUNC_12(struct nfc_digital_dev *VAR_5, void *VAR_6,
         struct sk_buff *VAR_7)
{
 struct nfc_target *VAR_8 = ((void*)0);
 int VAR_9;

 if (FUNC_2(VAR_7)) {
  VAR_9 = FUNC_4(VAR_7);
  VAR_7 = ((void*)0);
  goto exit;
 }

 if (VAR_7->len < sizeof(u16)) {
  VAR_9 = -VAR_1;
  goto exit;
 }

 VAR_8 = FUNC_11(sizeof(struct nfc_target), VAR_3);
 if (!VAR_8) {
  VAR_9 = -VAR_2;
  goto exit;
 }

 VAR_8->sens_res = FUNC_5(*(__le16 *)VAR_7->data);

 if (!FUNC_1(VAR_8->sens_res)) {
  FUNC_3("4.6.3.3");
  VAR_9 = -VAR_0;
  goto exit;
 }

 if (FUNC_0(VAR_8->sens_res))
  VAR_9 = FUNC_9(VAR_5, VAR_8, VAR_4);
 else
  VAR_9 = FUNC_7(VAR_5, VAR_8);

exit:
 FUNC_6(VAR_7);

 if (VAR_9) {
  FUNC_10(VAR_8);
  FUNC_8(VAR_5);
 }
}
