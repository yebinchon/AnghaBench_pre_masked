
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nfc_digital_dev {int dummy; } ;
struct digital_sensb_req {int afi; int param; int cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct nfc_digital_dev*,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct nfc_digital_dev*,struct sk_buff*,int,int ,int *) ;
 struct sk_buff* FUNC_3 (struct nfc_digital_dev*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 struct digital_sensb_req* FUNC_5 (struct sk_buff*,int) ;

int FUNC_6(struct nfc_digital_dev *VAR_7, u8 VAR_8)
{
 struct digital_sensb_req *VAR_9;
 struct sk_buff *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_7, VAR_3,
         VAR_5);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_7, VAR_2,
         VAR_4);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_3(VAR_7, sizeof(*VAR_9));
 if (!VAR_10)
  return -VAR_1;

 VAR_9 = FUNC_5(VAR_10, sizeof(*VAR_9));

 VAR_9->cmd = VAR_0;
 VAR_9->afi = 0x00;
 VAR_9->param = FUNC_0(0);

 VAR_11 = FUNC_2(VAR_7, VAR_10, 30, VAR_6,
     ((void*)0));
 if (VAR_11)
  FUNC_4(VAR_10);

 return VAR_11;
}
