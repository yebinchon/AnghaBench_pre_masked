
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sockaddr_in6 {int sin6_addr; } ;
struct ipv6hdr {int version; int hop_limit; int daddr; int saddr; int nexthdr; int payload_len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ipv6hdr*,int ) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, uint8_t VAR_1,
         struct sockaddr_in6 *VAR_2,
         struct sockaddr_in6 *VAR_3,
         int VAR_4, uint8_t VAR_5)
{
 struct ipv6hdr *VAR_6 = VAR_0;

 VAR_6->version = 6;
 VAR_6->payload_len = FUNC_0(VAR_4);
 VAR_6->nexthdr = VAR_1;
 VAR_6->hop_limit = 8;
 FUNC_1(VAR_6, VAR_5);

 FUNC_2(&VAR_6->saddr, &VAR_2->sin6_addr, sizeof(VAR_6->saddr));
 FUNC_2(&VAR_6->daddr, &VAR_3->sin6_addr, sizeof(VAR_6->daddr));
}
