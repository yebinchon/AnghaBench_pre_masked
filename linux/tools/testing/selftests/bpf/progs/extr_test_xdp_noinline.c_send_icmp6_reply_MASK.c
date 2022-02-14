
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * u6_addr32; } ;
struct TYPE_8__ {TYPE_3__ in6_u; } ;
struct TYPE_5__ {int * u6_addr32; } ;
struct TYPE_6__ {TYPE_1__ in6_u; } ;
struct ipv6hdr {int hop_limit; TYPE_4__ daddr; TYPE_2__ saddr; } ;
struct icmp6hdr {int icmp6_type; int icmp6_cksum; } ;
struct eth_hdr {int dummy; } ;
typedef int __u64 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (void*,void*) ;

__attribute__((used)) static __attribute__ ((noinline))
int FUNC_2(void *VAR_1, void *VAR_2)
{
 struct icmp6hdr *VAR_3;
 struct ipv6hdr *VAR_4;
 __be32 VAR_5[4];
 __u64 VAR_6 = 0;

 if (VAR_1 + sizeof(struct eth_hdr)
      + sizeof(struct ipv6hdr) + sizeof(struct icmp6hdr) > VAR_2)
  return VAR_0;
 VAR_6 += sizeof(struct eth_hdr);
 VAR_4 = VAR_1 + VAR_6;
 VAR_6 += sizeof(struct ipv6hdr);
 VAR_3 = VAR_1 + VAR_6;
 VAR_3->icmp6_type = 129;
 VAR_3->icmp6_cksum -= 0x0001;
 VAR_4->hop_limit = 4;
 FUNC_0(VAR_5, VAR_4->saddr.in6_u.u6_addr32, 16);
 FUNC_0(VAR_4->saddr.in6_u.u6_addr32, VAR_4->daddr.in6_u.u6_addr32, 16);
 FUNC_0(VAR_4->daddr.in6_u.u6_addr32, VAR_5, 16);
 return FUNC_1(VAR_1, VAR_2);
}
