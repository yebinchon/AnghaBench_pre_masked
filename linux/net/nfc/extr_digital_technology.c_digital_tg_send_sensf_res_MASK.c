
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct nfc_digital_dev {int dummy; } ;
struct digital_sensf_res {int * rd; int * nfcid2; int cmd; } ;
struct digital_sensf_req {int rc; int sc2; int sc1; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfc_digital_dev*) ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct nfc_digital_dev*,int) ;
 int VAR_7 ;
 int FUNC_3 (struct nfc_digital_dev*,struct sk_buff*,int,int ,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct digital_sensf_res*,int ,int) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_9(struct nfc_digital_dev *VAR_8,
         struct digital_sensf_req *VAR_9)
{
 struct sk_buff *VAR_10;
 u8 VAR_11;
 int VAR_12;
 struct digital_sensf_res *VAR_13;

 VAR_11 = sizeof(struct digital_sensf_res);

 if (VAR_9->rc == VAR_3)
  VAR_11 -= sizeof(VAR_13->rd);

 VAR_10 = FUNC_2(VAR_8, VAR_11);
 if (!VAR_10)
  return -VAR_6;

 FUNC_8(VAR_10, VAR_11);

 VAR_13 = (struct digital_sensf_res *)VAR_10->data;

 FUNC_6(VAR_13, 0, VAR_11);

 VAR_13->cmd = VAR_0;
 VAR_13->nfcid2[0] = VAR_1;
 VAR_13->nfcid2[1] = VAR_2;
 FUNC_4(&VAR_13->nfcid2[2], 6);

 switch (VAR_9->rc) {
 case 128:
  VAR_13->rd[0] = VAR_9->sc1;
  VAR_13->rd[1] = VAR_9->sc2;
  break;
 case 129:
  VAR_13->rd[0] = VAR_4;
  VAR_13->rd[1] = VAR_5;
  break;
 }

 *(u8 *)FUNC_7(VAR_10, sizeof(u8)) = VAR_11 + 1;

 if (!FUNC_0(VAR_8))
  FUNC_1(VAR_10);

 VAR_12 = FUNC_3(VAR_8, VAR_10, 300,
     VAR_7, ((void*)0));
 if (VAR_12)
  FUNC_5(VAR_10);

 return VAR_12;
}
