
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct sk_buff_head {int dummy; } ;
struct tipc_link {struct sk_buff_head wakeupq; struct sk_buff_head* inputq; struct sk_buff_head deferdq; struct sk_buff_head backlogq; TYPE_1__* backlog; struct sk_buff_head transmq; int acked; int rst_cnt; int silent_intv_cnt; int peer_caps; int rcv_nxt_state; int snd_nxt_state; int rcv_nxt; int snd_nxt; int peer_session; int session; int in_session; int state; int addr; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int len; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,size_t,char*,...) ;
 struct sk_buff* FUNC_3 (struct sk_buff_head*) ;
 struct sk_buff* FUNC_4 (struct sk_buff_head*) ;
 scalar_t__ FUNC_5 (struct sk_buff_head*) ;
 scalar_t__ FUNC_6 (struct sk_buff_head*,int,char*) ;

int FUNC_7(struct tipc_link *VAR_12, u16 VAR_13, char *VAR_14)
{
 int VAR_15 = 0;
 size_t VAR_16 = (VAR_13) ? VAR_0 : VAR_1;
 struct sk_buff_head *VAR_17;
 struct sk_buff *VAR_18, *VAR_19;
 u32 VAR_20;

 if (!VAR_12) {
  VAR_15 += FUNC_2(VAR_14, VAR_16, "link data: (null)\n");
  return VAR_15;
 }

 VAR_15 += FUNC_2(VAR_14, VAR_16, "link data: %x", VAR_12->addr);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " %x", VAR_12->state);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " %u", VAR_12->in_session);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " %u", VAR_12->session);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " %u", VAR_12->peer_session);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " %u", VAR_12->snd_nxt);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " %u", VAR_12->rcv_nxt);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " %u", VAR_12->snd_nxt_state);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " %u", VAR_12->rcv_nxt_state);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " %x", VAR_12->peer_caps);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " %u", VAR_12->silent_intv_cnt);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " %u", VAR_12->rst_cnt);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " %u", 0);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " %u", 0);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " %u", VAR_12->acked);

 VAR_17 = &VAR_12->transmq;
 VAR_20 = FUNC_5(VAR_17);
 VAR_18 = FUNC_3(VAR_17);
 VAR_19 = FUNC_4(VAR_17);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " | %u %u %u", VAR_20,
         (VAR_18) ? FUNC_1(FUNC_0(VAR_18)) : 0,
         (VAR_19) ? FUNC_1(FUNC_0(VAR_19)) : 0);

 VAR_17 = &VAR_12->deferdq;
 VAR_20 = FUNC_5(VAR_17);
 VAR_18 = FUNC_3(VAR_17);
 VAR_19 = FUNC_4(VAR_17);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " | %u %u %u", VAR_20,
         (VAR_18) ? FUNC_1(FUNC_0(VAR_18)) : 0,
         (VAR_19) ? FUNC_1(FUNC_0(VAR_19)) : 0);

 VAR_17 = &VAR_12->backlogq;
 VAR_20 = FUNC_5(VAR_17);
 VAR_18 = FUNC_3(VAR_17);
 VAR_19 = FUNC_4(VAR_17);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " | %u %u %u", VAR_20,
         (VAR_18) ? FUNC_1(FUNC_0(VAR_18)) : 0,
         (VAR_19) ? FUNC_1(FUNC_0(VAR_19)) : 0);

 VAR_17 = VAR_12->inputq;
 VAR_20 = FUNC_5(VAR_17);
 VAR_18 = FUNC_3(VAR_17);
 VAR_19 = FUNC_4(VAR_17);
 VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, " | %u %u %u\n", VAR_20,
         (VAR_18) ? FUNC_1(FUNC_0(VAR_18)) : 0,
         (VAR_19) ? FUNC_1(FUNC_0(VAR_19)) : 0);

 if (VAR_13 & VAR_6) {
  VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, "transmq: ");
  VAR_15 += FUNC_6(&VAR_12->transmq, 0, VAR_14 + VAR_15);
 }
 if (VAR_13 & VAR_3) {
  VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15,
          "backlogq: <%u %u %u %u %u>, ",
          VAR_12->backlog[VAR_9].len,
          VAR_12->backlog[VAR_10].len,
          VAR_12->backlog[VAR_8].len,
          VAR_12->backlog[VAR_2].len,
          VAR_12->backlog[VAR_11].len);
  VAR_15 += FUNC_6(&VAR_12->backlogq, 0, VAR_14 + VAR_15);
 }
 if (VAR_13 & VAR_4) {
  VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, "deferdq: ");
  VAR_15 += FUNC_6(&VAR_12->deferdq, 0, VAR_14 + VAR_15);
 }
 if (VAR_13 & VAR_5) {
  VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, "inputq: ");
  VAR_15 += FUNC_6(VAR_12->inputq, 0, VAR_14 + VAR_15);
 }
 if (VAR_13 & VAR_7) {
  VAR_15 += FUNC_2(VAR_14 + VAR_15, VAR_16 - VAR_15, "wakeup: ");
  VAR_15 += FUNC_6(&VAR_12->wakeupq, 0, VAR_14 + VAR_15);
 }

 return VAR_15;
}
