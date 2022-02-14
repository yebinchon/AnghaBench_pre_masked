
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct nfc_digital_dev {int dummy; } ;
struct digital_sensf_req {scalar_t__ cmd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nfc_digital_dev*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct nfc_digital_dev*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct nfc_digital_dev*,struct digital_sensf_req*) ;
 int FUNC_8 (struct sk_buff*,int) ;

void FUNC_9(struct nfc_digital_dev *VAR_2, void *VAR_3,
          struct sk_buff *VAR_4)
{
 struct digital_sensf_req *VAR_5;
 int VAR_6;

 if (FUNC_1(VAR_4)) {
  VAR_6 = FUNC_3(VAR_4);
  VAR_4 = ((void*)0);
  goto exit;
 }

 if (!FUNC_0(VAR_2)) {
  VAR_6 = FUNC_6(VAR_4);
  if (VAR_6) {
   FUNC_2("6.4.1.8");
   goto exit;
  }
 }

 if (VAR_4->len != sizeof(struct digital_sensf_req) + 1) {
  VAR_6 = -VAR_1;
  goto exit;
 }

 FUNC_8(VAR_4, 1);
 VAR_5 = (struct digital_sensf_req *)VAR_4->data;

 if (VAR_5->cmd != VAR_0) {
  VAR_6 = -VAR_1;
  goto exit;
 }

 VAR_6 = FUNC_7(VAR_2, VAR_5);

exit:
 if (VAR_6)
  FUNC_5(VAR_2);

 FUNC_4(VAR_4);
}
