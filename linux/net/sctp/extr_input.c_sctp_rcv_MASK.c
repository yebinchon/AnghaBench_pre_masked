
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sock {scalar_t__ sk_bound_dev_if; } ;
struct sk_buff {scalar_t__ pkt_type; scalar_t__ len; int csum_valid; int dev; } ;
struct sctphdr {int dummy; } ;
struct sctp_transport {int dummy; } ;
struct sctp_ep_common {int inqueue; struct sock* sk; } ;
struct sctp_endpoint {struct sctp_ep_common base; } ;
struct sctp_chunkhdr {int dummy; } ;
struct sctp_chunk {struct sctp_ep_common* rcvr; struct sctp_transport* transport; int sctp_hdr; } ;
struct sctp_association {struct sctp_ep_common base; } ;
struct sctp_af {scalar_t__ (* skb_iif ) (struct sk_buff*) ;int (* addr_valid ) (union sctp_addr*,int *,struct sk_buff*) ;int (* from_skb ) (union sctp_addr*,struct sk_buff*,int) ;} ;
struct TYPE_5__ {struct sock* ctl_sock; } ;
struct net {TYPE_1__ sctp; } ;
struct TYPE_8__ {struct sctp_chunk* chunk; struct sctp_af* af; } ;
struct TYPE_7__ {int version; } ;
struct TYPE_6__ {struct sctp_endpoint* ep; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct net*,int ) ;
 struct sctp_association* FUNC_2 (struct net*,struct sk_buff*,union sctp_addr*,union sctp_addr*,struct sctp_transport**) ;
 struct sctp_endpoint* FUNC_3 (struct net*,struct sk_buff*,union sctp_addr*,union sctp_addr*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 struct net* FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int) ;
 scalar_t__ FUNC_14 (struct sock*,struct sk_buff*) ;
 int VAR_8 ;
 int FUNC_15 (struct sctp_chunk*) ;
 struct sctp_chunk* FUNC_16 (struct sk_buff*,struct sctp_association*,struct sock*,int ) ;
 int FUNC_17 (struct sctp_endpoint*) ;
 int FUNC_18 (struct sctp_endpoint*) ;
 struct sctp_af* FUNC_19 (int) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sctp_chunk*,union sctp_addr*,union sctp_addr*) ;
 int FUNC_22 (int *,struct sctp_chunk*) ;
 int FUNC_23 (struct sock*) ;
 scalar_t__ FUNC_24 (struct net*,struct sk_buff*) ;
 scalar_t__ FUNC_25 (struct sk_buff*) ;
 TYPE_2__* FUNC_26 (struct sock*) ;
 int FUNC_27 (struct sctp_transport*) ;
 scalar_t__ FUNC_28 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_29 (struct sk_buff*) ;
 scalar_t__ FUNC_30 (struct sk_buff*) ;
 scalar_t__ FUNC_31 (struct sk_buff*) ;
 scalar_t__ FUNC_32 (struct sk_buff*) ;
 int FUNC_33 (struct sk_buff*) ;
 scalar_t__ FUNC_34 (struct sock*) ;
 int FUNC_35 (union sctp_addr*,struct sk_buff*,int) ;
 int FUNC_36 (union sctp_addr*,struct sk_buff*,int) ;
 int FUNC_37 (union sctp_addr*,int *,struct sk_buff*) ;
 int FUNC_38 (union sctp_addr*,int *,struct sk_buff*) ;
 scalar_t__ FUNC_39 (struct sk_buff*) ;
 scalar_t__ FUNC_40 (int) ;
 int FUNC_41 (struct sock*,int ,struct sk_buff*,int) ;

