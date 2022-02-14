
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct tcphdr {scalar_t__ ack; scalar_t__ syn; scalar_t__ rst; int window; int ack_seq; int seq; } ;
struct sk_buff {int len; } ;
struct nf_tcp_net {scalar_t__ tcp_be_liberal; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {TYPE_1__* tuplehash; } ;
struct net {int dummy; } ;
struct ip_ct_tcp_state {int flags; int td_end; int td_maxend; int td_maxwin; int td_scale; int td_maxack; } ;
struct ip_ct_tcp {scalar_t__ state; int last_dir; int last_seq; int last_ack; int last_end; scalar_t__ last_win; scalar_t__ retrans; struct ip_ct_tcp_state* seen; } ;
typedef int s32 ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef int __u32 ;
struct TYPE_2__ {struct nf_conntrack_tuple tuple; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ip_ct_tcp_state*) ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (struct nf_conntrack_tuple const*) ;
 int FUNC_4 (struct sk_buff const*,struct nf_conn const*,char*,char*) ;
 struct net* FUNC_5 (struct nf_conn const*) ;
 int FUNC_6 (struct nf_conn const*,int,int) ;
 struct nf_tcp_net* FUNC_7 (struct net*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int,int ,unsigned int,struct tcphdr const*) ;
 int FUNC_12 (struct tcphdr const*) ;
 int FUNC_13 (struct sk_buff const*,unsigned int,struct tcphdr const*,struct ip_ct_tcp_state*) ;
 int FUNC_14 (struct sk_buff const*,unsigned int,struct tcphdr const*,int*) ;

__attribute__((used)) static bool FUNC_15(const struct nf_conn *VAR_12,
     struct ip_ct_tcp *VAR_13,
     enum ip_conntrack_dir VAR_14,
     unsigned int VAR_15,
     const struct sk_buff *VAR_16,
     unsigned int VAR_17,
     const struct tcphdr *VAR_18)
{
 struct net *VAR_19 = FUNC_5(VAR_12);
 struct nf_tcp_net *VAR_20 = FUNC_7(VAR_19);
 struct ip_ct_tcp_state *VAR_21 = &VAR_13->seen[VAR_14];
 struct ip_ct_tcp_state *VAR_22 = &VAR_13->seen[!VAR_14];
 const struct nf_conntrack_tuple *VAR_23 = &VAR_12->tuplehash[VAR_14].tuple;
 __u32 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 u16 VAR_30;
 s32 VAR_31;
 bool VAR_32, VAR_33;




 VAR_24 = FUNC_8(VAR_18->seq);
 VAR_25 = VAR_26 = FUNC_8(VAR_18->ack_seq);
 VAR_30 = FUNC_9(VAR_18->window);
 VAR_28 = VAR_30;
 VAR_27 = FUNC_11(VAR_24, VAR_16->len, VAR_17, VAR_18);

 if (VAR_22->flags & VAR_5)
  FUNC_14(VAR_16, VAR_17, VAR_18, &VAR_26);


 VAR_31 = FUNC_6(VAR_12, !VAR_14, VAR_25 - 1);
 VAR_25 -= VAR_31;
 VAR_26 -= VAR_31;

 FUNC_10("tcp_in_window: START\n");
 FUNC_10("tcp_in_window: ");
 FUNC_3(VAR_23);
 FUNC_10("seq=%u ack=%u+(%d) sack=%u+(%d) win=%u end=%u\n",
   VAR_24, VAR_25, VAR_31, VAR_26, VAR_31, VAR_28, VAR_27);
 FUNC_10("tcp_in_window: sender end=%u maxend=%u maxwin=%u scale=%i "
   "receiver end=%u maxend=%u maxwin=%u scale=%i\n",
   VAR_21->td_end, VAR_21->td_maxend, VAR_21->td_maxwin,
   VAR_21->td_scale,
   VAR_22->td_end, VAR_22->td_maxend, VAR_22->td_maxwin,
   VAR_22->td_scale);

 if (VAR_21->td_maxwin == 0) {



  if (VAR_18->syn) {




   VAR_21->td_end =
   VAR_21->td_maxend = VAR_27;
   VAR_21->td_maxwin = (VAR_28 == 0 ? 1 : VAR_28);

   FUNC_13(VAR_16, VAR_17, VAR_18, VAR_21);





   if (!(VAR_21->flags & VAR_6
         && VAR_22->flags & VAR_6))
    VAR_21->td_scale =
    VAR_22->td_scale = 0;
   if (!VAR_18->ack)

    return 1;
  } else {





   VAR_21->td_end = VAR_27;
   VAR_29 = VAR_28 << VAR_21->td_scale;
   VAR_21->td_maxwin = (VAR_29 == 0 ? 1 : VAR_29);
   VAR_21->td_maxend = VAR_27 + VAR_21->td_maxwin;





   if (VAR_22->td_maxwin == 0)
    VAR_22->td_end = VAR_22->td_maxend = VAR_26;
  }
 } else if (((VAR_13->state == VAR_9
       && VAR_14 == VAR_0)
     || (VAR_13->state == VAR_8
       && VAR_14 == VAR_1))
     && FUNC_1(VAR_27, VAR_21->td_end)) {





  VAR_21->td_end =
  VAR_21->td_maxend = VAR_27;
  VAR_21->td_maxwin = (VAR_28 == 0 ? 1 : VAR_28);

  FUNC_13(VAR_16, VAR_17, VAR_18, VAR_21);
 }

 if (!(VAR_18->ack)) {



  VAR_25 = VAR_26 = VAR_22->td_end;
 } else if (((FUNC_12(VAR_18) & (VAR_10|VAR_11)) ==
      (VAR_10|VAR_11))
     && (VAR_25 == 0)) {




  VAR_25 = VAR_26 = VAR_22->td_end;
 }

 if (VAR_18->rst && VAR_24 == 0 && VAR_13->state == VAR_9)



  VAR_24 = VAR_27 = VAR_21->td_end;

 FUNC_10("tcp_in_window: ");
 FUNC_3(VAR_23);
 FUNC_10("seq=%u ack=%u+(%d) sack=%u+(%d) win=%u end=%u\n",
   VAR_24, VAR_25, VAR_31, VAR_26, VAR_31, VAR_28, VAR_27);
 FUNC_10("tcp_in_window: sender end=%u maxend=%u maxwin=%u scale=%i "
   "receiver end=%u maxend=%u maxwin=%u scale=%i\n",
   VAR_21->td_end, VAR_21->td_maxend, VAR_21->td_maxwin,
   VAR_21->td_scale,
   VAR_22->td_end, VAR_22->td_maxend, VAR_22->td_maxwin,
   VAR_22->td_scale);


 VAR_33 = !VAR_22->td_maxwin ||
        FUNC_1(VAR_27, VAR_21->td_end - VAR_22->td_maxwin - 1);

 FUNC_10("tcp_in_window: I=%i II=%i III=%i IV=%i\n",
   FUNC_2(VAR_24, VAR_21->td_maxend + 1),
   (VAR_33 ? 1 : 0),
   FUNC_2(VAR_26, VAR_22->td_end + 1),
   FUNC_1(VAR_26, VAR_22->td_end - FUNC_0(VAR_21) - 1));

 if (FUNC_2(VAR_24, VAR_21->td_maxend + 1) &&
     VAR_33 &&
     FUNC_2(VAR_26, VAR_22->td_end + 1) &&
     FUNC_1(VAR_26, VAR_22->td_end - FUNC_0(VAR_21) - 1)) {



  if (!VAR_18->syn)
   VAR_28 <<= VAR_21->td_scale;




  VAR_29 = VAR_28 + (VAR_26 - VAR_25);
  if (VAR_21->td_maxwin < VAR_29)
   VAR_21->td_maxwin = VAR_29;
  if (FUNC_1(VAR_27, VAR_21->td_end)) {
   VAR_21->td_end = VAR_27;
   VAR_21->flags |= VAR_3;
  }
  if (VAR_18->ack) {
   if (!(VAR_21->flags & VAR_4)) {
    VAR_21->td_maxack = VAR_25;
    VAR_21->flags |= VAR_4;
   } else if (FUNC_1(VAR_25, VAR_21->td_maxack))
    VAR_21->td_maxack = VAR_25;
  }




  if (VAR_22->td_maxwin != 0 && FUNC_1(VAR_27, VAR_21->td_maxend))
   VAR_22->td_maxwin += VAR_27 - VAR_21->td_maxend;
  if (FUNC_1(VAR_26 + VAR_28, VAR_22->td_maxend - 1)) {
   VAR_22->td_maxend = VAR_26 + VAR_28;
   if (VAR_28 == 0)
    VAR_22->td_maxend++;
  }
  if (VAR_25 == VAR_22->td_end)
   VAR_22->flags &= ~VAR_3;




  if (VAR_15 == VAR_7) {
   if (VAR_13->last_dir == VAR_14
       && VAR_13->last_seq == VAR_24
       && VAR_13->last_ack == VAR_25
       && VAR_13->last_end == VAR_27
       && VAR_13->last_win == VAR_30)
    VAR_13->retrans++;
   else {
    VAR_13->last_dir = VAR_14;
    VAR_13->last_seq = VAR_24;
    VAR_13->last_ack = VAR_25;
    VAR_13->last_end = VAR_27;
    VAR_13->last_win = VAR_30;
    VAR_13->retrans = 0;
   }
  }
  VAR_32 = 1;
 } else {
  VAR_32 = 0;
  if (VAR_21->flags & VAR_2 ||
      VAR_20->tcp_be_liberal)
   VAR_32 = 1;
  if (!VAR_32) {
   FUNC_4(VAR_16, VAR_12,
   "%s",
   FUNC_2(VAR_24, VAR_21->td_maxend + 1) ?
   VAR_33 ?
   FUNC_2(VAR_26, VAR_22->td_end + 1) ?
   FUNC_1(VAR_26, VAR_22->td_end - FUNC_0(VAR_21) - 1) ? "BUG"
   : "ACK is under the lower bound (possible overly delayed ACK)"
   : "ACK is over the upper bound (ACKed data not seen yet)"
   : "SEQ is under the lower bound (already ACKed data retransmitted)"
   : "SEQ is over the upper bound (over the window of the receiver)");
  }
 }

 FUNC_10("tcp_in_window: res=%u sender end=%u maxend=%u maxwin=%u "
   "receiver end=%u maxend=%u maxwin=%u\n",
   VAR_32, VAR_21->td_end, VAR_21->td_maxend, VAR_21->td_maxwin,
   VAR_22->td_end, VAR_22->td_maxend, VAR_22->td_maxwin);

 return VAR_32;
}
