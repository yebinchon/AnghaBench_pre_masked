
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_wmem_alloc; int sk_write_queue; int sk_allocation; } ;
struct sk_buff {int len; scalar_t__ ip_summed; int data_len; int truesize; scalar_t__ csum; scalar_t__ network_header; scalar_t__ transport_header; } ;
struct TYPE_5__ {TYPE_3__* dev; } ;
struct rtable {TYPE_2__ dst; } ;
struct page {int dummy; } ;
struct iphdr {int dummy; } ;
struct ip_options {int optlen; } ;
struct inet_cork {int flags; int fragsize; size_t length; scalar_t__ gso_size; struct ip_options* opt; scalar_t__ dst; } ;
struct TYPE_4__ {struct inet_cork base; } ;
struct inet_sock {int inet_dport; TYPE_1__ cork; scalar_t__ hdrincl; } ;
struct flowi4 {int daddr; } ;
typedef int ssize_t ;
typedef int __wsum ;
struct TYPE_6__ {int features; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int VAR_8 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,unsigned int) ;
 int FUNC_4 (struct page*,int,int) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 struct inet_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int,int ,int ,int) ;
 scalar_t__ FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sk_buff*,unsigned int) ;
 int FUNC_10 (int,int *) ;
 scalar_t__ FUNC_11 (struct sk_buff*,struct page*,int,int) ;
 scalar_t__ FUNC_12 (struct sk_buff*,unsigned int,int ,unsigned int,int ) ;
 struct sk_buff* FUNC_13 (int *) ;
 int FUNC_14 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sock*) ;
 struct sk_buff* FUNC_20 (struct sock*,int,int,int ) ;
 scalar_t__ FUNC_21 (int) ;

ssize_t FUNC_22(struct sock *VAR_11, struct flowi4 *VAR_12, struct page *VAR_13,
         int VAR_14, size_t VAR_15, int VAR_16)
{
 struct inet_sock *VAR_17 = FUNC_6(VAR_11);
 struct sk_buff *VAR_18;
 struct rtable *VAR_19;
 struct ip_options *VAR_20 = ((void*)0);
 struct inet_cork *VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 unsigned int VAR_26, VAR_27, VAR_28, VAR_29;

 if (VAR_17->hdrincl)
  return -VAR_5;

 if (VAR_16&VAR_9)
  return 0;

 if (FUNC_15(&VAR_11->sk_write_queue))
  return -VAR_1;

 VAR_21 = &VAR_17->cork.base;
 VAR_19 = (struct rtable *)VAR_21->dst;
 if (VAR_21->flags & VAR_6)
  VAR_20 = VAR_21->opt;

 if (!(VAR_19->dst.dev->features&VAR_10))
  return -VAR_4;

 VAR_22 = FUNC_1(VAR_19->dst.dev);
 VAR_23 = VAR_21->gso_size ? VAR_8 : VAR_21->fragsize;

 VAR_27 = sizeof(struct iphdr) + (VAR_20 ? VAR_20->optlen : 0);
 VAR_26 = ((VAR_23 - VAR_27) & ~7) + VAR_27;
 VAR_29 = FUNC_8(VAR_11) ? 0xFFFF : VAR_23;

 if (VAR_21->length + VAR_15 > VAR_29 - VAR_27) {
  FUNC_7(VAR_11, VAR_2, VAR_12->daddr, VAR_17->inet_dport,
          VAR_23 - (VAR_20 ? VAR_20->optlen : 0));
  return -VAR_2;
 }

 VAR_18 = FUNC_13(&VAR_11->sk_write_queue);
 if (!VAR_18)
  return -VAR_1;

 VAR_21->length += VAR_15;

 while (VAR_15 > 0) {

  VAR_24 = VAR_23 - VAR_18->len;
  if (VAR_24 < VAR_15)
   VAR_24 = VAR_26 - VAR_18->len;

  if (VAR_24 <= 0) {
   struct sk_buff *VAR_30;
   int VAR_31;

   VAR_30 = VAR_18;
   VAR_28 = VAR_30->len - VAR_26;

   VAR_31 = VAR_27 + VAR_22 + VAR_28 + 15;
   VAR_18 = FUNC_20(VAR_11, VAR_31, 1, VAR_11->sk_allocation);
   if (FUNC_21(!VAR_18)) {
    VAR_25 = -VAR_3;
    goto error;
   }




   VAR_18->ip_summed = VAR_0;
   VAR_18->csum = 0;
   FUNC_16(VAR_18, VAR_22);




   FUNC_14(VAR_18, VAR_27 + VAR_28);
   FUNC_17(VAR_18);
   VAR_18->transport_header = (VAR_18->network_header +
       VAR_27);
   if (VAR_28) {
    VAR_18->csum = FUNC_12(VAR_30,
           VAR_26,
          FUNC_18(VAR_18),
           VAR_28, 0);
    VAR_30->csum = FUNC_5(VAR_30->csum,
         VAR_18->csum);
    FUNC_9(VAR_30, VAR_26);
   }




   FUNC_2(&VAR_11->sk_write_queue, VAR_18);
   continue;
  }

  if (VAR_24 > VAR_15)
   VAR_24 = VAR_15;

  if (FUNC_11(VAR_18, VAR_13, VAR_14, VAR_24)) {
   VAR_25 = -VAR_2;
   goto error;
  }

  if (VAR_18->ip_summed == VAR_0) {
   __wsum VAR_32;
   VAR_32 = FUNC_4(VAR_13, VAR_14, VAR_24);
   VAR_18->csum = FUNC_3(VAR_18->csum, VAR_32, VAR_18->len);
  }

  VAR_18->len += VAR_24;
  VAR_18->data_len += VAR_24;
  VAR_18->truesize += VAR_24;
  FUNC_10(VAR_24, &VAR_11->sk_wmem_alloc);
  VAR_14 += VAR_24;
  VAR_15 -= VAR_24;
 }
 return 0;

error:
 VAR_21->length -= VAR_15;
 FUNC_0(FUNC_19(VAR_11), VAR_7);
 return VAR_25;
}
