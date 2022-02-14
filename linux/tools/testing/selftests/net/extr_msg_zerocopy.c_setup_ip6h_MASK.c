
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sockaddr_in6 {int sin6_addr; } ;
struct ipv6hdr {int version; int hop_limit; int daddr; int saddr; int nexthdr; int payload_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipv6hdr*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ipv6hdr *VAR_3, uint16_t VAR_4)
{
 struct sockaddr_in6 *VAR_5 = (void *) &VAR_1;
 struct sockaddr_in6 *VAR_6 = (void *) &VAR_2;

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->version = 6;
 VAR_3->payload_len = FUNC_0(VAR_4);
 VAR_3->nexthdr = VAR_0;
 VAR_3->hop_limit = 2;
 VAR_3->saddr = VAR_6->sin6_addr;
 VAR_3->daddr = VAR_5->sin6_addr;

 return sizeof(*VAR_3);
}
