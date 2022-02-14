
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct tipc_member {int bc_rcv_nxt; int list; int state; int bc_syncpt; scalar_t__ instance; } ;
struct tipc_group {scalar_t__ portid; int loopback; struct net* net; } ;
struct TYPE_2__ {scalar_t__ node; scalar_t__ ref; } ;
struct tipc_event {scalar_t__ found_lower; int event; TYPE_1__ port; } ;
struct sk_buff_head {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct tipc_msg*) ;
 int FUNC_2 (struct tipc_group*,struct tipc_member*,int const,int ,struct sk_buff_head*) ;
 struct tipc_member* FUNC_3 (struct tipc_group*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (struct tipc_group*,struct tipc_member*) ;
 struct tipc_member* FUNC_5 (struct tipc_group*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct tipc_member*,int*) ;
 int FUNC_7 (struct tipc_group*,struct tipc_member*,int ,struct sk_buff_head*) ;
 int FUNC_8 (struct tipc_group*) ;
 int FUNC_9 (struct tipc_member*,int ) ;
 int FUNC_10 (struct net*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct net*) ;

void FUNC_12(struct tipc_group *VAR_5,
      bool *VAR_6,
      int *VAR_7,
      struct tipc_msg *VAR_8,
      struct sk_buff_head *VAR_9,
      struct sk_buff_head *VAR_10)
{
 struct tipc_event *VAR_11 = (void *)FUNC_1(VAR_8);
 u32 VAR_12 = VAR_11->found_lower;
 u32 VAR_13 = VAR_11->port.node;
 u32 VAR_14 = VAR_11->port.ref;
 int VAR_15 = VAR_11->event;
 struct tipc_member *VAR_16;
 struct net *VAR_17;
 u32 VAR_18;

 if (!VAR_5)
  return;

 VAR_17 = VAR_5->net;
 VAR_18 = FUNC_11(VAR_17);
 if (!VAR_5->loopback && VAR_13 == VAR_18 && VAR_14 == VAR_5->portid)
  return;

 VAR_16 = FUNC_5(VAR_5, VAR_13, VAR_14);

 switch (VAR_15) {
 case 129:

  if (!VAR_16) {
   VAR_16 = FUNC_3(VAR_5, VAR_13, VAR_14, VAR_12,
           VAR_4);
   if (!VAR_16)
    break;
   FUNC_9(VAR_16, 0);
   FUNC_7(VAR_5, VAR_16, VAR_0, VAR_10);
   break;
  }

  if (VAR_16->state != VAR_2)
   break;


  VAR_16->instance = VAR_12;
  VAR_16->state = VAR_1;
  FUNC_6(VAR_16, VAR_6);
  FUNC_9(VAR_16, 0);
  FUNC_7(VAR_5, VAR_16, VAR_0, VAR_10);
  FUNC_2(VAR_5, VAR_16, 129,
     VAR_16->bc_syncpt, VAR_9);
  break;
 case 128:
  if (!VAR_16)
   break;

  FUNC_4(VAR_5, VAR_16);
  VAR_16->state = VAR_3;
  FUNC_0(&VAR_16->list);
  FUNC_6(VAR_16, VAR_6);


  if (!FUNC_10(VAR_17, VAR_13))
   FUNC_2(VAR_5, VAR_16, 128,
      VAR_16->bc_rcv_nxt, VAR_9);
  break;
 default:
  break;
 }
 *VAR_7 = FUNC_8(VAR_5);
}
