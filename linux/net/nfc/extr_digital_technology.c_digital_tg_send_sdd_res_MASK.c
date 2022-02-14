
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct nfc_digital_dev {int dummy; } ;
struct digital_sdd_res {int* nfcid1; int bcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct nfc_digital_dev*,int) ;
 int FUNC_1 (struct nfc_digital_dev*,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct nfc_digital_dev*,struct sk_buff*,int,int ,int *) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_6(struct nfc_digital_dev *VAR_4)
{
 struct sk_buff *VAR_5;
 struct digital_sdd_res *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_0(VAR_4, sizeof(struct digital_sdd_res));
 if (!VAR_5)
  return -VAR_0;

 FUNC_5(VAR_5, sizeof(struct digital_sdd_res));
 VAR_6 = (struct digital_sdd_res *)VAR_5->data;

 VAR_6->nfcid1[0] = 0x08;
 FUNC_3(VAR_6->nfcid1 + 1, 3);

 VAR_6->bcc = 0;
 for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
  VAR_6->bcc ^= VAR_6->nfcid1[VAR_8];

 VAR_7 = FUNC_1(VAR_4, VAR_1,
    VAR_2);
 if (VAR_7) {
  FUNC_4(VAR_5);
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_4, VAR_5, 300, VAR_3,
     ((void*)0));
 if (VAR_7)
  FUNC_4(VAR_5);

 return VAR_7;
}
