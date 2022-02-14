
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; int sin6_scope_id; scalar_t__ sin6_flowinfo; int sin6_port; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_bound_dev_if; int sk_v6_daddr; } ;
struct TYPE_2__ {int inet_dport; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct sock *VAR_1, struct sockaddr *VAR_2)
{
 struct sockaddr_in6 *VAR_3 = (struct sockaddr_in6 *) VAR_2;

 VAR_3->sin6_family = VAR_0;
 VAR_3->sin6_addr = VAR_1->sk_v6_daddr;
 VAR_3->sin6_port = FUNC_0(VAR_1)->inet_dport;

 VAR_3->sin6_flowinfo = 0;
 VAR_3->sin6_scope_id = FUNC_1(&VAR_3->sin6_addr,
        VAR_1->sk_bound_dev_if);
}
