
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nfc_se {int type; } ;
struct nfc_dev {int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int ) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 struct nfc_se* FUNC_3 (struct nfc_dev*,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;

int FUNC_8(struct nfc_dev *VAR_9, u8 VAR_10)
{
 struct nfc_se *VAR_11;
 struct sk_buff *VAR_12;
 void *VAR_13;

 VAR_12 = FUNC_7(VAR_7, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = FUNC_2(VAR_12, 0, 0, &VAR_8, 0,
     VAR_6);
 if (!VAR_13)
  goto free_msg;

 VAR_11 = FUNC_3(VAR_9, VAR_10);
 if (!VAR_11)
  goto free_msg;

 if (FUNC_4(VAR_12, VAR_3, VAR_9->idx) ||
     FUNC_4(VAR_12, VAR_4, VAR_10) ||
     FUNC_5(VAR_12, VAR_5, VAR_11->type))
  goto nla_put_failure;

 FUNC_0(VAR_12, VAR_13);

 FUNC_1(&VAR_8, VAR_12, 0, 0, VAR_2);

 return 0;

nla_put_failure:
free_msg:
 FUNC_6(VAR_12);
 return -VAR_0;
}
