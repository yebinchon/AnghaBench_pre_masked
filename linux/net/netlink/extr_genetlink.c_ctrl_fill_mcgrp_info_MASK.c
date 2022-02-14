
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_multicast_group {int name; } ;
struct genl_family {int id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_8(const struct genl_family *VAR_7,
    const struct genl_multicast_group *VAR_8,
    int VAR_9, u32 VAR_10, u32 VAR_11, u32 VAR_12,
    struct sk_buff *VAR_13, u8 VAR_14)
{
 void *VAR_15;
 struct nlattr *VAR_16;
 struct nlattr *VAR_17;

 VAR_15 = FUNC_2(VAR_13, VAR_10, VAR_11, &VAR_6, VAR_12, VAR_14);
 if (VAR_15 == ((void*)0))
  return -1;

 if (FUNC_5(VAR_13, VAR_1, VAR_7->name) ||
     FUNC_6(VAR_13, VAR_0, VAR_7->id))
  goto nla_put_failure;

 VAR_16 = FUNC_4(VAR_13, VAR_2);
 if (VAR_16 == ((void*)0))
  goto nla_put_failure;

 VAR_17 = FUNC_4(VAR_13, 1);
 if (VAR_17 == ((void*)0))
  goto nla_put_failure;

 if (FUNC_7(VAR_13, VAR_3, VAR_9) ||
     FUNC_5(VAR_13, VAR_4,
      VAR_8->name))
  goto nla_put_failure;

 FUNC_3(VAR_13, VAR_17);
 FUNC_3(VAR_13, VAR_16);

 FUNC_1(VAR_13, VAR_15);
 return 0;

nla_put_failure:
 FUNC_0(VAR_13, VAR_15);
 return -VAR_5;
}
