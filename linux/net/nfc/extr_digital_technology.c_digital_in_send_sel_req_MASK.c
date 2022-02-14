
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct nfc_target {int nfcid1_len; } ;
struct nfc_digital_dev {int dummy; } ;
struct digital_sel_req {int b2; int bcc; int nfcid1; int sel_cmd; } ;
struct digital_sdd_res {int bcc; int nfcid1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nfc_digital_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct nfc_digital_dev*,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct nfc_digital_dev*,struct sk_buff*,int,int ,struct nfc_target*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct nfc_digital_dev*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_8(struct nfc_digital_dev *VAR_7,
       struct nfc_target *VAR_8,
       struct digital_sdd_res *VAR_9)
{
 struct sk_buff *VAR_10;
 struct digital_sel_req *VAR_11;
 u8 VAR_12;
 int VAR_13;

 VAR_10 = FUNC_4(VAR_7, sizeof(struct digital_sel_req));
 if (!VAR_10)
  return -VAR_3;

 FUNC_7(VAR_10, sizeof(struct digital_sel_req));
 VAR_11 = (struct digital_sel_req *)VAR_10->data;

 if (VAR_8->nfcid1_len <= 4)
  VAR_12 = VAR_0;
 else if (VAR_8->nfcid1_len < 10)
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_2;

 VAR_11->sel_cmd = VAR_12;
 VAR_11->b2 = 0x70;
 FUNC_6(VAR_11->nfcid1, VAR_9->nfcid1, 4);
 VAR_11->bcc = VAR_9->bcc;

 if (FUNC_0(VAR_7)) {
  VAR_13 = FUNC_1(VAR_7, VAR_4,
    VAR_5);
  if (VAR_13)
   goto exit;
 } else {
  FUNC_3(VAR_10);
 }

 VAR_13 = FUNC_2(VAR_7, VAR_10, 30, VAR_6,
     VAR_8);
exit:
 if (VAR_13)
  FUNC_5(VAR_10);

 return VAR_13;
}
