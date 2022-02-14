
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockcm_cookie {int tsflags; int transmit_time; int mark; } ;
struct sock {int sk_priority; } ;
struct sk_buff {unsigned int transport_header; unsigned int network_header; int ip_summed; int tstamp; int mark; int priority; } ;
struct TYPE_4__ {TYPE_2__* dev; } ;
struct rtable {TYPE_1__ dst; } ;
struct net {int dummy; } ;
struct msghdr {int dummy; } ;
struct iphdr {int ihl; scalar_t__ protocol; scalar_t__ check; int id; int tot_len; scalar_t__ saddr; } ;
struct inet_sock {int recverr; int inet_dport; } ;
struct icmphdr {int type; } ;
struct flowi4 {scalar_t__ saddr; int daddr; } ;
struct TYPE_5__ {size_t mtu; int needed_tailroom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,struct net*,struct sock*,struct sk_buff*,int *,TYPE_2__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct net*,int ) ;
 struct inet_sock* FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (unsigned char*,int) ;
 struct iphdr* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sock*,int,int ,int ,size_t) ;
 int FUNC_9 (struct net*,struct sk_buff*,int *) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct iphdr*,struct msghdr*,size_t) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct sk_buff*,TYPE_1__*) ;
 int FUNC_14 (struct sk_buff*,size_t) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,int) ;
 int FUNC_18 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_19 (struct sk_buff*) ;
 struct sk_buff* FUNC_20 (struct sock*,size_t,unsigned int,int*) ;
 struct net* FUNC_21 (struct sock*) ;

__attribute__((used)) static int FUNC_22(struct sock *VAR_13, struct flowi4 *VAR_14,
      struct msghdr *VAR_15, size_t VAR_16,
      struct rtable **VAR_17, unsigned int VAR_18,
      const struct sockcm_cookie *VAR_19)
{
 struct inet_sock *VAR_20 = FUNC_5(VAR_13);
 struct net *VAR_21 = FUNC_21(VAR_13);
 struct iphdr *VAR_22;
 struct sk_buff *VAR_23;
 unsigned int VAR_24;
 int VAR_25;
 struct rtable *VAR_26 = *VAR_17;
 int VAR_27, VAR_28;

 if (VAR_16 > VAR_26->dst.dev->mtu) {
  FUNC_8(VAR_13, VAR_3, VAR_14->daddr, VAR_20->inet_dport,
          VAR_26->dst.dev->mtu);
  return -VAR_3;
 }
 if (VAR_16 < sizeof(struct iphdr))
  return -VAR_2;

 if (VAR_18&VAR_9)
  goto out;

 VAR_27 = FUNC_1(VAR_26->dst.dev);
 VAR_28 = VAR_26->dst.dev->needed_tailroom;
 VAR_23 = FUNC_20(VAR_13,
      VAR_16 + VAR_27 + VAR_28 + 15,
      VAR_18 & VAR_8, &VAR_25);
 if (!VAR_23)
  goto error;
 FUNC_15(VAR_23, VAR_27);

 VAR_23->priority = VAR_13->sk_priority;
 VAR_23->mark = VAR_19->mark;
 VAR_23->tstamp = VAR_19->transmit_time;
 FUNC_13(VAR_23, &VAR_26->dst);
 *VAR_17 = ((void*)0);

 FUNC_16(VAR_23);
 VAR_22 = FUNC_7(VAR_23);
 FUNC_14(VAR_23, VAR_16);

 VAR_23->ip_summed = VAR_0;

 FUNC_18(VAR_23, VAR_19->tsflags);

 if (VAR_18 & VAR_7)
  FUNC_17(VAR_23, 1);

 VAR_23->transport_header = VAR_23->network_header;
 VAR_25 = -VAR_1;
 if (FUNC_11(VAR_22, VAR_15, VAR_16))
  goto error_free;

 VAR_24 = VAR_22->ihl * 4;
 VAR_25 = -VAR_2;
 if (VAR_24 > VAR_16)
  goto error_free;

 if (VAR_24 >= sizeof(*VAR_22)) {
  if (!VAR_22->saddr)
   VAR_22->saddr = VAR_14->saddr;
  VAR_22->check = 0;
  VAR_22->tot_len = FUNC_3(VAR_16);
  if (!VAR_22->id)
   FUNC_9(VAR_21, VAR_23, ((void*)0));

  VAR_22->check = FUNC_6((unsigned char *)VAR_22, VAR_22->ihl);
  VAR_23->transport_header += VAR_24;
  if (VAR_22->protocol == VAR_5 &&
      VAR_16 >= VAR_24 + sizeof(struct icmphdr))
   FUNC_4(VAR_21, ((struct icmphdr *)
    FUNC_19(VAR_23))->type);
 }

 VAR_25 = FUNC_2(VAR_10, VAR_11,
        VAR_21, VAR_13, VAR_23, ((void*)0), VAR_26->dst.dev,
        VAR_12);
 if (VAR_25 > 0)
  VAR_25 = FUNC_12(VAR_25);
 if (VAR_25)
  goto error;
out:
 return 0;

error_free:
 FUNC_10(VAR_23);
error:
 FUNC_0(VAR_21, VAR_6);
 if (VAR_25 == -VAR_4 && !VAR_20->recverr)
  VAR_25 = 0;
 return VAR_25;
}
