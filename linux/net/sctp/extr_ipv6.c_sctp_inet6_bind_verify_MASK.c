
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int sin6_addr; int sin6_scope_id; } ;
struct TYPE_7__ {scalar_t__ sa_family; } ;
union sctp_addr {TYPE_5__ v6; TYPE_1__ sa; } ;
struct TYPE_8__ {scalar_t__ freebind; int sk; } ;
struct sctp_sock {TYPE_6__* pf; TYPE_2__ inet; } ;
struct sctp_af {int (* available ) (union sctp_addr*,struct sctp_sock*) ;} ;
struct net_device {int dummy; } ;
struct TYPE_9__ {scalar_t__ ip_nonlocal_bind; } ;
struct TYPE_10__ {TYPE_3__ sysctl; } ;
struct net {TYPE_4__ ipv6; } ;
struct TYPE_12__ {struct sctp_af* af; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct net*,int *,struct net_device*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct sctp_af* FUNC_5 (scalar_t__) ;
 struct net* FUNC_6 (int *) ;
 int FUNC_7 (union sctp_addr*,struct sctp_sock*) ;

__attribute__((used)) static int FUNC_8(struct sctp_sock *VAR_2, union sctp_addr *VAR_3)
{
 struct sctp_af *VAR_4;


 if (VAR_3->sa.sa_family != VAR_0)
  VAR_4 = FUNC_5(VAR_3->sa.sa_family);
 else {
  int VAR_5 = FUNC_1(&VAR_3->v6.sin6_addr);
  struct net_device *VAR_6;

  if (VAR_5 & VAR_1) {
   struct net *VAR_7;
   if (!VAR_3->v6.sin6_scope_id)
    return 0;
   VAR_7 = FUNC_6(&VAR_2->inet.sk);
   FUNC_3();
   VAR_6 = FUNC_0(VAR_7, VAR_3->v6.sin6_scope_id);
   if (!VAR_6 || !(VAR_2->inet.freebind ||
          VAR_7->ipv6.sysctl.ip_nonlocal_bind ||
          FUNC_2(VAR_7, &VAR_3->v6.sin6_addr,
          VAR_6, 0))) {
    FUNC_4();
    return 0;
   }
   FUNC_4();
  }

  VAR_4 = VAR_2->pf->af;
 }
 return VAR_4->available(VAR_3, VAR_2);
}
