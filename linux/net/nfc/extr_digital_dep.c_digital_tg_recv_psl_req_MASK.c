
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct nfc_digital_dev {int (* skb_check_crc ) (struct sk_buff*) ;int local_payload_max; int remote_payload_max; } ;
struct digital_psl_req {scalar_t__ dir; scalar_t__ cmd; int brs; int did; int fsl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct nfc_digital_dev*,struct sk_buff*) ;
 int FUNC_6 (struct nfc_digital_dev*,int ,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_11(struct nfc_digital_dev *VAR_7, void *VAR_8,
        struct sk_buff *VAR_9)
{
 int VAR_10;
 struct digital_psl_req *VAR_11;
 u8 VAR_12;
 u8 VAR_13, VAR_14, VAR_15;

 if (FUNC_1(VAR_9)) {
  VAR_10 = FUNC_3(VAR_9);
  VAR_9 = ((void*)0);
  goto exit;
 }

 VAR_10 = VAR_7->skb_check_crc(VAR_9);
 if (VAR_10) {
  FUNC_2("14.4.1.6");
  goto exit;
 }

 VAR_10 = FUNC_5(VAR_7, VAR_9);
 if (VAR_10) {
  FUNC_2("14.4.1.2");
  goto exit;
 }

 VAR_11 = (struct digital_psl_req *)VAR_9->data;

 if (VAR_9->len != sizeof(struct digital_psl_req) ||
     VAR_11->dir != VAR_1 ||
     VAR_11->cmd != VAR_0) {
  VAR_10 = -VAR_3;
  goto exit;
 }

 VAR_13 = (VAR_11->brs >> 3) & 0x07;
 switch (VAR_13) {
 case 0:
  VAR_12 = VAR_4;
  break;
 case 1:
  VAR_12 = VAR_5;
  break;
 case 2:
  VAR_12 = VAR_6;
  break;
 default:
  FUNC_9("Unsupported dsi value %d\n", VAR_13);
  goto exit;
 }

 VAR_15 = FUNC_0(VAR_11->fsl);
 VAR_14 = FUNC_4(VAR_15);

 if (!VAR_14 || (VAR_14 > FUNC_8(VAR_7->local_payload_max,
       VAR_7->remote_payload_max))) {
  VAR_10 = -VAR_2;
  goto exit;
 }

 VAR_7->local_payload_max = VAR_14;
 VAR_7->remote_payload_max = VAR_14;

 VAR_10 = FUNC_6(VAR_7, VAR_11->did, VAR_12);

exit:
 FUNC_7(VAR_9);
}
