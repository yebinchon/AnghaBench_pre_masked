
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_sock {int sk; } ;
struct sk_buff {int len; int sk; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {int* args; int nlh; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct netlink_callback*,struct tipc_sock*,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_4 (int *) ;
 struct net* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int ,struct nlattr***) ;
 struct tipc_sock* FUNC_8 (struct net*,int) ;

int FUNC_9(struct sk_buff *VAR_5, struct netlink_callback *VAR_6)
{
 int VAR_7;
 u32 VAR_8 = VAR_6->args[0];
 u32 VAR_9 = VAR_6->args[1];
 u32 VAR_10 = VAR_6->args[2];
 struct net *VAR_11 = FUNC_5(VAR_5->sk);
 struct tipc_sock *VAR_12;

 if (!VAR_8) {
  struct nlattr **VAR_13;
  struct nlattr *VAR_14[VAR_2 + 1];

  VAR_7 = FUNC_7(VAR_6->nlh, &VAR_13);
  if (VAR_7)
   return VAR_7;

  if (!VAR_13[VAR_1])
   return -VAR_0;

  VAR_7 = FUNC_3(VAR_14, VAR_2,
        VAR_13[VAR_1],
        VAR_4, ((void*)0));
  if (VAR_7)
   return VAR_7;

  if (!VAR_14[VAR_3])
   return -VAR_0;

  VAR_8 = FUNC_2(VAR_14[VAR_3]);
 }

 if (VAR_10)
  return 0;

 VAR_12 = FUNC_8(VAR_11, VAR_8);
 if (!VAR_12)
  return -VAR_0;

 FUNC_1(&VAR_12->sk);
 VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_12, &VAR_9);
 if (!VAR_7)
  VAR_10 = 1;
 FUNC_4(&VAR_12->sk);
 FUNC_6(&VAR_12->sk);

 VAR_6->args[0] = VAR_8;
 VAR_6->args[1] = VAR_9;
 VAR_6->args[2] = VAR_10;

 return VAR_5->len;
}
