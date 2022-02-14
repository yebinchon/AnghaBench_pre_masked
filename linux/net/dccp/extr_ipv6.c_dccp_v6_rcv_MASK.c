
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct request_sock {struct sock* rsk_listener; } ;
struct dccp_hdr {scalar_t__ dccph_type; int dccph_cscov; int dccph_doff; int dccph_dport; int dccph_sport; } ;
struct TYPE_6__ {scalar_t__ dccpd_type; int dccpd_reset_code; int dccpd_ack_seq; int dccpd_seq; } ;
struct TYPE_5__ {int dccps_pcrlen; } ;
struct TYPE_4__ {int daddr; int saddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int FUNC_2 (struct dccp_hdr const*) ;
 struct sock* FUNC_3 (int *,struct sk_buff*,int ,int ,int ,int ,int ,int*) ;
 scalar_t__ FUNC_4 (struct sock*,struct sk_buff*,int,int,int) ;
 struct sock* FUNC_5 (struct sock*,struct sk_buff*,struct request_sock*) ;
 scalar_t__ FUNC_6 (struct sock*,struct sock*,struct sk_buff*) ;
 int VAR_7 ;
 struct dccp_hdr* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct dccp_hdr const*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (char*,...) ;
 TYPE_2__* FUNC_13 (struct sock*) ;
 scalar_t__ FUNC_14 (struct sk_buff*,int *,int *) ;
 int FUNC_15 (struct sock*,struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sock*,struct request_sock*) ;
 struct request_sock* FUNC_18 (struct sock*) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (int ) ;
 TYPE_1__* FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct request_sock*) ;
 int FUNC_24 (struct sock*) ;
 int FUNC_25 (struct sock*) ;
 scalar_t__ FUNC_26 (int) ;
 int FUNC_27 (struct sock*,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_28(struct sk_buff *VAR_8)
{
 const struct dccp_hdr *VAR_9;
 bool VAR_10;
 struct sock *VAR_11;
 int VAR_12;



 if (FUNC_10(VAR_8))
  goto discard_it;


 if (FUNC_14(VAR_8, &FUNC_21(VAR_8)->saddr,
         &FUNC_21(VAR_8)->daddr)) {
  FUNC_1("dropped packet with invalid checksum\n");
  goto discard_it;
 }

 VAR_9 = FUNC_7(VAR_8);

 FUNC_0(VAR_8)->dccpd_seq = FUNC_9(VAR_9);
 FUNC_0(VAR_8)->dccpd_type = VAR_9->dccph_type;

 if (FUNC_11(VAR_8))
  FUNC_0(VAR_8)->dccpd_ack_seq = VAR_3;
 else
  FUNC_0(VAR_8)->dccpd_ack_seq = FUNC_8(VAR_8);

lookup:
 VAR_11 = FUNC_3(&VAR_7, VAR_8, FUNC_2(VAR_9),
           VAR_9->dccph_sport, VAR_9->dccph_dport,
    FUNC_16(VAR_8), 0, &VAR_10);
 if (!VAR_11) {
  FUNC_12("failed to look up flow ID in table and "
         "get corresponding socket\n");
  goto no_dccp_socket;
 }







 if (VAR_11->sk_state == VAR_5) {
  FUNC_12("sk->sk_state == DCCP_TIME_WAIT: do_time_wait\n");
  FUNC_20(FUNC_19(VAR_11));
  goto no_dccp_socket;
 }

 if (VAR_11->sk_state == VAR_1) {
  struct request_sock *VAR_13 = FUNC_18(VAR_11);
  struct sock *VAR_14;

  VAR_11 = VAR_13->rsk_listener;
  if (FUNC_26(VAR_11->sk_state != VAR_0)) {
   FUNC_17(VAR_11, VAR_13);
   goto lookup;
  }
  FUNC_24(VAR_11);
  VAR_10 = 1;
  VAR_14 = FUNC_5(VAR_11, VAR_8, VAR_13);
  if (!VAR_14) {
   FUNC_23(VAR_13);
   goto discard_and_relse;
  }
  if (VAR_14 == VAR_11) {
   FUNC_23(VAR_13);
  } else if (FUNC_6(VAR_11, VAR_14, VAR_8)) {
   FUNC_15(VAR_11, VAR_8);
   goto discard_and_relse;
  } else {
   FUNC_25(VAR_11);
   return 0;
  }
 }





 VAR_12 = FUNC_13(VAR_11)->dccps_pcrlen;
 if (VAR_9->dccph_cscov && (VAR_12 == 0 || VAR_9->dccph_cscov < VAR_12)) {
  FUNC_12("Packet CsCov %d does not satisfy MinCsCov %d\n",
         VAR_9->dccph_cscov, VAR_12);

  goto discard_and_relse;
 }

 if (!FUNC_27(VAR_11, VAR_6, VAR_8))
  goto discard_and_relse;

 return FUNC_4(VAR_11, VAR_8, 1, VAR_9->dccph_doff * 4,
    VAR_10) ? -1 : 0;

no_dccp_socket:
 if (!FUNC_27(((void*)0), VAR_6, VAR_8))
  goto discard_it;






 if (VAR_9->dccph_type != VAR_2) {
  FUNC_0(VAR_8)->dccpd_reset_code =
     VAR_4;
  FUNC_15(VAR_11, VAR_8);
 }

discard_it:
 FUNC_22(VAR_8);
 return 0;

discard_and_relse:
 if (VAR_10)
  FUNC_25(VAR_11);
 goto discard_it;
}
