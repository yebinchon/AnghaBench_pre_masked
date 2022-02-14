
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ max_window; scalar_t__ snd_una; scalar_t__ retrans_out; scalar_t__ lost_out; scalar_t__ sacked_out; scalar_t__ undo_marker; struct tcp_sack_block* recv_sack_cache; int packets_out; int delivered; int snd_nxt; } ;
struct tcp_sacktag_state {int flag; int reord; int mss_now; } ;
struct tcp_sack_block_wire {int end_seq; int start_seq; } ;
struct tcp_sack_block {scalar_t__ start_seq; scalar_t__ end_seq; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int sacked; scalar_t__ ack_seq; } ;
struct TYPE_3__ {scalar_t__ icsk_ca_state; } ;


 int FUNC_0 (struct tcp_sack_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 unsigned char const VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_2 (struct sk_buff const*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 void* FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct sock*) ;
 int FUNC_8 (int,unsigned char const) ;
 unsigned char* FUNC_9 (struct sk_buff const*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct tcp_sack_block,struct tcp_sack_block) ;
 int FUNC_12 (struct sock*,struct sk_buff const*,struct tcp_sack_block_wire*,int,scalar_t__) ;
 int FUNC_13 (struct sock*,int ,int ) ;
 int FUNC_14 (struct sock*) ;
 struct sk_buff* FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*) ;
 scalar_t__ FUNC_17 (struct tcp_sock*) ;
 int FUNC_18 (struct tcp_sock*,int,scalar_t__,scalar_t__) ;
 struct sk_buff* FUNC_19 (struct sk_buff*,struct sock*,struct tcp_sack_block*,struct tcp_sacktag_state*,scalar_t__) ;
 scalar_t__ FUNC_20 (struct tcp_sock*) ;
 scalar_t__ FUNC_21 (struct tcp_sock*,struct tcp_sack_block*) ;
 struct sk_buff* FUNC_22 (struct sk_buff*,struct sock*,scalar_t__) ;
 struct sk_buff* FUNC_23 (struct sk_buff*,struct sock*,struct tcp_sack_block*,struct tcp_sacktag_state*,scalar_t__,scalar_t__,int) ;
 struct tcp_sock* FUNC_24 (struct sock*) ;
 int FUNC_25 (struct tcp_sock*) ;

