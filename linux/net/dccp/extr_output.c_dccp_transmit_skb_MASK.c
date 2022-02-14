
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int sk; } ;
struct TYPE_6__ {int fl; } ;
struct inet_sock {TYPE_2__ cork; int inet_dport; int inet_sport; } ;
struct inet_connection_sock {TYPE_1__* icsk_af_ops; int icsk_retransmits; } ;
struct dccp_sock {int dccps_iss; int dccps_awl; int dccps_service; int dccps_gss; int dccps_pcslen; int dccps_gsr; } ;
struct dccp_skb_cb {int dccpd_type; int const dccpd_opt_len; int dccpd_reset_code; int dccpd_seq; int dccpd_ccval; int dccpd_ack_seq; } ;
struct dccp_hdr_ext {int dummy; } ;
struct dccp_hdr {int dccph_type; int dccph_doff; int dccph_x; int dccph_cscov; int dccph_ccval; int dccph_dport; int dccph_sport; } ;
struct TYPE_8__ {int dccph_req_service; } ;
struct TYPE_7__ {int dccph_reset_code; } ;
struct TYPE_5__ {int (* queue_xmit ) (struct sock*,struct sk_buff*,int *) ;int (* send_check ) (struct sock*,struct sk_buff*) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;






 struct dccp_skb_cb* FUNC_2 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sk_buff*) ;
 TYPE_4__* FUNC_6 (struct sk_buff*) ;
 TYPE_3__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct dccp_hdr*,int ) ;
 scalar_t__ FUNC_10 (struct sock*,struct sk_buff*) ;
 int FUNC_11 (int) ;
 struct dccp_sock* FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,int ) ;
 struct dccp_hdr* FUNC_14 (struct sk_buff*,int const) ;
 struct inet_connection_sock* FUNC_15 (struct sock*) ;
 struct inet_sock* FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int) ;
 int FUNC_20 (struct sk_buff*,struct sock*) ;
 int FUNC_21 (struct sock*,struct sk_buff*) ;
 int FUNC_22 (struct sock*,struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_23(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 if (FUNC_18(VAR_4 != ((void*)0))) {
  struct inet_sock *VAR_5 = FUNC_16(VAR_3);
  const struct inet_connection_sock *VAR_6 = FUNC_15(VAR_3);
  struct dccp_sock *VAR_7 = FUNC_12(VAR_3);
  struct dccp_skb_cb *VAR_8 = FUNC_2(VAR_4);
  struct dccp_hdr *VAR_9;

  const u32 VAR_10 = sizeof(*VAR_9) +
          sizeof(struct dccp_hdr_ext) +
       FUNC_11(VAR_8->dccpd_type);
  int VAR_11, VAR_12 = 1;
  u64 VAR_13 = VAR_7->dccps_gsr;




  VAR_8->dccpd_seq = FUNC_0(VAR_7->dccps_gss, 1);

  switch (VAR_8->dccpd_type) {
  case 133:
   VAR_12 = 0;

  case 132:
  case 130:
   break;

  case 131:
   VAR_12 = 0;

   if (VAR_6->icsk_retransmits == 0)
    VAR_8->dccpd_seq = VAR_7->dccps_iss;


  case 129:
  case 128:
   VAR_13 = VAR_8->dccpd_ack_seq;

  default:






   FUNC_3(VAR_4->sk);
   FUNC_20(VAR_4, VAR_3);
   break;
  }

  if (FUNC_10(VAR_3, VAR_4)) {
   FUNC_17(VAR_4);
   return -VAR_2;
  }



  VAR_9 = FUNC_14(VAR_4, VAR_10);
  VAR_9->dccph_type = VAR_8->dccpd_type;
  VAR_9->dccph_sport = VAR_5->inet_sport;
  VAR_9->dccph_dport = VAR_5->inet_dport;
  VAR_9->dccph_doff = (VAR_10 + VAR_8->dccpd_opt_len) / 4;
  VAR_9->dccph_ccval = VAR_8->dccpd_ccval;
  VAR_9->dccph_cscov = VAR_7->dccps_pcslen;

  VAR_9->dccph_x = 1;

  FUNC_13(VAR_3, VAR_8->dccpd_seq);
  FUNC_9(VAR_9, VAR_7->dccps_gss);
  if (VAR_12)
   FUNC_8(FUNC_5(VAR_4), VAR_13);

  switch (VAR_8->dccpd_type) {
  case 131:
   FUNC_6(VAR_4)->dccph_req_service =
       VAR_7->dccps_service;




   VAR_7->dccps_awl = VAR_7->dccps_iss;
   break;
  case 130:
   FUNC_7(VAR_4)->dccph_reset_code =
       VAR_8->dccpd_reset_code;
   break;
  }

  VAR_6->icsk_af_ops->send_check(VAR_3, VAR_4);

  if (VAR_12)
   FUNC_4(VAR_3);

  FUNC_1(VAR_0);

  VAR_11 = VAR_6->icsk_af_ops->queue_xmit(VAR_3, VAR_4, &VAR_5->cork.fl);
  return FUNC_19(VAR_11);
 }
 return -VAR_1;
}
