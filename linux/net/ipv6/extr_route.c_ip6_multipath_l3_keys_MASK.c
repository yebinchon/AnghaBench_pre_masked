
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ipv6hdr {scalar_t__ nexthdr; scalar_t__ icmp6_type; int daddr; int saddr; } ;
struct icmp6hdr {scalar_t__ nexthdr; scalar_t__ icmp6_type; int daddr; int saddr; } ;
struct TYPE_8__ {scalar_t__ ip_proto; } ;
struct TYPE_7__ {int flow_label; } ;
struct TYPE_5__ {int dst; int src; } ;
struct TYPE_6__ {TYPE_1__ v6addrs; } ;
struct flow_keys {TYPE_4__ basic; TYPE_3__ tags; TYPE_2__ addrs; } ;
typedef int _inner_iph ;
typedef int _icmph ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ipv6hdr const*) ;
 struct ipv6hdr* FUNC_1 (struct sk_buff const*) ;
 scalar_t__ FUNC_2 (int) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff const*,scalar_t__,int,struct ipv6hdr*) ;
 scalar_t__ FUNC_4 (struct sk_buff const*) ;

__attribute__((used)) static void FUNC_5(const struct sk_buff *VAR_5,
      struct flow_keys *VAR_6,
      struct flow_keys *VAR_7)
{
 const struct ipv6hdr *VAR_8 = FUNC_1(VAR_5);
 const struct ipv6hdr *VAR_9 = VAR_8;
 struct flow_keys *VAR_10 = VAR_7;
 const struct ipv6hdr *VAR_11;
 const struct icmp6hdr *VAR_12;
 struct ipv6hdr VAR_13;
 struct icmp6hdr VAR_14;

 if (FUNC_2(VAR_8->nexthdr != VAR_4))
  goto out;

 VAR_12 = FUNC_3(VAR_5, FUNC_4(VAR_5),
       sizeof(VAR_14), &VAR_14);
 if (!VAR_12)
  goto out;

 if (VAR_12->icmp6_type != VAR_0 &&
     VAR_12->icmp6_type != VAR_2 &&
     VAR_12->icmp6_type != VAR_3 &&
     VAR_12->icmp6_type != VAR_1)
  goto out;

 VAR_11 = FUNC_3(VAR_5,
           FUNC_4(VAR_5) + sizeof(*VAR_12),
           sizeof(VAR_13), &VAR_13);
 if (!VAR_11)
  goto out;

 VAR_9 = VAR_11;
 VAR_10 = ((void*)0);
out:
 if (VAR_10) {
  VAR_6->addrs.v6addrs.src = VAR_10->addrs.v6addrs.src;
  VAR_6->addrs.v6addrs.dst = VAR_10->addrs.v6addrs.dst;
  VAR_6->tags.flow_label = VAR_10->tags.flow_label;
  VAR_6->basic.ip_proto = VAR_10->basic.ip_proto;
 } else {
  VAR_6->addrs.v6addrs.src = VAR_9->saddr;
  VAR_6->addrs.v6addrs.dst = VAR_9->daddr;
  VAR_6->tags.flow_label = FUNC_0(VAR_9);
  VAR_6->basic.ip_proto = VAR_9->nexthdr;
 }
}
