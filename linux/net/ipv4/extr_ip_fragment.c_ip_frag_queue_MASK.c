
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; scalar_t__ ip_summed; unsigned long _skb_refdst; int truesize; int tstamp; struct net_device* dev; } ;
struct net_device {int ifindex; } ;
struct net {int dummy; } ;
struct TYPE_7__ {int flags; int len; int meat; unsigned int max_size; TYPE_4__* fqdir; int stamp; struct sk_buff* fragments_tail; } ;
struct ipq {unsigned int max_df_size; TYPE_2__ q; int ecn; int iif; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {struct net* net; } ;
struct TYPE_6__ {int frag_off; int tos; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct net*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,struct sk_buff*,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ipq*,struct sk_buff*,struct sk_buff*,struct net_device*) ;
 int FUNC_9 (struct ipq*) ;
 int FUNC_10 (struct ipq*) ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct ipq*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*,int) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static int FUNC_21(struct ipq *VAR_16, struct sk_buff *VAR_17)
{
 struct net *VAR_18 = VAR_16->q.fqdir->net;
 int VAR_19, VAR_20, VAR_21, VAR_22;
 struct sk_buff *VAR_23;
 struct net_device *VAR_24;
 unsigned int VAR_25;
 int VAR_26 = -VAR_4;
 u8 VAR_27;

 if (VAR_16->q.flags & VAR_6)
  goto err;

 if (!(FUNC_0(VAR_17)->flags & VAR_10) &&
     FUNC_20(FUNC_10(VAR_16)) &&
     FUNC_20(VAR_26 = FUNC_9(VAR_16))) {
  FUNC_13(VAR_16);
  goto err;
 }

 VAR_27 = FUNC_7(FUNC_11(VAR_17)->tos);
 VAR_22 = FUNC_15(FUNC_11(VAR_17)->frag_off);
 VAR_21 = VAR_22 & ~VAR_15;
 VAR_22 &= VAR_15;
 VAR_22 <<= 3;
 VAR_19 = FUNC_12(VAR_17);


 VAR_20 = VAR_22 + VAR_17->len - FUNC_19(VAR_17) - VAR_19;
 VAR_26 = -VAR_3;


 if ((VAR_21 & VAR_14) == 0) {



  if (VAR_20 < VAR_16->q.len ||
      ((VAR_16->q.flags & VAR_8) && VAR_20 != VAR_16->q.len))
   goto discard_qp;
  VAR_16->q.flags |= VAR_8;
  VAR_16->q.len = VAR_20;
 } else {
  if (VAR_20&7) {
   VAR_20 &= ~7;
   if (VAR_17->ip_summed != VAR_1)
    VAR_17->ip_summed = VAR_0;
  }
  if (VAR_20 > VAR_16->q.len) {

   if (VAR_16->q.flags & VAR_8)
    goto discard_qp;
   VAR_16->q.len = VAR_20;
  }
 }
 if (VAR_20 == VAR_22)
  goto discard_qp;

 VAR_26 = -VAR_5;
 if (!FUNC_16(VAR_17, FUNC_19(VAR_17) + VAR_19))
  goto discard_qp;

 VAR_26 = FUNC_17(VAR_17, VAR_20 - VAR_22);
 if (VAR_26)
  goto discard_qp;


 VAR_24 = VAR_17->dev;

 FUNC_3();

 VAR_23 = VAR_16->q.fragments_tail;
 VAR_26 = FUNC_6(&VAR_16->q, VAR_17, VAR_22, VAR_20);
 if (VAR_26)
  goto insert_error;

 if (VAR_24)
  VAR_16->iif = VAR_24->ifindex;

 VAR_16->q.stamp = VAR_17->tstamp;
 VAR_16->q.meat += VAR_17->len;
 VAR_16->ecn |= VAR_27;
 FUNC_2(VAR_16->q.fqdir, VAR_17->truesize);
 if (VAR_22 == 0)
  VAR_16->q.flags |= VAR_7;

 VAR_25 = VAR_17->len + VAR_19;

 if (VAR_25 > VAR_16->q.max_size)
  VAR_16->q.max_size = VAR_25;

 if (FUNC_11(VAR_17)->frag_off & FUNC_4(VAR_13) &&
     VAR_25 > VAR_16->max_df_size)
  VAR_16->max_df_size = VAR_25;

 if (VAR_16->q.flags == (VAR_7 | VAR_8) &&
     VAR_16->q.meat == VAR_16->q.len) {
  unsigned long VAR_28 = VAR_17->_skb_refdst;

  VAR_17->_skb_refdst = 0UL;
  VAR_26 = FUNC_8(VAR_16, VAR_17, VAR_23, VAR_24);
  VAR_17->_skb_refdst = VAR_28;
  if (VAR_26)
   FUNC_5(&VAR_16->q);
  return VAR_26;
 }

 FUNC_18(VAR_17);
 return -VAR_2;

insert_error:
 if (VAR_26 == VAR_9) {
  FUNC_14(VAR_17);
  return -VAR_3;
 }
 VAR_26 = -VAR_3;
 FUNC_1(VAR_18, VAR_12);
discard_qp:
 FUNC_5(&VAR_16->q);
 FUNC_1(VAR_18, VAR_11);
err:
 FUNC_14(VAR_17);
 return VAR_26;
}
