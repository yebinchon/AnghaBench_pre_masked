
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_net {int net_id; int random; int trial_addr; } ;
struct tipc_msg {int dummy; } ;
struct tipc_bearer {int addr; TYPE_1__* media; int domain; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int (* addr2msg ) (int ,int *) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct tipc_msg*) ;
 int FUNC_2 (struct tipc_msg*,int ) ;
 int FUNC_3 (struct tipc_msg*,int ) ;
 int FUNC_4 (struct tipc_msg*,int ) ;
 int FUNC_5 (struct tipc_msg*,int ) ;
 int FUNC_6 (struct tipc_msg*,int ) ;
 int FUNC_7 (struct tipc_msg*,int) ;
 int FUNC_8 (struct tipc_msg*,scalar_t__) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,struct tipc_msg*,int ,int ,scalar_t__,int ) ;
 struct tipc_net* FUNC_11 (struct net*) ;
 int FUNC_12 (struct net*) ;

__attribute__((used)) static void FUNC_13(struct net *VAR_4, struct sk_buff *VAR_5,
          u32 VAR_6, struct tipc_bearer *VAR_7)
{
 struct tipc_net *VAR_8 = FUNC_11(VAR_4);
 u32 VAR_9 = VAR_7->domain;
 struct tipc_msg *VAR_10;

 VAR_10 = FUNC_0(VAR_5);
 FUNC_10(VAR_8->trial_addr, VAR_10, VAR_0, VAR_6,
        VAR_1, VAR_9);
 FUNC_8(VAR_10, VAR_1 + VAR_2);
 FUNC_7(VAR_10, 1);
 FUNC_6(VAR_10, VAR_8->random);
 FUNC_4(VAR_10, VAR_3);
 FUNC_3(VAR_10, VAR_9);
 FUNC_2(VAR_10, VAR_8->net_id);
 VAR_7->media->addr2msg(FUNC_1(VAR_10), &VAR_7->addr);
 FUNC_5(VAR_10, FUNC_12(VAR_4));
}
