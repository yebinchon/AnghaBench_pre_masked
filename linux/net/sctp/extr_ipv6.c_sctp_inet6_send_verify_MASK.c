
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sin6_scope_id; int sin6_addr; } ;
struct TYPE_8__ {scalar_t__ sa_family; } ;
union sctp_addr {TYPE_2__ v6; TYPE_4__ sa; } ;
struct TYPE_5__ {int sk; } ;
struct sctp_sock {TYPE_3__* pf; TYPE_1__ inet; } ;
struct sctp_af {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {struct sctp_af* af; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct sctp_af* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct sctp_sock *VAR_2, union sctp_addr *VAR_3)
{
 struct sctp_af *VAR_4 = ((void*)0);


 if (VAR_3->sa.sa_family != VAR_0)
  VAR_4 = FUNC_4(VAR_3->sa.sa_family);
 else {
  int VAR_5 = FUNC_1(&VAR_3->v6.sin6_addr);
  struct net_device *VAR_6;

  if (VAR_5 & VAR_1) {
   if (!VAR_3->v6.sin6_scope_id)
    return 0;
   FUNC_2();
   VAR_6 = FUNC_0(FUNC_5(&VAR_2->inet.sk),
         VAR_3->v6.sin6_scope_id);
   FUNC_3();
   if (!VAR_6)
    return 0;
  }
  VAR_4 = VAR_2->pf->af;
 }

 return VAR_4 != ((void*)0);
}
