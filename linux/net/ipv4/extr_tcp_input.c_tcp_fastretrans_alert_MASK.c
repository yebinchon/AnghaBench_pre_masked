
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int probe_seq_start; } ;
struct tcp_sock {scalar_t__ retrans_out; int snd_cwnd; TYPE_2__ mtu_probe; int snd_una; int high_seq; scalar_t__ retrans_stamp; scalar_t__ prior_ssthresh; scalar_t__ sacked_out; int packets_out; } ;
struct sock {int dummy; } ;
struct TYPE_3__ {int probe_size; } ;
struct inet_connection_sock {int icsk_ca_state; TYPE_1__ icsk_mtup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 struct inet_connection_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int) ;
 scalar_t__ FUNC_4 (struct sock*,int) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct tcp_sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,int,int,int*) ;
 int FUNC_13 (struct tcp_sock*) ;
 int FUNC_14 (struct sock*,int) ;
 int FUNC_15 (struct sock*) ;
 struct tcp_sock* FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sock*,int) ;
 int FUNC_18 (struct sock*) ;
 int FUNC_19 (struct sock*,int) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct sock*,int const) ;
 int FUNC_22 (struct sock*) ;
 int FUNC_23 (struct sock*,int) ;
 int FUNC_24 (struct tcp_sock*) ;

__attribute__((used)) static void FUNC_25(struct sock *VAR_7, const u32 VAR_8,
      int VAR_9, int *VAR_10, int *VAR_11)
{
 struct inet_connection_sock *VAR_12 = FUNC_2(VAR_7);
 struct tcp_sock *VAR_13 = FUNC_16(VAR_7);
 int VAR_14 = 0, VAR_15 = *VAR_10;
 bool VAR_16 = VAR_9 || ((VAR_15 & VAR_0) &&
          FUNC_7(VAR_7));

 if (!VAR_13->packets_out && VAR_13->sacked_out)
  VAR_13->sacked_out = 0;



 if (VAR_15 & VAR_1)
  VAR_13->prior_ssthresh = 0;


 if (FUNC_4(VAR_7, VAR_15))
  return;


 FUNC_24(VAR_13);



 if (VAR_12->icsk_ca_state == VAR_6) {
  FUNC_0(VAR_13->retrans_out != 0);
  VAR_13->retrans_stamp = 0;
 } else if (!FUNC_1(VAR_13->snd_una, VAR_13->high_seq)) {
  switch (VAR_12->icsk_ca_state) {
  case 130:


   if (VAR_13->snd_una != VAR_13->high_seq) {
    FUNC_5(VAR_7);
    FUNC_14(VAR_7, VAR_6);
   }
   break;

  case 128:
   if (FUNC_10(VAR_13))
    FUNC_13(VAR_13);
   if (FUNC_22(VAR_7))
    return;
   FUNC_5(VAR_7);
   break;
  }
 }


 switch (VAR_12->icsk_ca_state) {
 case 128:
  if (!(VAR_15 & VAR_3)) {
   if (FUNC_10(VAR_13))
    FUNC_3(VAR_7, VAR_9);
  } else {
   if (FUNC_21(VAR_7, VAR_8))
    return;

   VAR_16 = FUNC_10(VAR_13) ||
      FUNC_7(VAR_7);
  }
  if (FUNC_20(VAR_7)) {
   FUNC_18(VAR_7);
   return;
  }
  FUNC_8(VAR_7, VAR_10);
  break;
 case 129:
  FUNC_12(VAR_7, VAR_15, VAR_9, VAR_11);
  FUNC_8(VAR_7, VAR_10);
  if (!(VAR_12->icsk_ca_state == VAR_6 ||
        (*VAR_10 & VAR_2)))
   return;


 default:
  if (FUNC_10(VAR_13)) {
   if (VAR_15 & VAR_3)
    FUNC_13(VAR_13);
   FUNC_3(VAR_7, VAR_9);
  }

  if (VAR_12->icsk_ca_state <= VAR_5)
   FUNC_20(VAR_7);

  FUNC_8(VAR_7, VAR_10);
  if (!FUNC_17(VAR_7, VAR_15)) {
   FUNC_19(VAR_7, VAR_15);
   return;
  }


  if (VAR_12->icsk_ca_state < 130 &&
      VAR_12->icsk_mtup.probe_size &&
      VAR_13->snd_una == VAR_13->mtu_probe.probe_seq_start) {
   FUNC_11(VAR_7);

   VAR_13->snd_cwnd++;
   FUNC_15(VAR_7);
   return;
  }


  FUNC_6(VAR_7, (VAR_15 & VAR_1));
  VAR_14 = 1;
 }

 if (!FUNC_9(VAR_7) && VAR_16)
  FUNC_23(VAR_7, VAR_14);
 *VAR_11 = VAR_4;
}
