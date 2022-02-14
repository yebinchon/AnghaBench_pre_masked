
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct request_sock {struct sock* rsk_listener; } ;
struct iphdr {int daddr; int saddr; } ;
struct dccp_hdr {scalar_t__ dccph_type; int dccph_cscov; int dccph_doff; int dccph_dport; int dccph_sport; } ;
struct TYPE_4__ {scalar_t__ dccpd_type; int dccpd_reset_code; scalar_t__ dccpd_ack_seq; scalar_t__ dccpd_seq; } ;
struct TYPE_3__ {int dccps_pcrlen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int FUNC_2 (struct dccp_hdr const*) ;
 struct sock* FUNC_3 (int *,struct sk_buff*,int ,int ,int ,int ,int*) ;
 int FUNC_4 (struct sock*,struct sk_buff*,int,int,int) ;
 struct sock* FUNC_5 (struct sock*,struct sk_buff*,struct request_sock*) ;
 scalar_t__ FUNC_6 (struct sock*,struct sock*,struct sk_buff*) ;
 int VAR_7 ;
 struct dccp_hdr* FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct dccp_hdr const*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,...) ;
 TYPE_1__* FUNC_15 (struct sock*) ;
 scalar_t__ FUNC_16 (struct sk_buff*,int ,int ) ;
 int FUNC_17 (struct sock*,struct sk_buff*) ;
 int FUNC_18 (struct sock*,struct request_sock*) ;
 struct request_sock* FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (int ) ;
 struct iphdr* FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (struct request_sock*) ;
 int FUNC_27 (struct sock*) ;
 int FUNC_28 (struct sock*) ;
 scalar_t__ FUNC_29 (int) ;
 int FUNC_30 (struct sock*,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_31(struct sk_buff *VAR_8)
{
 const struct dccp_hdr *VAR_9;
 const struct iphdr *VAR_10;
 bool VAR_11;
 struct sock *VAR_12;
 int VAR_13;



 if (FUNC_10(VAR_8))
  goto discard_it;

 VAR_10 = FUNC_22(VAR_8);

 if (FUNC_16(VAR_8, VAR_10->saddr, VAR_10->daddr)) {
  FUNC_1("dropped packet with invalid checksum\n");
  goto discard_it;
 }

 VAR_9 = FUNC_7(VAR_8);

 FUNC_0(VAR_8)->dccpd_seq = FUNC_9(VAR_9);
 FUNC_0(VAR_8)->dccpd_type = VAR_9->dccph_type;

 FUNC_13("%8.8s src=%pI4@%-5d dst=%pI4@%-5d seq=%llu",
        FUNC_11(VAR_9->dccph_type),
        &VAR_10->saddr, FUNC_25(VAR_9->dccph_sport),
        &VAR_10->daddr, FUNC_25(VAR_9->dccph_dport),
        (unsigned long long) FUNC_0(VAR_8)->dccpd_seq);

 if (FUNC_12(VAR_8)) {
  FUNC_0(VAR_8)->dccpd_ack_seq = VAR_3;
  FUNC_14("\n");
 } else {
  FUNC_0(VAR_8)->dccpd_ack_seq = FUNC_8(VAR_8);
  FUNC_14(", ack=%llu\n", (unsigned long long)
      FUNC_0(VAR_8)->dccpd_ack_seq);
 }

lookup:
 VAR_12 = FUNC_3(&VAR_7, VAR_8, FUNC_2(VAR_9),
          VAR_9->dccph_sport, VAR_9->dccph_dport, 0, &VAR_11);
 if (!VAR_12) {
  FUNC_13("failed to look up flow ID in table and "
         "get corresponding socket\n");
  goto no_dccp_socket;
 }







 if (VAR_12->sk_state == VAR_5) {
  FUNC_13("sk->sk_state == DCCP_TIME_WAIT: do_time_wait\n");
  FUNC_21(FUNC_20(VAR_12));
  goto no_dccp_socket;
 }

 if (VAR_12->sk_state == VAR_1) {
  struct request_sock *VAR_14 = FUNC_19(VAR_12);
  struct sock *VAR_15;

  VAR_12 = VAR_14->rsk_listener;
  if (FUNC_29(VAR_12->sk_state != VAR_0)) {
   FUNC_18(VAR_12, VAR_14);
   goto lookup;
  }
  FUNC_27(VAR_12);
  VAR_11 = 1;
  VAR_15 = FUNC_5(VAR_12, VAR_8, VAR_14);
  if (!VAR_15) {
   FUNC_26(VAR_14);
   goto discard_and_relse;
  }
  if (VAR_15 == VAR_12) {
   FUNC_26(VAR_14);
  } else if (FUNC_6(VAR_12, VAR_15, VAR_8)) {
   FUNC_17(VAR_12, VAR_8);
   goto discard_and_relse;
  } else {
   FUNC_28(VAR_12);
   return 0;
  }
 }





 VAR_13 = FUNC_15(VAR_12)->dccps_pcrlen;
 if (VAR_9->dccph_cscov && (VAR_13 == 0 || VAR_9->dccph_cscov < VAR_13)) {
  FUNC_13("Packet CsCov %d does not satisfy MinCsCov %d\n",
         VAR_9->dccph_cscov, VAR_13);



  goto discard_and_relse;
 }

 if (!FUNC_30(VAR_12, VAR_6, VAR_8))
  goto discard_and_relse;
 FUNC_24(VAR_8);

 return FUNC_4(VAR_12, VAR_8, 1, VAR_9->dccph_doff * 4, VAR_11);

no_dccp_socket:
 if (!FUNC_30(((void*)0), VAR_6, VAR_8))
  goto discard_it;






 if (VAR_9->dccph_type != VAR_2) {
  FUNC_0(VAR_8)->dccpd_reset_code =
     VAR_4;
  FUNC_17(VAR_12, VAR_8);
 }

discard_it:
 FUNC_23(VAR_8);
 return 0;

discard_and_relse:
 if (VAR_11)
  FUNC_28(VAR_12);
 goto discard_it;
}
