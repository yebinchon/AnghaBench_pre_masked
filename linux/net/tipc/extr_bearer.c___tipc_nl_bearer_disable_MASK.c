
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_bearer {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int extack; int * attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct net*,struct tipc_bearer*) ;
 char* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,int ,int ,int ) ;
 struct net* FUNC_3 (int ) ;
 struct tipc_bearer* FUNC_4 (struct net*,char*) ;
 int VAR_4 ;

int FUNC_5(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 int VAR_7;
 char *VAR_8;
 struct tipc_bearer *VAR_9;
 struct nlattr *VAR_10[VAR_2 + 1];
 struct net *VAR_11 = FUNC_3(VAR_5->sk);

 if (!VAR_6->attrs[VAR_1])
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_10, VAR_2,
       VAR_6->attrs[VAR_1],
       VAR_4, VAR_6->extack);
 if (VAR_7)
  return VAR_7;

 if (!VAR_10[VAR_3])
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_10[VAR_3]);

 VAR_9 = FUNC_4(VAR_11, VAR_8);
 if (!VAR_9)
  return -VAR_0;

 FUNC_0(VAR_11, VAR_9);

 return 0;
}