int FUNC_42(struct sk_buff *VAR_9)
{
 struct sock *VAR_10;
 struct sctp_association *VAR_11;
 struct sctp_endpoint *VAR_12 = ((void*)0);
 struct sctp_ep_common *VAR_13;
 struct sctp_transport *VAR_14 = ((void*)0);
 struct sctp_chunk *VAR_15;
 union sctp_addr VAR_16;
 union sctp_addr VAR_17;
 int VAR_18;
 struct sctp_af *VAR_19;
 struct net *VAR_20 = FUNC_8(VAR_9->dev);
 bool VAR_21 = FUNC_30(VAR_9) && FUNC_31(VAR_9);

 if (VAR_9->pkt_type != VAR_1)
  goto discard_it;

 FUNC_1(VAR_20, VAR_2);




 if (VAR_9->len < sizeof(struct sctphdr) + sizeof(struct sctp_chunkhdr) +
         FUNC_33(VAR_9))
  goto discard_it;





 if ((!VAR_21 && FUNC_32(VAR_9)) ||
     !FUNC_13(VAR_9, sizeof(struct sctphdr)))
  goto discard_it;


 FUNC_5(VAR_9, FUNC_33(VAR_9));

 VAR_9->csum_valid = 0;
 if (FUNC_29(VAR_9))
  FUNC_4(VAR_9);
 else if (!VAR_8 &&
   !VAR_21 &&
   FUNC_24(VAR_20, VAR_9) < 0)
  goto discard_it;
 VAR_9->csum_valid = 1;

 FUNC_5(VAR_9, sizeof(struct sctphdr));

 VAR_18 = FUNC_10(FUNC_9(VAR_9)->version);
 VAR_19 = FUNC_19(VAR_18);
 if (FUNC_40(!VAR_19))
  goto discard_it;
 FUNC_0(VAR_9)->af = VAR_19;


 VAR_19->from_skb(&VAR_16, VAR_9, 1);
 VAR_19->from_skb(&VAR_17, VAR_9, 0);
 if (!VAR_19->addr_valid(&VAR_16, ((void*)0), VAR_9) ||
     !VAR_19->addr_valid(&VAR_17, ((void*)0), VAR_9))
  goto discard_it;

 VAR_11 = FUNC_2(VAR_20, VAR_9, &VAR_16, &VAR_17, &VAR_14);

 if (!VAR_11)
  VAR_12 = FUNC_3(VAR_20, VAR_9, &VAR_17, &VAR_16);


 VAR_13 = VAR_11 ? &VAR_11->base : &VAR_12->base;
 VAR_10 = VAR_13->sk;





 if (VAR_10->sk_bound_dev_if && (VAR_10->sk_bound_dev_if != VAR_19->skb_iif(VAR_9))) {
  if (VAR_14) {
   FUNC_27(VAR_14);
   VAR_11 = ((void*)0);
   VAR_14 = ((void*)0);
  } else {
   FUNC_18(VAR_12);
   VAR_12 = ((void*)0);
  }
  VAR_10 = VAR_20->sctp.ctl_sock;
  VAR_12 = FUNC_26(VAR_10)->ep;
  FUNC_17(VAR_12);
  VAR_13 = &VAR_12->base;
 }
 if (!VAR_11) {
  if (FUNC_25(VAR_9)) {
   FUNC_1(VAR_20, VAR_6);
   goto discard_release;
  }
 }

 if (!FUNC_41(VAR_10, VAR_7, VAR_9, VAR_18))
  goto discard_release;
 FUNC_12(VAR_9);

 if (FUNC_28(VAR_10, VAR_9))
  goto discard_release;


 VAR_15 = FUNC_16(VAR_9, VAR_11, VAR_10, VAR_0);
 if (!VAR_15)
  goto discard_release;
 FUNC_0(VAR_9)->chunk = VAR_15;


 VAR_15->rcvr = VAR_13;


 VAR_15->sctp_hdr = FUNC_20(VAR_9);


 FUNC_21(VAR_15, &VAR_16, &VAR_17);


 VAR_15->transport = VAR_14;





 FUNC_6(VAR_10);

 if (VAR_10 != VAR_13->sk) {







  FUNC_7(VAR_10);
  VAR_10 = VAR_13->sk;
  FUNC_6(VAR_10);
 }

 if (FUNC_34(VAR_10) || !FUNC_23(VAR_10)) {
  if (FUNC_14(VAR_10, VAR_9)) {
   FUNC_7(VAR_10);
   FUNC_15(VAR_15);
   VAR_9 = ((void*)0);
   goto discard_release;
  }
  FUNC_1(VAR_20, VAR_3);
 } else {
  FUNC_1(VAR_20, VAR_5);
  FUNC_22(&VAR_15->rcvr->inqueue, VAR_15);
 }

 FUNC_7(VAR_10);


 if (VAR_14)
  FUNC_27(VAR_14);
 else
  FUNC_18(VAR_12);

 return 0;

discard_it:
 FUNC_1(VAR_20, VAR_4);
 FUNC_11(VAR_9);
 return 0;

discard_release:

 if (VAR_14)
  FUNC_27(VAR_14);
 else
  FUNC_18(VAR_12);

 goto discard_it;
}
