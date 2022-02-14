
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int s6_addr32; } ;
struct TYPE_3__ {int s6_addr32; } ;
struct sock {TYPE_2__ sk_v6_daddr; TYPE_1__ sk_v6_rcv_saddr; } ;
struct inet_sock {int inet_dport; } ;


 struct inet_sock* FUNC_0 (struct sock const*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(const struct sock *VAR_0)
{
 const struct inet_sock *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_0->sk_v6_rcv_saddr.s6_addr32,
       VAR_0->sk_v6_daddr.s6_addr32,
       VAR_1->inet_dport);
}
