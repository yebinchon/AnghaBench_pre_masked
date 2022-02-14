
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int *) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_5,
       struct devlink *VAR_6,
       u8 *VAR_7, u32 VAR_8,
       u64 VAR_9)
{
 struct nlattr *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_5, VAR_1);
 if (!VAR_10)
  return -VAR_4;

 VAR_11 = FUNC_3(VAR_5, VAR_3, VAR_8, VAR_7);
 if (VAR_11)
  goto nla_put_failure;

 VAR_11 = FUNC_4(VAR_5, VAR_2, VAR_9,
    VAR_0);
 if (VAR_11)
  goto nla_put_failure;

 FUNC_1(VAR_5, VAR_10);
 return 0;

nla_put_failure:
 FUNC_0(VAR_5, VAR_10);
 return VAR_11;
}
