
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct tipc_msg {int dummy; } ;
struct TYPE_2__ {int recv_pkts; int duplicates; } ;
struct sk_buff_head {int dummy; } ;
struct tipc_link {scalar_t__ rcv_nxt; scalar_t__ state; scalar_t__ rcv_unacked; int reasm_buf; int inputq; TYPE_1__ stats; int wakeupq; scalar_t__ silent_intv_cnt; struct sk_buff_head deferdq; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct sk_buff* FUNC_0 (struct sk_buff_head*,scalar_t__) ;
 int FUNC_1 (struct sk_buff_head*,scalar_t__,struct sk_buff*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct tipc_link*) ;
 int FUNC_7 (struct tipc_link*) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (struct tipc_msg*) ;
 scalar_t__ FUNC_10 (struct tipc_msg*) ;
 scalar_t__ FUNC_11 (struct tipc_msg*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct tipc_link*,struct sk_buff*,int ) ;
 int FUNC_14 (struct tipc_link*,struct sk_buff_head*) ;
 int FUNC_15 (struct tipc_link*,struct sk_buff_head*) ;
 int FUNC_16 (struct tipc_link*,struct sk_buff_head*) ;
 int FUNC_17 (struct tipc_link*,struct sk_buff*,int ,int *) ;
 int FUNC_18 (struct tipc_link*,struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_19 (struct tipc_link*,int ) ;
 int FUNC_20 (struct tipc_link*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_21 (int) ;

int FUNC_22(struct tipc_link *VAR_7, struct sk_buff *VAR_8,
    struct sk_buff_head *VAR_9)
{
 struct sk_buff_head *VAR_10 = &VAR_7->deferdq;
 struct tipc_msg *VAR_11 = FUNC_2(VAR_8);
 u16 VAR_12, VAR_13, VAR_14;
 int VAR_15 = 0;


 if (FUNC_21(FUNC_11(VAR_11) == VAR_1))
  return FUNC_18(VAR_7, VAR_8, VAR_9);


 VAR_7->silent_intv_cnt = 0;

 do {
  VAR_11 = FUNC_2(VAR_8);
  VAR_12 = FUNC_10(VAR_11);
  VAR_13 = VAR_7->rcv_nxt;
  VAR_14 = VAR_13 + VAR_4;

  if (FUNC_21(!FUNC_6(VAR_7))) {
   if (VAR_7->state == VAR_0)
    VAR_15 = VAR_3;
   goto drop;
  }


  if (FUNC_21(FUNC_4(VAR_12, VAR_13) || FUNC_8(VAR_12, VAR_14))) {
   VAR_7->stats.duplicates++;
   goto drop;
  }


  if (FUNC_5(FUNC_19(VAR_7, FUNC_9(VAR_11)))) {
   FUNC_14(VAR_7, VAR_9);
   if (FUNC_21(!FUNC_12(&VAR_7->wakeupq)))
    FUNC_7(VAR_7);
  }


  if (FUNC_21(VAR_12 != VAR_13)) {
   FUNC_1(VAR_10, VAR_12, VAR_8);
   VAR_15 |= FUNC_15(VAR_7, VAR_9);
   break;
  }


  VAR_7->rcv_nxt++;
  VAR_7->stats.recv_pkts++;

  if (FUNC_21(FUNC_11(VAR_11) == VAR_6))
   VAR_15 |= FUNC_20(VAR_7, VAR_8, VAR_7->inputq);
  else if (!FUNC_13(VAR_7, VAR_8, VAR_7->inputq))
   VAR_15 |= FUNC_17(VAR_7, VAR_8, VAR_7->inputq, &VAR_7->reasm_buf);
  if (FUNC_21(++VAR_7->rcv_unacked >= VAR_5))
   VAR_15 |= FUNC_16(VAR_7, VAR_9);
  if (FUNC_21(VAR_15 & ~VAR_2))
   break;
 } while ((VAR_8 = FUNC_0(VAR_10, VAR_7->rcv_nxt)));

 return VAR_15;
drop:
 FUNC_3(VAR_8);
 return VAR_15;
}