__attribute__((used)) static int
FUNC_26(struct sock *VAR_7, const struct sk_buff *VAR_8,
   u32 VAR_9, struct tcp_sacktag_state *VAR_10)
{
 struct tcp_sock *VAR_11 = FUNC_24(VAR_7);
 const unsigned char *VAR_12 = (FUNC_9(VAR_8) +
        FUNC_2(VAR_8)->sacked);
 struct tcp_sack_block_wire *VAR_13 = (struct tcp_sack_block_wire *)(VAR_12+2);
 struct tcp_sack_block VAR_14[VAR_6];
 struct tcp_sack_block *VAR_15;
 struct sk_buff *VAR_16;
 int VAR_17 = FUNC_8(VAR_6, (VAR_12[1] - VAR_4) >> 3);
 int VAR_18;
 bool VAR_19 = 0;
 int VAR_20, VAR_21;
 int VAR_22;

 VAR_10->flag = 0;
 VAR_10->reord = VAR_11->snd_nxt;

 if (!VAR_11->sacked_out)
  FUNC_16(VAR_7);

 VAR_19 = FUNC_12(VAR_7, VAR_8, VAR_13,
      VAR_17, VAR_9);
 if (VAR_19) {
  VAR_10->flag |= VAR_0;
  VAR_11->delivered++;
 }





 if (FUNC_5(FUNC_2(VAR_8)->ack_seq, VAR_9 - VAR_11->max_window))
  return 0;

 if (!VAR_11->packets_out)
  goto out;

 VAR_18 = 0;
 VAR_22 = 0;
 for (VAR_20 = 0; VAR_20 < VAR_17; VAR_20++) {
  bool VAR_23 = !VAR_20 && VAR_19;

  VAR_14[VAR_18].start_seq = FUNC_6(&VAR_13[VAR_20].start_seq);
  VAR_14[VAR_18].end_seq = FUNC_6(&VAR_13[VAR_20].end_seq);

  if (!FUNC_18(VAR_11, VAR_23,
         VAR_14[VAR_18].start_seq,
         VAR_14[VAR_18].end_seq)) {
   int VAR_24;

   if (VAR_23) {
    if (!VAR_11->undo_marker)
     VAR_24 = VAR_1;
    else
     VAR_24 = VAR_2;
   } else {

    if ((FUNC_2(VAR_8)->ack_seq != VAR_11->snd_una) &&
        !FUNC_4(VAR_14[VAR_18].end_seq, VAR_11->snd_una))
     continue;
    VAR_24 = VAR_3;
   }

   FUNC_1(FUNC_10(VAR_7), VAR_24);
   if (VAR_20 == 0)
    VAR_22 = -1;
   continue;
  }


  if (!FUNC_4(VAR_14[VAR_18].end_seq, VAR_9))
   continue;

  VAR_18++;
 }


 for (VAR_20 = VAR_18 - 1; VAR_20 > 0; VAR_20--) {
  for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
   if (FUNC_4(VAR_14[VAR_21].start_seq, VAR_14[VAR_21 + 1].start_seq)) {
    FUNC_11(VAR_14[VAR_21], VAR_14[VAR_21 + 1]);


    if (VAR_21 == VAR_22)
     VAR_22 = VAR_21 + 1;
   }
  }
 }

 VAR_10->mss_now = FUNC_14(VAR_7);
 VAR_16 = ((void*)0);
 VAR_20 = 0;

 if (!VAR_11->sacked_out) {

  VAR_15 = VAR_11->recv_sack_cache + FUNC_0(VAR_11->recv_sack_cache);
 } else {
  VAR_15 = VAR_11->recv_sack_cache;

  while (FUNC_21(VAR_11, VAR_15) && !VAR_15->start_seq &&
         !VAR_15->end_seq)
   VAR_15++;
 }

 while (VAR_20 < VAR_18) {
  u32 VAR_25 = VAR_14[VAR_20].start_seq;
  u32 VAR_26 = VAR_14[VAR_20].end_seq;
  bool VAR_27 = (VAR_19 && (VAR_20 == VAR_22));
  struct tcp_sack_block *VAR_28 = ((void*)0);

  if (VAR_19 && ((VAR_20 + 1) == VAR_22))
   VAR_28 = &VAR_14[VAR_20 + 1];


  while (FUNC_21(VAR_11, VAR_15) &&
         !FUNC_5(VAR_25, VAR_15->end_seq))
   VAR_15++;


  if (FUNC_21(VAR_11, VAR_15) && !VAR_27 &&
      FUNC_4(VAR_26, VAR_15->start_seq)) {


   if (FUNC_5(VAR_25, VAR_15->start_seq)) {
    VAR_16 = FUNC_22(VAR_16, VAR_7, VAR_25);
    VAR_16 = FUNC_23(VAR_16, VAR_7, VAR_28,
             VAR_10,
             VAR_25,
             VAR_15->start_seq,
             VAR_27);
   }


   if (!FUNC_4(VAR_26, VAR_15->end_seq))
    goto advance_sp;

   VAR_16 = FUNC_19(VAR_16, VAR_7, VAR_28,
             VAR_10,
             VAR_15->end_seq);


   if (FUNC_17(VAR_11) == VAR_15->end_seq) {

    VAR_16 = FUNC_15(VAR_7);
    if (!VAR_16)
     break;
    VAR_15++;
    goto walk;
   }

   VAR_16 = FUNC_22(VAR_16, VAR_7, VAR_15->end_seq);

   VAR_15++;
   continue;
  }

  if (!FUNC_5(VAR_25, FUNC_17(VAR_11))) {
   VAR_16 = FUNC_15(VAR_7);
   if (!VAR_16)
    break;
  }
  VAR_16 = FUNC_22(VAR_16, VAR_7, VAR_25);

walk:
  VAR_16 = FUNC_23(VAR_16, VAR_7, VAR_28, VAR_10,
           VAR_25, VAR_26, VAR_27);

advance_sp:
  VAR_20++;
 }


 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_11->recv_sack_cache) - VAR_18; VAR_20++) {
  VAR_11->recv_sack_cache[VAR_20].start_seq = 0;
  VAR_11->recv_sack_cache[VAR_20].end_seq = 0;
 }
 for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21++)
  VAR_11->recv_sack_cache[VAR_20++] = VAR_14[VAR_21];

 if (FUNC_7(VAR_7)->icsk_ca_state != VAR_5 || VAR_11->undo_marker)
  FUNC_13(VAR_7, VAR_10->reord, 0);

 FUNC_25(VAR_11);
out:







 return VAR_10->flag;
}
