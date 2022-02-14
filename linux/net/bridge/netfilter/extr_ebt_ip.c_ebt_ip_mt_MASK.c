
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ code; } ;
struct TYPE_4__ {int src; int dst; } ;
union pkthdr {scalar_t__ tos; int saddr; int daddr; scalar_t__ protocol; int ihl; TYPE_3__ igmphdr; TYPE_2__ icmphdr; TYPE_1__ tcpudphdr; int frag_off; } ;
typedef scalar_t__ u32 ;
struct xt_action_param {struct ebt_ip_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct iphdr {scalar_t__ tos; int saddr; int daddr; scalar_t__ protocol; int ihl; TYPE_3__ igmphdr; TYPE_2__ icmphdr; TYPE_1__ tcpudphdr; int frag_off; } ;
struct ebt_ip_info {int bitmask; scalar_t__ tos; int smsk; int saddr; int dmsk; int daddr; scalar_t__ protocol; scalar_t__* dport; scalar_t__* sport; scalar_t__* icmp_type; scalar_t__* icmp_code; scalar_t__* igmp_type; } ;
typedef int _pkthdr ;
typedef int _iph ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct ebt_ip_info const*,int,int) ;
 int FUNC_1 (int ) ;
 union pkthdr* FUNC_2 (struct sk_buff const*,int,int,union pkthdr*) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_9, struct xt_action_param *VAR_10)
{
 const struct ebt_ip_info *VAR_11 = VAR_10->matchinfo;
 const struct iphdr *VAR_12;
 struct iphdr VAR_13;
 const union pkthdr *VAR_14;
 union pkthdr VAR_15;

 VAR_12 = FUNC_2(VAR_9, 0, sizeof(VAR_13), &VAR_13);
 if (VAR_12 == ((void*)0))
  return 0;
 if ((VAR_11->bitmask & VAR_7) &&
     FUNC_0(VAR_11, VAR_7, VAR_11->tos != VAR_12->tos))
  return 0;
 if ((VAR_11->bitmask & VAR_5) &&
     FUNC_0(VAR_11, VAR_5,
      (VAR_12->saddr & VAR_11->smsk) != VAR_11->saddr))
  return 0;
 if ((VAR_11->bitmask & VAR_0) &&
     FUNC_0(VAR_11, VAR_0,
      (VAR_12->daddr & VAR_11->dmsk) != VAR_11->daddr))
  return 0;
 if (VAR_11->bitmask & VAR_4) {
  if (FUNC_0(VAR_11, VAR_4, VAR_11->protocol != VAR_12->protocol))
   return 0;
  if (!(VAR_11->bitmask & (VAR_1 | VAR_6 |
           VAR_2 | VAR_3)))
   return 1;
  if (FUNC_1(VAR_12->frag_off) & VAR_8)
   return 0;


  VAR_14 = FUNC_2(VAR_9, VAR_12->ihl*4,
       sizeof(VAR_15), &VAR_15);
  if (VAR_14 == ((void*)0))
   return 0;
  if (VAR_11->bitmask & VAR_1) {
   u32 VAR_16 = FUNC_1(VAR_14->tcpudphdr.dst);
   if (FUNC_0(VAR_11, VAR_1,
        VAR_16 < VAR_11->dport[0] ||
        VAR_16 > VAR_11->dport[1]))
    return 0;
  }
  if (VAR_11->bitmask & VAR_6) {
   u32 VAR_17 = FUNC_1(VAR_14->tcpudphdr.src);
   if (FUNC_0(VAR_11, VAR_6,
        VAR_17 < VAR_11->sport[0] ||
        VAR_17 > VAR_11->sport[1]))
    return 0;
  }
  if ((VAR_11->bitmask & VAR_2) &&
      FUNC_0(VAR_11, VAR_2,
       VAR_14->icmphdr.type < VAR_11->icmp_type[0] ||
       VAR_14->icmphdr.type > VAR_11->icmp_type[1] ||
       VAR_14->icmphdr.code < VAR_11->icmp_code[0] ||
       VAR_14->icmphdr.code > VAR_11->icmp_code[1]))
   return 0;
  if ((VAR_11->bitmask & VAR_3) &&
      FUNC_0(VAR_11, VAR_3,
       VAR_14->igmphdr.type < VAR_11->igmp_type[0] ||
       VAR_14->igmphdr.type > VAR_11->igmp_type[1]))
   return 0;
 }
 return 1;
}
