
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {int sin6_family; } ;
struct TYPE_4__ {int xp_addrlen; TYPE_2__ xp_raddr; } ;
typedef TYPE_1__ SVCXPRT ;




 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct sockaddr_storage const*,int) ;

void
FUNC_1(SVCXPRT *VAR_1, const struct sockaddr_storage *VAR_2)
{
 switch (VAR_2->ss_family) {
 case 128:
  FUNC_0(&VAR_1->xp_raddr, VAR_2, sizeof(struct sockaddr_in6));
  VAR_1->xp_addrlen = sizeof (struct sockaddr_in6);
  break;
 case 129:
  FUNC_0(&VAR_1->xp_raddr, VAR_2, sizeof(struct sockaddr_in));
  VAR_1->xp_addrlen = sizeof (struct sockaddr_in);
  break;
 default:
  VAR_1->xp_raddr.sin6_family = VAR_0;
  VAR_1->xp_addrlen = sizeof (struct sockaddr);
  break;
 }
}
