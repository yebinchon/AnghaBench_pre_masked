
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct nfc_target {scalar_t__ nfcid1_len; scalar_t__ nfcid1; } ;
struct nfc_digital_dev {int dummy; } ;
struct digital_sdd_res {int* nfcid1; int bcc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct nfc_digital_dev*,struct nfc_target*,struct digital_sdd_res*) ;
 int FUNC_5 (struct nfc_digital_dev*) ;
 int FUNC_6 (struct nfc_target*) ;
 int FUNC_7 (scalar_t__,int*,int) ;

__attribute__((used)) static void FUNC_8(struct nfc_digital_dev *VAR_3, void *VAR_4,
        struct sk_buff *VAR_5)
{
 struct nfc_target *VAR_6 = VAR_4;
 struct digital_sdd_res *VAR_7;
 int VAR_8;
 u8 VAR_9, VAR_10;
 u8 VAR_11, VAR_12;

 if (FUNC_0(VAR_5)) {
  VAR_8 = FUNC_2(VAR_5);
  VAR_5 = ((void*)0);
  goto exit;
 }

 if (VAR_5->len < VAR_1) {
  FUNC_1("4.7.2.8");
  VAR_8 = -VAR_2;
  goto exit;
 }

 VAR_7 = (struct digital_sdd_res *)VAR_5->data;

 for (VAR_11 = 0, VAR_12 = 0; VAR_11 < 4; VAR_11++)
  VAR_12 ^= VAR_7->nfcid1[VAR_11];

 if (VAR_12 != VAR_7->bcc) {
  FUNC_1("4.7.2.6");
  VAR_8 = -VAR_2;
  goto exit;
 }

 if (VAR_7->nfcid1[0] == VAR_0) {
  VAR_9 = 1;
  VAR_10 = 3;
 } else {
  VAR_9 = 0;
  VAR_10 = 4;
 }

 FUNC_7(VAR_6->nfcid1 + VAR_6->nfcid1_len, VAR_7->nfcid1 + VAR_9,
        VAR_10);
 VAR_6->nfcid1_len += VAR_10;

 VAR_8 = FUNC_4(VAR_3, VAR_6, VAR_7);

exit:
 FUNC_3(VAR_5);

 if (VAR_8) {
  FUNC_6(VAR_6);
  FUNC_5(VAR_3);
 }
}
