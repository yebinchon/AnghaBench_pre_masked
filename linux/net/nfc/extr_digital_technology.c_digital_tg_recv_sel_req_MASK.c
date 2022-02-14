
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_digital_dev {int dummy; } ;


 int FUNC_0 (struct nfc_digital_dev*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct nfc_digital_dev*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct nfc_digital_dev*) ;

__attribute__((used)) static void FUNC_8(struct nfc_digital_dev *VAR_0, void *VAR_1,
        struct sk_buff *VAR_2)
{
 int VAR_3;

 if (FUNC_1(VAR_2)) {
  VAR_3 = FUNC_3(VAR_2);
  VAR_2 = ((void*)0);
  goto exit;
 }

 if (!FUNC_0(VAR_0)) {
  VAR_3 = FUNC_6(VAR_2);
  if (VAR_3) {
   FUNC_2("4.4.1.3");
   goto exit;
  }
 }



 VAR_3 = FUNC_7(VAR_0);

exit:
 if (VAR_3)
  FUNC_5(VAR_0);

 FUNC_4(VAR_2);
}
