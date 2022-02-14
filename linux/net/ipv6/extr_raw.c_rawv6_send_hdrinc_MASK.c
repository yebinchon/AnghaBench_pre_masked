
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockcm_cookie {int tsflags; int transmit_time; int mark; } ;
struct sock {int sk_priority; } ;
struct sk_buff {int len; int network_header; int transport_header; int ip_summed; int tstamp; int mark; int priority; int protocol; } ;
struct TYPE_4__ {TYPE_2__* dev; } ;
struct rt6_info {int rt6i_idev; TYPE_1__ dst; } ;
struct net {int dummy; } ;
struct msghdr {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct ipv6_pinfo {int recverr; } ;
struct flowi6 {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_5__ {int needed_tailroom; int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net*,int ,int ) ;
 int FUNC_1 (struct net*,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ,struct net*,struct sock*,struct sk_buff*,int *,TYPE_2__*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 struct ipv6_pinfo* FUNC_5 (struct sock*) ;
 struct ipv6hdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sock*,int,struct flowi6*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (struct sock*,struct sk_buff*) ;
 int FUNC_10 (struct ipv6hdr*,struct msghdr*,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct sk_buff*,TYPE_1__*) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*,int) ;
 int FUNC_19 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_20 (struct sock*,int,unsigned int,int*) ;
 struct net* FUNC_21 (struct sock*) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static int FUNC_23(struct sock *VAR_14, struct msghdr *VAR_15, int VAR_16,
   struct flowi6 *VAR_17, struct dst_entry **VAR_18,
   unsigned int VAR_19, const struct sockcm_cookie *VAR_20)
{
 struct ipv6_pinfo *VAR_21 = FUNC_5(VAR_14);
 struct net *VAR_22 = FUNC_21(VAR_14);
 struct ipv6hdr *VAR_23;
 struct sk_buff *VAR_24;
 int VAR_25;
 struct rt6_info *VAR_26 = (struct rt6_info *)*VAR_18;
 int VAR_27 = FUNC_2(VAR_26->dst.dev);
 int VAR_28 = VAR_26->dst.dev->needed_tailroom;

 if (VAR_16 > VAR_26->dst.dev->mtu) {
  FUNC_7(VAR_14, VAR_3, VAR_17, VAR_26->dst.dev->mtu);
  return -VAR_3;
 }
 if (VAR_16 < sizeof(struct ipv6hdr))
  return -VAR_2;
 if (VAR_19&VAR_10)
  goto out;

 VAR_24 = FUNC_20(VAR_14,
      VAR_16 + VAR_27 + VAR_28 + 15,
      VAR_19 & VAR_9, &VAR_25);
 if (!VAR_24)
  goto error;
 FUNC_16(VAR_24, VAR_27);

 VAR_24->protocol = FUNC_4(VAR_5);
 VAR_24->priority = VAR_14->sk_priority;
 VAR_24->mark = VAR_20->mark;
 VAR_24->tstamp = VAR_20->transmit_time;

 FUNC_15(VAR_24, VAR_16);
 FUNC_17(VAR_24);
 VAR_23 = FUNC_6(VAR_24);

 VAR_24->ip_summed = VAR_0;

 FUNC_19(VAR_24, VAR_20->tsflags);

 if (VAR_19 & VAR_8)
  FUNC_18(VAR_24, 1);

 VAR_24->transport_header = VAR_24->network_header;
 VAR_25 = FUNC_10(VAR_23, VAR_15, VAR_16);
 if (VAR_25) {
  VAR_25 = -VAR_1;
  FUNC_8(VAR_24);
  goto error;
 }

 FUNC_14(VAR_24, &VAR_26->dst);
 *VAR_18 = ((void*)0);




 VAR_24 = FUNC_9(VAR_14, VAR_24);
 if (FUNC_22(!VAR_24))
  return 0;





 FUNC_12();
 FUNC_1(VAR_22, VAR_26->rt6i_idev, VAR_6, VAR_24->len);
 VAR_25 = FUNC_3(VAR_11, VAR_12, VAR_22, VAR_14, VAR_24,
        ((void*)0), VAR_26->dst.dev, VAR_13);
 if (VAR_25 > 0)
  VAR_25 = FUNC_11(VAR_25);
 if (VAR_25) {
  FUNC_0(VAR_22, VAR_26->rt6i_idev, VAR_7);
  FUNC_13();
  goto error_check;
 }
 FUNC_13();
out:
 return 0;

error:
 FUNC_0(VAR_22, VAR_26->rt6i_idev, VAR_7);
error_check:
 if (VAR_25 == -VAR_4 && !VAR_21->recverr)
  VAR_25 = 0;
 return VAR_25;
}
