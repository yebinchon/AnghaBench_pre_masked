
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nfc_dev {int dep_link_up; int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int ) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;

int FUNC_8(struct nfc_dev *VAR_11, u32 VAR_12,
          u8 VAR_13, u8 VAR_14)
{
 struct sk_buff *VAR_15;
 void *VAR_16;

 FUNC_7("DEP link is up\n");

 VAR_15 = FUNC_6(VAR_9, VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_16 = FUNC_2(VAR_15, 0, 0, &VAR_10, 0, VAR_7);
 if (!VAR_16)
  goto free_msg;

 if (FUNC_3(VAR_15, VAR_4, VAR_11->idx))
  goto nla_put_failure;
 if (VAR_14 == VAR_8 &&
     FUNC_3(VAR_15, VAR_6, VAR_12))
  goto nla_put_failure;
 if (FUNC_4(VAR_15, VAR_3, VAR_13) ||
     FUNC_4(VAR_15, VAR_5, VAR_14))
  goto nla_put_failure;

 FUNC_0(VAR_15, VAR_16);

 VAR_11->dep_link_up = 1;

 FUNC_1(&VAR_10, VAR_15, 0, 0, VAR_2);

 return 0;

nla_put_failure:
free_msg:
 FUNC_5(VAR_15);
 return -VAR_0;
}
