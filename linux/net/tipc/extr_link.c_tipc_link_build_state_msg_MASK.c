
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sent_acks; } ;
struct tipc_link {int rcv_nxt; int snd_nxt; TYPE_1__ stats; scalar_t__ rcv_unacked; int net; } ;
struct sk_buff_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tipc_link*) ;
 int FUNC_1 (struct tipc_link*,int ,int ,int ,int ,int ,int ,struct sk_buff_head*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct tipc_link *VAR_2, struct sk_buff_head *VAR_3)
{
 if (!VAR_2)
  return 0;


 if (FUNC_0(VAR_2)) {
  if (((VAR_2->rcv_nxt ^ FUNC_2(VAR_2->net)) & 0xf) != 0xf)
   return 0;
  VAR_2->rcv_unacked = 0;


  VAR_2->snd_nxt = VAR_2->rcv_nxt;
  return VAR_1;
 }


 VAR_2->rcv_unacked = 0;
 VAR_2->stats.sent_acks++;
 FUNC_1(VAR_2, VAR_0, 0, 0, 0, 0, 0, VAR_3);
 return 0;
}
