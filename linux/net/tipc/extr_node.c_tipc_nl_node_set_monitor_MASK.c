
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int extack; int * attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,int ,int ,int ) ;
 struct net* FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct net*,int ) ;

int FUNC_4(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct nlattr *VAR_7[VAR_3 + 1];
 struct net *VAR_8 = FUNC_2(VAR_5->sk);
 int VAR_9;

 if (!VAR_6->attrs[VAR_1])
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_7, VAR_3,
       VAR_6->attrs[VAR_1],
       VAR_4,
       VAR_6->extack);
 if (VAR_9)
  return VAR_9;

 if (VAR_7[VAR_2]) {
  u32 VAR_10;

  VAR_10 = FUNC_0(VAR_7[VAR_2]);
  VAR_9 = FUNC_3(VAR_8, VAR_10);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
