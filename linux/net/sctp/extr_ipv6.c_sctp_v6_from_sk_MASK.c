
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sin6_addr; scalar_t__ sin6_port; int sin6_family; } ;
union sctp_addr {TYPE_1__ v6; } ;
struct sock {int sk_v6_rcv_saddr; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(union sctp_addr *VAR_1, struct sock *VAR_2)
{
 VAR_1->v6.sin6_family = VAR_0;
 VAR_1->v6.sin6_port = 0;
 VAR_1->v6.sin6_addr = VAR_2->sk_v6_rcv_saddr;
}
