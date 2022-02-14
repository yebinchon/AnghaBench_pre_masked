
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct nfc_target {scalar_t__* sensf_res; scalar_t__ sensf_res_len; scalar_t__* nfcid2; scalar_t__ nfcid2_len; } ;
struct nfc_digital_dev {int dummy; } ;
struct digital_sensf_res {struct digital_sensf_res* nfcid2; } ;


 int FUNC_0 (struct nfc_digital_dev*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct nfc_digital_dev*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct nfc_digital_dev*,struct nfc_target*,int ) ;
 int FUNC_8 (scalar_t__*,struct digital_sensf_res*,scalar_t__) ;
 int FUNC_9 (struct nfc_target*,int ,int) ;
 int FUNC_10 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_11(struct nfc_digital_dev *VAR_7, void *VAR_8,
       struct sk_buff *VAR_9)
{
 int VAR_10;
 u8 VAR_11;
 struct nfc_target VAR_12;
 struct digital_sensf_res *VAR_13;

 if (FUNC_1(VAR_9)) {
  VAR_10 = FUNC_3(VAR_9);
  VAR_9 = ((void*)0);
  goto exit;
 }

 if (VAR_9->len < VAR_2) {
  VAR_10 = -VAR_3;
  goto exit;
 }

 if (!FUNC_0(VAR_7)) {
  VAR_10 = FUNC_6(VAR_9);
  if (VAR_10) {
   FUNC_2("6.4.1.8");
   goto exit;
  }
 }

 FUNC_10(VAR_9, 1);

 FUNC_9(&VAR_12, 0, sizeof(struct nfc_target));

 VAR_13 = (struct digital_sensf_res *)VAR_9->data;

 FUNC_8(VAR_12.sensf_res, VAR_13, VAR_9->len);
 VAR_12.sensf_res_len = VAR_9->len;

 FUNC_8(VAR_12.nfcid2, VAR_13->nfcid2, VAR_4);
 VAR_12.nfcid2_len = VAR_4;

 if (VAR_12.nfcid2[0] == VAR_0 &&
     VAR_12.nfcid2[1] == VAR_1)
  VAR_11 = VAR_6;
 else
  VAR_11 = VAR_5;

 VAR_10 = FUNC_7(VAR_7, &VAR_12, VAR_11);

exit:
 FUNC_4(VAR_9);

 if (VAR_10)
  FUNC_5(VAR_7);
}
