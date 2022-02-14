
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct nfc_digital_dev {int dummy; } ;
struct digital_sensf_req {int sc1; int sc2; scalar_t__ tsn; int rc; int cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfc_digital_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nfc_digital_dev*,int ,int) ;
 int VAR_5 ;
 int FUNC_2 (struct nfc_digital_dev*,struct sk_buff*,int,int ,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct nfc_digital_dev*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

int FUNC_8(struct nfc_digital_dev *VAR_6, u8 VAR_7)
{
 struct digital_sensf_req *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10;
 u8 VAR_11;

 VAR_10 = FUNC_1(VAR_6, VAR_3, VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_6, VAR_2,
         VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_11 = sizeof(struct digital_sensf_req);

 VAR_9 = FUNC_4(VAR_6, VAR_11);
 if (!VAR_9)
  return -VAR_1;

 FUNC_7(VAR_9, VAR_11);

 VAR_8 = (struct digital_sensf_req *)VAR_9->data;
 VAR_8->cmd = VAR_0;
 VAR_8->sc1 = 0xFF;
 VAR_8->sc2 = 0xFF;
 VAR_8->rc = 0;
 VAR_8->tsn = 0;

 *(u8 *)FUNC_6(VAR_9, 1) = VAR_11 + 1;

 if (!FUNC_0(VAR_6))
  FUNC_3(VAR_9);

 VAR_10 = FUNC_2(VAR_6, VAR_9, 30, VAR_5,
     ((void*)0));
 if (VAR_10)
  FUNC_5(VAR_9);

 return VAR_10;
}
