
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sin6_addr; } ;
union sctp_addr {TYPE_1__ v6; } ;
struct TYPE_9__ {scalar_t__ freebind; int sk; } ;
struct sctp_sock {TYPE_4__ inet; } ;
struct TYPE_7__ {scalar_t__ ip_nonlocal_bind; } ;
struct TYPE_8__ {TYPE_2__ sysctl; } ;
struct net {TYPE_3__ ipv6; } ;
struct in6_addr {int dummy; } ;
struct TYPE_10__ {int (* available ) (union sctp_addr*,struct sctp_sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct in6_addr const*) ;
 scalar_t__ FUNC_1 (struct net*,struct in6_addr const*,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (struct sctp_sock*) ;
 int FUNC_5 (union sctp_addr*) ;
 struct net* FUNC_6 (int *) ;
 int FUNC_7 (union sctp_addr*,struct sctp_sock*) ;

__attribute__((used)) static int FUNC_8(union sctp_addr *VAR_4, struct sctp_sock *VAR_5)
{
 int VAR_6;
 struct net *VAR_7 = FUNC_6(&VAR_5->inet.sk);
 const struct in6_addr *VAR_8 = (const struct in6_addr *)&VAR_4->v6.sin6_addr;

 VAR_6 = FUNC_0(VAR_8);
 if (VAR_1 == VAR_6)
  return 1;
 if (VAR_6 == VAR_2) {
  if (VAR_5 && FUNC_2(FUNC_4(VAR_5)))
   return 0;
  FUNC_5(VAR_4);
  return FUNC_3(VAR_0)->available(VAR_4, VAR_5);
 }
 if (!(VAR_6 & VAR_3))
  return 0;

 return VAR_5->inet.freebind || VAR_7->ipv6.sysctl.ip_nonlocal_bind ||
  FUNC_1(VAR_7, VAR_8, ((void*)0), 0);
}
