
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct tipc_msg {int dummy; } ;
struct tipc_link {TYPE_1__* bc_sndlink; int net; int addr; scalar_t__ rcv_nxt; int deferdq; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ snd_nxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct tipc_msg*,scalar_t__) ;
 int FUNC_4 (struct tipc_msg*,scalar_t__) ;
 int FUNC_5 (struct tipc_msg*,scalar_t__) ;
 int FUNC_6 (struct tipc_msg*,scalar_t__) ;
 int FUNC_7 (struct tipc_msg*,int) ;
 struct sk_buff* FUNC_8 (int *) ;
 struct sk_buff* FUNC_9 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static bool FUNC_11(struct tipc_link *VAR_3, bool VAR_4,
      u16 VAR_5,
      struct sk_buff_head *VAR_6)
{
 struct sk_buff *VAR_7;
 struct tipc_msg *VAR_8;
 struct sk_buff *VAR_9 = FUNC_8(&VAR_3->deferdq);
 u16 VAR_10 = VAR_3->rcv_nxt - 1;
 u16 VAR_11 = VAR_5 - 1;

 VAR_7 = FUNC_9(VAR_0, VAR_2, VAR_1,
         0, VAR_3->addr, FUNC_10(VAR_3->net), 0, 0, 0);
 if (!VAR_7)
  return 0;
 VAR_8 = FUNC_1(VAR_7);
 FUNC_6(VAR_8, VAR_3->bc_sndlink->snd_nxt - 1);
 FUNC_3(VAR_8, VAR_10);
 FUNC_4(VAR_8, VAR_10);
 if (VAR_9)
  VAR_11 = FUNC_2(VAR_9) - 1;
 FUNC_5(VAR_8, VAR_11);
 FUNC_7(VAR_8, VAR_4);
 FUNC_0(VAR_6, VAR_7);
 return 1;
}
