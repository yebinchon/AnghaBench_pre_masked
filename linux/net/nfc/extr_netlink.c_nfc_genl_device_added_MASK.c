
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int ) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct nfc_dev*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;

int FUNC_6(struct nfc_dev *VAR_6)
{
 struct sk_buff *VAR_7;
 void *VAR_8;

 VAR_7 = FUNC_5(VAR_4, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_7, 0, 0, &VAR_5, 0,
     VAR_3);
 if (!VAR_8)
  goto free_msg;

 if (FUNC_3(VAR_6, VAR_7))
  goto nla_put_failure;

 FUNC_0(VAR_7, VAR_8);

 FUNC_1(&VAR_5, VAR_7, 0, 0, VAR_2);

 return 0;

nla_put_failure:
free_msg:
 FUNC_4(VAR_7);
 return -VAR_0;
}
