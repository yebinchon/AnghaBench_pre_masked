
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {int dummy; } ;
struct ipv6hdr {int version; int hop_limit; int daddr; int saddr; int nexthdr; int payload_len; } ;
struct TYPE_2__ {int sin6_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ipv6hdr*,int ,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_3)
{
 struct ipv6hdr *VAR_4 = VAR_3;

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->version = 6;
 VAR_4->payload_len = FUNC_0(sizeof(struct udphdr) + VAR_1);
 VAR_4->nexthdr = VAR_0;
 VAR_4->hop_limit = 64;

 VAR_4->saddr = VAR_2;
 VAR_4->daddr = VAR_2;



 return sizeof(*VAR_4);
}
