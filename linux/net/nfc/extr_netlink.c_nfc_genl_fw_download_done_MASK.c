
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
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
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,char const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;

int FUNC_7(struct nfc_dev *VAR_9, const char *VAR_10,
         u32 VAR_11)
{
 struct sk_buff *VAR_12;
 void *VAR_13;

 VAR_12 = FUNC_6(VAR_7, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = FUNC_2(VAR_12, 0, 0, &VAR_8, 0,
     VAR_6);
 if (!VAR_13)
  goto free_msg;

 if (FUNC_3(VAR_12, VAR_5, VAR_10) ||
     FUNC_4(VAR_12, VAR_4, VAR_11) ||
     FUNC_4(VAR_12, VAR_3, VAR_9->idx))
  goto nla_put_failure;

 FUNC_0(VAR_12, VAR_13);

 FUNC_1(&VAR_8, VAR_12, 0, 0, VAR_2);

 return 0;

nla_put_failure:
free_msg:
 FUNC_5(VAR_12);
 return -VAR_0;
}
