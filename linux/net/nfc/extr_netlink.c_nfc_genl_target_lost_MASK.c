
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nfc_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int ) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_3 (struct nfc_dev*) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;

int FUNC_8(struct nfc_dev *VAR_8, u32 VAR_9)
{
 struct sk_buff *VAR_10;
 void *VAR_11;

 VAR_10 = FUNC_7(VAR_6, VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_2(VAR_10, 0, 0, &VAR_7, 0,
     VAR_5);
 if (!VAR_11)
  goto free_msg;

 if (FUNC_4(VAR_10, VAR_3, FUNC_3(VAR_8)) ||
     FUNC_5(VAR_10, VAR_4, VAR_9))
  goto nla_put_failure;

 FUNC_0(VAR_10, VAR_11);

 FUNC_1(&VAR_7, VAR_10, 0, 0, VAR_2);

 return 0;

nla_put_failure:
free_msg:
 FUNC_6(VAR_10);
 return -VAR_0;
}
