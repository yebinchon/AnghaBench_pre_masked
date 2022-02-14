
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; scalar_t__ code; } ;
struct TYPE_3__ {int src; int dst; } ;
union pkthdr {scalar_t__ nexthdr; TYPE_2__ icmphdr; TYPE_1__ tcpudphdr; int daddr; int saddr; } ;
typedef scalar_t__ uint8_t ;
typedef scalar_t__ u16 ;
struct xt_action_param {struct ebt_ip6_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {scalar_t__ nexthdr; TYPE_2__ icmphdr; TYPE_1__ tcpudphdr; int daddr; int saddr; } ;
struct ebt_ip6_info {int bitmask; scalar_t__ tclass; scalar_t__ protocol; scalar_t__* dport; scalar_t__* sport; scalar_t__* icmpv6_type; scalar_t__* icmpv6_code; int daddr; int dmsk; int saddr; int smsk; } ;
typedef int _pkthdr ;
typedef int _ip6h ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ebt_ip6_info const*,int,int) ;
 scalar_t__ FUNC_1 (union pkthdr const*) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (struct sk_buff const*,int,scalar_t__*,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 union pkthdr* FUNC_5 (struct sk_buff const*,int,int,union pkthdr*) ;

__attribute__((used)) static bool
FUNC_6(const struct sk_buff *VAR_7, struct xt_action_param *VAR_8)
{
 const struct ebt_ip6_info *VAR_9 = VAR_8->matchinfo;
 const struct ipv6hdr *VAR_10;
 struct ipv6hdr VAR_11;
 const union pkthdr *VAR_12;
 union pkthdr VAR_13;

 VAR_10 = FUNC_5(VAR_7, 0, sizeof(VAR_11), &VAR_11);
 if (VAR_10 == ((void*)0))
  return 0;
 if ((VAR_9->bitmask & VAR_6) &&
     FUNC_0(VAR_9, VAR_6,
      VAR_9->tclass != FUNC_1(VAR_10)))
  return 0;
 if (((VAR_9->bitmask & VAR_4) &&
      FUNC_0(VAR_9, VAR_4,
       FUNC_2(&VAR_10->saddr, &VAR_9->smsk,
       &VAR_9->saddr))) ||
     ((VAR_9->bitmask & VAR_0) &&
      FUNC_0(VAR_9, VAR_0,
       FUNC_2(&VAR_10->daddr, &VAR_9->dmsk,
       &VAR_9->daddr))))
  return 0;
 if (VAR_9->bitmask & VAR_3) {
  uint8_t VAR_14 = VAR_10->nexthdr;
  __be16 VAR_15;
  int VAR_16;

  VAR_16 = FUNC_3(VAR_7, sizeof(VAR_11), &VAR_14, &VAR_15);
  if (VAR_16 == -1)
   return 0;
  if (FUNC_0(VAR_9, VAR_3, VAR_9->protocol != VAR_14))
   return 0;
  if (!(VAR_9->bitmask & (VAR_1 |
           VAR_5 | VAR_2)))
   return 1;


  VAR_12 = FUNC_5(VAR_7, VAR_16, sizeof(VAR_13),
       &VAR_13);
  if (VAR_12 == ((void*)0))
   return 0;
  if (VAR_9->bitmask & VAR_1) {
   u16 VAR_17 = FUNC_4(VAR_12->tcpudphdr.dst);
   if (FUNC_0(VAR_9, VAR_1,
        VAR_17 < VAR_9->dport[0] ||
        VAR_17 > VAR_9->dport[1]))
    return 0;
  }
  if (VAR_9->bitmask & VAR_5) {
   u16 VAR_18 = FUNC_4(VAR_12->tcpudphdr.src);
   if (FUNC_0(VAR_9, VAR_5,
        VAR_18 < VAR_9->sport[0] ||
        VAR_18 > VAR_9->sport[1]))
    return 0;
  }
  if ((VAR_9->bitmask & VAR_2) &&
      FUNC_0(VAR_9, VAR_2,
       VAR_12->icmphdr.type < VAR_9->icmpv6_type[0] ||
       VAR_12->icmphdr.type > VAR_9->icmpv6_type[1] ||
       VAR_12->icmphdr.code < VAR_9->icmpv6_code[0] ||
       VAR_12->icmphdr.code > VAR_9->icmpv6_code[1]))
   return 0;
 }
 return 1;
}
