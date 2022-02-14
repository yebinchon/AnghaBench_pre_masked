
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct inet_sock {int inet_dport; int inet_daddr; int inet_rcv_saddr; } ;


 struct inet_sock* FUNC_0 (struct sock const*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(const struct sock *VAR_0)
{
 const struct inet_sock *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->inet_rcv_saddr,
       VAR_1->inet_daddr,
       VAR_1->inet_dport);
}
