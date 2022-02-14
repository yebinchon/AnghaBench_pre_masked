
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct udphdr {int dummy; } ;
struct ipv6hdr {scalar_t__ payload_len; int nexthdr; int saddr; } ;


 unsigned long FUNC_0 (void*,int) ;
 int FUNC_1 (void*,int,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static uint16_t FUNC_3(const struct ipv6hdr *VAR_0,
      const struct udphdr *VAR_1,
      int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4 = sizeof(VAR_0->saddr);

 VAR_3 = FUNC_0((void *) &VAR_0->saddr, VAR_4);
 VAR_3 += FUNC_2(VAR_0->nexthdr);
 VAR_3 += VAR_0->payload_len;
 return FUNC_1((void *) VAR_1, VAR_2, VAR_3);
}
