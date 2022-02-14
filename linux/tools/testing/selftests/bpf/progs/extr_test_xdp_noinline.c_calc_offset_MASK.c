
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;
struct icmphdr {int dummy; } ;
struct icmp6hdr {int dummy; } ;
struct eth_hdr {int dummy; } ;
typedef int __u64 ;



__attribute__((used)) static inline __u64 FUNC_0(bool VAR_0, bool VAR_1)
{
 __u64 VAR_2 = sizeof(struct eth_hdr);
 if (VAR_0) {
  VAR_2 += sizeof(struct ipv6hdr);
  if (VAR_1)
   VAR_2 += sizeof(struct icmp6hdr) + sizeof(struct ipv6hdr);
 } else {
  VAR_2 += sizeof(struct iphdr);
  if (VAR_1)
   VAR_2 += sizeof(struct icmphdr) + sizeof(struct iphdr);
 }
 return VAR_2;
}
