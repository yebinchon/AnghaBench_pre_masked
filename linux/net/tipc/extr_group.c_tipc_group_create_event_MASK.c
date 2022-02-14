
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tipc_msg {int dummy; } ;
struct tipc_member {int instance; int port; int node; } ;
struct tipc_group {int type; int portid; int net; } ;
struct TYPE_6__ {int upper; int lower; int type; } ;
struct TYPE_7__ {TYPE_2__ seq; } ;
struct TYPE_5__ {int node; int ref; } ;
struct tipc_event {TYPE_3__ s; TYPE_1__ port; int found_upper; int found_lower; int event; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
typedef int evt ;
struct TYPE_8__ {int orig_member; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff_head*,struct sk_buff*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,struct tipc_event*,int) ;
 int FUNC_4 (struct tipc_event*,int ,int) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*,int) ;
 int FUNC_7 (struct tipc_msg*,int ) ;
 int FUNC_8 (struct tipc_msg*,int ) ;
 int FUNC_9 (struct tipc_msg*,int ) ;
 struct sk_buff* FUNC_10 (int ,int ,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct tipc_group *VAR_3,
        struct tipc_member *VAR_4,
        u32 VAR_5, u16 VAR_6,
        struct sk_buff_head *VAR_7)
{ u32 VAR_8 = FUNC_11(VAR_3->net);
 struct tipc_event VAR_9;
 struct sk_buff *VAR_10;
 struct tipc_msg *VAR_11;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.event = VAR_5;
 VAR_9.found_lower = VAR_4->instance;
 VAR_9.found_upper = VAR_4->instance;
 VAR_9.port.ref = VAR_4->port;
 VAR_9.port.node = VAR_4->node;
 VAR_9.s.seq.type = VAR_3->type;
 VAR_9.s.seq.lower = VAR_4->instance;
 VAR_9.s.seq.upper = VAR_4->instance;

 VAR_10 = FUNC_10(VAR_1, VAR_2,
         VAR_0, sizeof(VAR_9), VAR_8, VAR_4->node,
         VAR_3->portid, VAR_4->port, 0);
 if (!VAR_10)
  return;

 VAR_11 = FUNC_2(VAR_10);
 FUNC_9(VAR_11, VAR_3->type);
 FUNC_8(VAR_11, VAR_5);
 FUNC_6(VAR_11, 1);
 FUNC_7(VAR_11, VAR_6);
 FUNC_3(FUNC_5(VAR_11), &VAR_9, sizeof(VAR_9));
 FUNC_0(VAR_10)->orig_member = VAR_4->instance;
 FUNC_1(VAR_7, VAR_10);
}
