
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {int flowi6_oif; scalar_t__ fl6_icmp_code; int fl6_icmp_type; int flowi6_proto; struct in6_addr daddr; struct in6_addr saddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct flowi6*) ;
 int FUNC_1 (struct flowi6*,int ,int) ;
 int FUNC_2 (struct sock*,int ) ;

void FUNC_3(struct sock *VAR_1, struct flowi6 *VAR_2,
        u8 VAR_3,
        const struct in6_addr *VAR_4,
        const struct in6_addr *VAR_5,
        int VAR_6)
{
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->saddr = *VAR_4;
 VAR_2->daddr = *VAR_5;
 VAR_2->flowi6_proto = VAR_0;
 VAR_2->fl6_icmp_type = VAR_3;
 VAR_2->fl6_icmp_code = 0;
 VAR_2->flowi6_oif = VAR_6;
 FUNC_2(VAR_1, FUNC_0(VAR_2));
}
