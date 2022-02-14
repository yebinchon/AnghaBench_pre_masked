
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_state; int (* sk_state_change ) (struct sock*) ;} ;
struct sk_buff {int dummy; } ;
struct dccp_sock {scalar_t__ dccps_role; } ;
struct dccp_skb_cb {int dccpd_seq; void* dccpd_reset_code; } ;
struct dccp_hdr {scalar_t__ dccph_type; } ;
struct TYPE_4__ {TYPE_1__* icsk_af_ops; } ;
struct TYPE_3__ {scalar_t__ (* conn_request ) (struct sock*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

 void* VAR_12 ;

 scalar_t__ VAR_13 ;
 struct dccp_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sock*,int *,struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sock*,struct sk_buff*) ;
 int FUNC_9 (struct sock*,struct sk_buff*,struct dccp_hdr*,unsigned int) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;
 int FUNC_11 (struct sock*,struct sk_buff*,struct dccp_hdr*,unsigned int) ;
 int FUNC_12 (struct sock*,int ,scalar_t__) ;
 struct dccp_sock* FUNC_13 (struct sock*) ;
 TYPE_2__* FUNC_14 (struct sock*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (struct sock*,int ,int ) ;
 scalar_t__ FUNC_20 (struct sock*,struct sk_buff*) ;
 int FUNC_21 (struct sock*) ;
 scalar_t__ FUNC_22 (int) ;

int FUNC_23(struct sock *VAR_16, struct sk_buff *VAR_17,
      struct dccp_hdr *VAR_18, unsigned int VAR_19)
{
 struct dccp_sock *VAR_20 = FUNC_13(VAR_16);
 struct dccp_skb_cb *VAR_21 = FUNC_0(VAR_17);
 const int VAR_22 = VAR_16->sk_state;
 bool VAR_23;
 int VAR_24 = 0;
 if (VAR_16->sk_state == VAR_1) {
  if (VAR_18->dccph_type == VAR_7) {



   FUNC_17();
   FUNC_15();
   VAR_23 = FUNC_14(VAR_16)->icsk_af_ops->conn_request(VAR_16, VAR_17) >= 0;
   FUNC_16();
   FUNC_18();
   if (!VAR_23)
    return 1;
   FUNC_2(VAR_17);
   return 0;
  }
  if (VAR_18->dccph_type == VAR_8)
   goto discard;


  VAR_21->dccpd_reset_code = VAR_12;
  return 1;
 } else if (VAR_16->sk_state == VAR_0) {
  VAR_21->dccpd_reset_code = VAR_12;
  return 1;
 }


 if (VAR_16->sk_state != 129 && FUNC_3(VAR_16, VAR_17))
  goto discard;
 if ((VAR_20->dccps_role != VAR_13 &&
      VAR_18->dccph_type == VAR_9) ||
     (VAR_20->dccps_role == VAR_13 &&
      VAR_18->dccph_type == VAR_7) ||
     (VAR_16->sk_state == 128 && VAR_18->dccph_type == VAR_5)) {
  FUNC_12(VAR_16, VAR_21->dccpd_seq, VAR_10);
  goto discard;
 }


 if (FUNC_6(VAR_16, ((void*)0), VAR_17))
  return 1;
 if (VAR_18->dccph_type == VAR_8) {
  FUNC_10(VAR_16, VAR_17);
  return 0;
 } else if (VAR_18->dccph_type == VAR_4) {
  if (FUNC_8(VAR_16, VAR_17))
   return 0;
  goto discard;
 } else if (VAR_18->dccph_type == VAR_3) {
  if (FUNC_7(VAR_16, VAR_17))
   return 0;
  goto discard;
 }

 switch (VAR_16->sk_state) {
 case 129:
  VAR_24 = FUNC_9(VAR_16, VAR_17, VAR_18, VAR_19);
  if (VAR_24 >= 0)
   return VAR_24;

  FUNC_1(VAR_17);
  return 0;

 case 130:

  FUNC_5(VAR_16, VAR_17);
  FUNC_4(VAR_16, VAR_17);

 case 128:
  VAR_24 = FUNC_11(VAR_16, VAR_17,
         VAR_18, VAR_19);
  break;
 }

 if (VAR_18->dccph_type == VAR_2 ||
     VAR_18->dccph_type == VAR_6) {
  switch (VAR_22) {
  case 130:
   VAR_16->sk_state_change(VAR_16);
   FUNC_19(VAR_16, VAR_15, VAR_14);
   break;
  }
 } else if (FUNC_22(VAR_18->dccph_type == VAR_10)) {
  FUNC_12(VAR_16, VAR_21->dccpd_seq, VAR_11);
  goto discard;
 }

 if (!VAR_24) {
discard:
  FUNC_1(VAR_17);
 }
 return 0;
}
