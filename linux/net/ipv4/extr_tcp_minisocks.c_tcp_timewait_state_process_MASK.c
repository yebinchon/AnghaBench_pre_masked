
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcphdr {int doff; scalar_t__ ack; int rst; scalar_t__ syn; int fin; } ;
struct tcp_timewait_sock {scalar_t__ tw_rcv_nxt; scalar_t__ tw_rcv_wnd; scalar_t__ tw_snd_nxt; scalar_t__ tw_ts_recent; void* tw_ts_recent_stamp; scalar_t__ tw_ts_offset; } ;
struct tcp_options_received {scalar_t__ rcv_tsval; scalar_t__ saw_tstamp; void* ts_recent_stamp; scalar_t__ ts_recent; scalar_t__ rcv_tsecr; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct inet_timewait_sock {scalar_t__ tw_substate; } ;
typedef scalar_t__ s32 ;
typedef enum tcp_tw_status { ____Placeholder_tcp_tw_status } tcp_tw_status ;
struct TYPE_8__ {scalar_t__ seq; scalar_t__ end_seq; scalar_t__ tcp_tw_isn; } ;
struct TYPE_6__ {scalar_t__ sysctl_tcp_rfc1337; } ;
struct TYPE_7__ {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct inet_timewait_sock*) ;
 int FUNC_5 (struct inet_timewait_sock*) ;
 int FUNC_6 (struct inet_timewait_sock*,int ) ;
 void* FUNC_7 () ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,struct sk_buff*,struct tcp_options_received*,int ,int *) ;
 int FUNC_10 (struct tcp_options_received*,int ) ;
 int FUNC_11 (struct inet_timewait_sock*,struct sk_buff*,int ) ;
 struct tcp_timewait_sock* FUNC_12 (struct sock*) ;
 TYPE_2__* FUNC_13 (struct inet_timewait_sock*) ;

enum tcp_tw_status
FUNC_14(struct inet_timewait_sock *VAR_10, struct sk_buff *VAR_11,
      const struct tcphdr *VAR_12)
{
 struct tcp_options_received VAR_13;
 struct tcp_timewait_sock *VAR_14 = FUNC_12((struct sock *)VAR_10);
 bool VAR_15 = 0;

 VAR_13.saw_tstamp = 0;
 if (VAR_12->doff > (sizeof(*VAR_12) >> 2) && VAR_14->tw_ts_recent_stamp) {
  FUNC_9(FUNC_13(VAR_10), VAR_11, &VAR_13, 0, ((void*)0));

  if (VAR_13.saw_tstamp) {
   if (VAR_13.rcv_tsecr)
    VAR_13.rcv_tsecr -= VAR_14->tw_ts_offset;
   VAR_13.ts_recent = VAR_14->tw_ts_recent;
   VAR_13.ts_recent_stamp = VAR_14->tw_ts_recent_stamp;
   VAR_15 = FUNC_10(&VAR_13, VAR_12->rst);
  }
 }

 if (VAR_10->tw_substate == VAR_3) {



  if (VAR_15 ||
      !FUNC_8(FUNC_0(VAR_11)->seq, FUNC_0(VAR_11)->end_seq,
       VAR_14->tw_rcv_nxt,
       VAR_14->tw_rcv_nxt + VAR_14->tw_rcv_wnd))
   return FUNC_11(
    VAR_10, VAR_11, VAR_1);

  if (VAR_12->rst)
   goto kill;

  if (VAR_12->syn && !FUNC_3(FUNC_0(VAR_11)->seq, VAR_14->tw_rcv_nxt))
   return VAR_7;


  if (!VAR_12->ack ||
      !FUNC_2(FUNC_0(VAR_11)->end_seq, VAR_14->tw_rcv_nxt) ||
      FUNC_0(VAR_11)->end_seq == FUNC_0(VAR_11)->seq) {
   FUNC_5(VAR_10);
   return VAR_8;
  }




  if (!VAR_12->fin ||
      FUNC_0(VAR_11)->end_seq != VAR_14->tw_rcv_nxt + 1)
   return VAR_7;


  VAR_10->tw_substate = VAR_5;
  VAR_14->tw_rcv_nxt = FUNC_0(VAR_11)->end_seq;
  if (VAR_13.saw_tstamp) {
   VAR_14->tw_ts_recent_stamp = FUNC_7();
   VAR_14->tw_ts_recent = VAR_13.rcv_tsval;
  }

  FUNC_6(VAR_10, VAR_4);
  return VAR_6;
 }
 if (!VAR_15 &&
     (FUNC_0(VAR_11)->seq == VAR_14->tw_rcv_nxt &&
      (FUNC_0(VAR_11)->seq == FUNC_0(VAR_11)->end_seq || VAR_12->rst))) {


  if (VAR_12->rst) {




   if (FUNC_13(VAR_10)->ipv4.sysctl_tcp_rfc1337 == 0) {
kill:
    FUNC_4(VAR_10);
    return VAR_8;
   }
  } else {
   FUNC_6(VAR_10, VAR_4);
  }

  if (VAR_13.saw_tstamp) {
   VAR_14->tw_ts_recent = VAR_13.rcv_tsval;
   VAR_14->tw_ts_recent_stamp = FUNC_7();
  }

  FUNC_5(VAR_10);
  return VAR_8;
 }
 if (VAR_12->syn && !VAR_12->rst && !VAR_12->ack && !VAR_15 &&
     (FUNC_2(FUNC_0(VAR_11)->seq, VAR_14->tw_rcv_nxt) ||
      (VAR_13.saw_tstamp &&
       (s32)(VAR_14->tw_ts_recent - VAR_13.rcv_tsval) < 0))) {
  u32 VAR_16 = VAR_14->tw_snd_nxt + 65535 + 2;
  if (VAR_16 == 0)
   VAR_16++;
  FUNC_0(VAR_11)->tcp_tw_isn = VAR_16;
  return VAR_9;
 }

 if (VAR_15)
  FUNC_1(FUNC_13(VAR_10), VAR_0);

 if (!VAR_12->rst) {






  if (VAR_15 || VAR_12->ack)
   FUNC_6(VAR_10, VAR_4);

  return FUNC_11(
   VAR_10, VAR_11, VAR_2);
 }
 FUNC_5(VAR_10);
 return VAR_8;
}
