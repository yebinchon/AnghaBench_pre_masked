
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nfc_se {int type; } ;
struct nfc_evt_transaction {int params; int params_len; int aid; int aid_len; } ;
struct nfc_dev {int dev; int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,struct nfc_evt_transaction*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int *,struct sk_buff*,int ,int ,int ) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 struct nfc_se* FUNC_4 (struct nfc_dev*,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;

int FUNC_10(struct nfc_dev *VAR_11, u8 VAR_12,
       struct nfc_evt_transaction *VAR_13)
{
 struct nfc_se *VAR_14;
 struct sk_buff *VAR_15;
 void *VAR_16;

 VAR_15 = FUNC_9(VAR_9, VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_16 = FUNC_3(VAR_15, 0, 0, &VAR_10, 0,
     VAR_8);
 if (!VAR_16)
  goto free_msg;

 VAR_14 = FUNC_4(VAR_11, VAR_12);
 if (!VAR_14)
  goto free_msg;

 if (FUNC_6(VAR_15, VAR_3, VAR_11->idx) ||
     FUNC_6(VAR_15, VAR_5, VAR_12) ||
     FUNC_7(VAR_15, VAR_7, VAR_14->type) ||
     FUNC_5(VAR_15, VAR_4, VAR_13->aid_len,
      VAR_13->aid) ||
     FUNC_5(VAR_15, VAR_6, VAR_13->params_len,
      VAR_13->params))
  goto nla_put_failure;


 FUNC_0(&VAR_11->dev, VAR_13);

 FUNC_1(VAR_15, VAR_16);

 FUNC_2(&VAR_10, VAR_15, 0, 0, VAR_2);

 return 0;

nla_put_failure:
free_msg:

 FUNC_0(&VAR_11->dev, VAR_13);
 FUNC_8(VAR_15);
 return -VAR_0;
}
