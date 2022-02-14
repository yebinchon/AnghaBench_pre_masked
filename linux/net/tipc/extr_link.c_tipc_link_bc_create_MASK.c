
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tipc_link {int state; struct tipc_link* bc_rcvlink; scalar_t__ ackers; int name; } ;
struct sk_buff_head {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct tipc_link*) ;
 scalar_t__ FUNC_1 (struct tipc_link*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct net*) ;
 int VAR_5 ;
 int FUNC_4 (struct net*,char*,int ,int ,char,int,int ,int,int ,int ,int ,int *,int,struct tipc_link*,int *,struct sk_buff_head*,struct sk_buff_head*,struct tipc_link**) ;
 int FUNC_5 (struct tipc_link*) ;
 int FUNC_6 (struct tipc_link*,int ,char*) ;

bool FUNC_7(struct net *VAR_6, u32 VAR_7, u32 VAR_8,
    int VAR_9, int VAR_10, u16 VAR_11,
    struct sk_buff_head *VAR_12,
    struct sk_buff_head *VAR_13,
    struct tipc_link *VAR_14,
    struct tipc_link **VAR_15)
{
 struct tipc_link *VAR_16;

 if (!FUNC_4(VAR_6, "", VAR_2, 0, 'Z', VAR_9, 0, VAR_10,
         0, VAR_7, VAR_8, ((void*)0), VAR_11, VAR_14,
         ((void*)0), VAR_12, VAR_13, VAR_15))
  return 0;

 VAR_16 = *VAR_15;
 FUNC_2(VAR_16->name, VAR_5);
 FUNC_6(VAR_16, VAR_4, "bclink created!");
 FUNC_5(VAR_16);
 VAR_16->state = VAR_1;
 VAR_16->ackers = 0;
 VAR_16->bc_rcvlink = VAR_16;


 if (FUNC_1(VAR_16))
  VAR_16->state = VAR_0;


 if (FUNC_0(VAR_16) && !(VAR_11 & VAR_3))
  FUNC_3(VAR_6);

 return 1;
}
