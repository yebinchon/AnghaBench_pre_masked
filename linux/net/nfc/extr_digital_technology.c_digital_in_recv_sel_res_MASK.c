
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ len; int * data; } ;
struct nfc_target {int sel_res; } ;
struct nfc_digital_dev {int dummy; } ;


 int FUNC_0 (struct nfc_digital_dev*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct nfc_digital_dev*,struct nfc_target*) ;
 int FUNC_10 (struct nfc_digital_dev*,struct nfc_target*) ;
 int FUNC_11 (struct nfc_digital_dev*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct nfc_digital_dev*,struct nfc_target*,int ) ;
 int FUNC_14 (struct nfc_target*) ;

__attribute__((used)) static void FUNC_15(struct nfc_digital_dev *VAR_5, void *VAR_6,
        struct sk_buff *VAR_7)
{
 struct nfc_target *VAR_8 = VAR_6;
 int VAR_9;
 u8 VAR_10;
 u8 VAR_11;

 if (FUNC_5(VAR_7)) {
  VAR_9 = FUNC_7(VAR_7);
  VAR_7 = ((void*)0);
  goto exit;
 }

 if (!FUNC_0(VAR_5)) {
  VAR_9 = FUNC_12(VAR_7);
  if (VAR_9) {
   FUNC_6("4.4.1.3");
   goto exit;
  }
 }

 if (VAR_7->len != VAR_0) {
  VAR_9 = -VAR_1;
  goto exit;
 }

 VAR_10 = VAR_7->data[0];

 if (!FUNC_4(VAR_10)) {
  VAR_9 = FUNC_10(VAR_5, VAR_8);
  if (VAR_9)
   goto exit;

  goto exit_free_skb;
 }

 VAR_8->sel_res = VAR_10;

 if (FUNC_2(VAR_10)) {
  VAR_11 = VAR_3;
 } else if (FUNC_1(VAR_10)) {
  VAR_11 = VAR_4;
 } else if (FUNC_3(VAR_10)) {
  VAR_9 = FUNC_9(VAR_5, VAR_8);
  if (VAR_9)
   goto exit;




  goto exit_free_skb;
 } else {
  VAR_9 = -VAR_2;
  goto exit;
 }

 VAR_9 = FUNC_13(VAR_5, VAR_8, VAR_11);

exit:
 FUNC_14(VAR_8);

exit_free_skb:
 FUNC_8(VAR_7);

 if (VAR_9)
  FUNC_11(VAR_5);
}
