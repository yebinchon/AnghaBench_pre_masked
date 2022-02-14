
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
 size_t VAR_4 ;
 char* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct net* FUNC_4 (int ) ;
 struct tipc_bearer* FUNC_5 (struct net*,char*) ;
 int VAR_5 ;
 int FUNC_6 (struct tipc_bearer*,struct nlattr*) ;

int FUNC_7(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 int VAR_8;
 char *VAR_9;
 struct tipc_bearer *VAR_10;
 struct nlattr *VAR_11[VAR_2 + 1];
 struct net *VAR_12 = FUNC_4(VAR_6->sk);

 if (!VAR_7->attrs[VAR_1])
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_11, VAR_2,
       VAR_7->attrs[VAR_1],
       VAR_5, VAR_7->extack);
 if (VAR_8)
  return VAR_8;

 if (!VAR_11[VAR_3])
  return -VAR_0;
 VAR_9 = FUNC_0(VAR_11[VAR_3]);

 FUNC_2();
 VAR_10 = FUNC_5(VAR_12, VAR_9);
 if (!VAR_10) {
  FUNC_3();
  return -VAR_0;
 }
 FUNC_3();

 return 0;
}
