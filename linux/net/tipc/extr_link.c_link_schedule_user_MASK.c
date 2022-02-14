
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct TYPE_3__ {int link_congs; } ;
struct tipc_link {TYPE_1__ stats; int wakeupq; int addr; int net; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int chain_imp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct tipc_msg*) ;
 int FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct tipc_link*,int ,char*) ;

__attribute__((used)) static int FUNC_9(struct tipc_link *VAR_5, struct tipc_msg *VAR_6)
{
 u32 VAR_7 = FUNC_7(VAR_5->net);
 u32 VAR_8 = FUNC_3(VAR_6);
 struct sk_buff *VAR_9;


 VAR_9 = FUNC_6(VAR_3, 0, VAR_2, 0,
         VAR_7, VAR_5->addr, VAR_8, 0, 0);
 if (!VAR_9)
  return -VAR_1;
 FUNC_4(FUNC_1(VAR_9), 1);
 FUNC_0(VAR_9)->chain_imp = FUNC_2(VAR_6);
 FUNC_5(&VAR_5->wakeupq, VAR_9);
 VAR_5->stats.link_congs++;
 FUNC_8(VAR_5, VAR_4, "wakeup scheduled!");
 return -VAR_0;
}
