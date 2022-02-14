
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_group {scalar_t__ scope; scalar_t__* open; int bc_snd_nxt; int instance; int type; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

int FUNC_5(struct tipc_group *VAR_10, struct sk_buff *VAR_11)
{
 struct nlattr *VAR_12 = FUNC_2(VAR_11, VAR_2);

 if (!VAR_12)
  return -VAR_0;

 if (FUNC_4(VAR_11, VAR_5,
   VAR_10->type) ||
     FUNC_4(VAR_11, VAR_6,
   VAR_10->instance) ||
     FUNC_4(VAR_11, VAR_3,
   VAR_10->bc_snd_nxt))
  goto group_msg_cancel;

 if (VAR_10->scope == VAR_9)
  if (FUNC_3(VAR_11, VAR_7))
   goto group_msg_cancel;

 if (VAR_10->scope == VAR_1)
  if (FUNC_3(VAR_11, VAR_4))
   goto group_msg_cancel;

 if (*VAR_10->open)
  if (FUNC_3(VAR_11, VAR_8))
   goto group_msg_cancel;

 FUNC_1(VAR_11, VAR_12);
 return 0;

group_msg_cancel:
 FUNC_0(VAR_11, VAR_12);
 return -1;
}
