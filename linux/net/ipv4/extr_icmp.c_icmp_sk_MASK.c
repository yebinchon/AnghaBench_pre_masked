
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int * icmp_sk; } ;
struct net {TYPE_1__ ipv4; } ;


 struct sock* FUNC_0 (int ) ;

__attribute__((used)) static struct sock *FUNC_1(struct net *VAR_0)
{
 return FUNC_0(*VAR_0->ipv4.icmp_sk);
}
