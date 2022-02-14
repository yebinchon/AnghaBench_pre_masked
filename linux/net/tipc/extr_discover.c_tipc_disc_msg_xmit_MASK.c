
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct tipc_media_addr {int dummy; } ;
struct tipc_bearer {int identity; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct tipc_msg*,int ) ;
 int FUNC_2 (struct tipc_msg*,int ) ;
 int FUNC_3 (struct net*,int ,struct sk_buff*,struct tipc_media_addr*) ;
 struct sk_buff* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct net*,struct sk_buff*,int ,struct tipc_bearer*) ;

__attribute__((used)) static void FUNC_6(struct net *VAR_3, u32 VAR_4, u32 VAR_5,
          u32 VAR_6, u32 VAR_7,
          struct tipc_media_addr *VAR_8,
          struct tipc_bearer *VAR_9)
{
 struct tipc_msg *VAR_10;
 struct sk_buff *VAR_11;

 VAR_11 = FUNC_4(VAR_1 + VAR_2, VAR_0);
 if (!VAR_11)
  return;
 VAR_10 = FUNC_0(VAR_11);
 FUNC_5(VAR_3, VAR_11, VAR_4, VAR_9);
 FUNC_2(VAR_10, VAR_7);
 FUNC_1(VAR_10, VAR_5);
 FUNC_3(VAR_3, VAR_9->identity, VAR_11, VAR_8);
}
