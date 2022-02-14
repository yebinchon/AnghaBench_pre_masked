
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int s_addr; } ;
struct TYPE_7__ {TYPE_4__ sin_addr; } ;
union sctp_addr {TYPE_3__ v4; } ;
struct TYPE_6__ {int freebind; int sk; } ;
struct sctp_sock {TYPE_2__ inet; } ;
struct TYPE_5__ {int sysctl_ip_nonlocal_bind; } ;
struct net {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sctp_sock*) ;
 struct net* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(union sctp_addr *VAR_2, struct sctp_sock *VAR_3)
{
 struct net *VAR_4 = FUNC_4(&VAR_3->inet.sk);
 int VAR_5 = FUNC_1(VAR_4, VAR_2->v4.sin_addr.s_addr);


 if (VAR_2->v4.sin_addr.s_addr != FUNC_0(VAR_0) &&
    VAR_5 != VAR_1 &&
    !VAR_3->inet.freebind &&
    !VAR_4->ipv4.sysctl_ip_nonlocal_bind)
  return 0;

 if (FUNC_2(FUNC_3(VAR_3)))
  return 0;

 return 1;
}
