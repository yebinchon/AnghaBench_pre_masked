
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_member {int window; int advertised; int state; } ;
struct tipc_group {int* open; int net; } ;
struct sk_buff_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff_head*) ;
 struct tipc_member* FUNC_1 (struct tipc_group*,int ,int ) ;
 int FUNC_2 (struct tipc_member*) ;
 int FUNC_3 (struct tipc_group*,struct tipc_member*,int ,struct sk_buff_head*) ;
 int FUNC_4 (int ,struct sk_buff_head*) ;

bool FUNC_5(struct tipc_group *VAR_6, u32 VAR_7, u32 VAR_8,
       int VAR_9, struct tipc_member **VAR_10)
{
 struct sk_buff_head VAR_11;
 struct tipc_member *VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = FUNC_1(VAR_6, VAR_7, VAR_8);
 if (!FUNC_2(VAR_12)) {
  *VAR_10 = ((void*)0);
  return 0;
 }
 *VAR_10 = VAR_12;

 if (VAR_12->window >= VAR_9)
  return 0;

 *VAR_6->open = 0;


 VAR_13 = VAR_12->advertised;
 VAR_14 = VAR_12->state;
 if (VAR_14 == VAR_4 && VAR_13 == VAR_1)
  return 1;
 if (VAR_14 == VAR_3 && VAR_13 == VAR_0)
  return 1;
 if (VAR_14 == VAR_5 && VAR_13 == VAR_1)
  return 1;
 FUNC_0(&VAR_11);
 FUNC_3(VAR_6, VAR_12, VAR_2, &VAR_11);
 FUNC_4(VAR_6->net, &VAR_11);
 return 1;
}
