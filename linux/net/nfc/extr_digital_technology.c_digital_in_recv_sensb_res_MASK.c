
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct nfc_target {int dummy; } ;
struct nfc_digital_dev {int target_fsc; } ;
struct digital_sensb_res {scalar_t__ cmd; int* proto_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int * VAR_5 ;
 int FUNC_6 (struct nfc_digital_dev*,struct nfc_target*,struct digital_sensb_res*) ;
 int FUNC_7 (struct nfc_digital_dev*) ;
 int FUNC_8 (struct nfc_target*) ;
 struct nfc_target* FUNC_9 (int,int ) ;

__attribute__((used)) static void FUNC_10(struct nfc_digital_dev *VAR_6, void *VAR_7,
          struct sk_buff *VAR_8)
{
 struct nfc_target *VAR_9 = ((void*)0);
 struct digital_sensb_res *VAR_10;
 u8 VAR_11;
 int VAR_12;

 if (FUNC_2(VAR_8)) {
  VAR_12 = FUNC_4(VAR_8);
  VAR_8 = ((void*)0);
  goto exit;
 }

 if (VAR_8->len != sizeof(*VAR_10)) {
  FUNC_3("5.6.2.1");
  VAR_12 = -VAR_2;
  goto exit;
 }

 VAR_10 = (struct digital_sensb_res *)VAR_8->data;

 if (VAR_10->cmd != VAR_1) {
  FUNC_3("5.6.2");
  VAR_12 = -VAR_2;
  goto exit;
 }

 if (!(VAR_10->proto_info[1] & FUNC_0(0))) {
  FUNC_3("5.6.2.12");
  VAR_12 = -VAR_2;
  goto exit;
 }

 if (VAR_10->proto_info[1] & FUNC_0(3)) {
  FUNC_3("5.6.2.16");
  VAR_12 = -VAR_2;
  goto exit;
 }

 VAR_11 = FUNC_1(VAR_10->proto_info[1]);
 if (VAR_11 >= 8)
  VAR_6->target_fsc = VAR_0;
 else
  VAR_6->target_fsc = VAR_5[VAR_11];

 VAR_9 = FUNC_9(sizeof(struct nfc_target), VAR_4);
 if (!VAR_9) {
  VAR_12 = -VAR_3;
  goto exit;
 }

 VAR_12 = FUNC_6(VAR_6, VAR_9, VAR_10);

exit:
 FUNC_5(VAR_8);

 if (VAR_12) {
  FUNC_8(VAR_9);
  FUNC_7(VAR_6);
 }
}
