
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_msg {int dummy; } ;
struct TYPE_2__ {int recv_fragmented; int recv_fragments; int recv_bundled; int recv_bundles; } ;
struct tipc_link {int net; int bc_rcvlink; TYPE_1__ stats; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct tipc_link*) ;
 scalar_t__ FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct sk_buff_head*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct sk_buff**,struct sk_buff**) ;
 int FUNC_10 (struct tipc_link*,struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_11 (int ,struct tipc_msg*) ;
 int FUNC_12 (struct tipc_link*,int ) ;
 scalar_t__ FUNC_13 (struct sk_buff*,struct sk_buff**,int*) ;
 int FUNC_14 (struct sk_buff_head*,struct sk_buff_head*) ;

__attribute__((used)) static int FUNC_15(struct tipc_link *VAR_4, struct sk_buff *VAR_5,
      struct sk_buff_head *VAR_6,
      struct sk_buff **VAR_7)
{
 struct tipc_msg *VAR_8 = FUNC_0(VAR_5);
 struct sk_buff *VAR_9;
 struct sk_buff_head VAR_10;
 int VAR_11 = FUNC_4(VAR_8);
 int VAR_12 = 0;

 if (VAR_11 == VAR_2) {
  FUNC_6(&VAR_10);
  VAR_4->stats.recv_bundles++;
  VAR_4->stats.recv_bundled += FUNC_3(VAR_8);
  while (FUNC_13(VAR_5, &VAR_9, &VAR_12))
   FUNC_10(VAR_4, VAR_9, &VAR_10);
  FUNC_14(&VAR_10, VAR_6);
  return 0;
 } else if (VAR_11 == VAR_3) {
  VAR_4->stats.recv_fragments++;
  if (FUNC_9(VAR_7, &VAR_5)) {
   VAR_4->stats.recv_fragmented++;
   FUNC_10(VAR_4, VAR_5, VAR_6);
  } else if (!*VAR_7 && !FUNC_2(VAR_4)) {
   FUNC_5("Unable to build fragment list\n");
   return FUNC_12(VAR_4, VAR_1);
  }
  return 0;
 } else if (VAR_11 == VAR_0) {
  FUNC_7(VAR_4->net);
  FUNC_11(VAR_4->bc_rcvlink, VAR_8);
  FUNC_8(VAR_4->net);
 }

 FUNC_1(VAR_5);
 return 0;
}
