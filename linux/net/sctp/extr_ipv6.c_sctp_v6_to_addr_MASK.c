
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct TYPE_4__ {scalar_t__ sin6_scope_id; struct in6_addr sin6_addr; scalar_t__ sin6_flowinfo; int sin6_port; } ;
struct TYPE_3__ {int sa_family; } ;
union sctp_addr {TYPE_2__ v6; TYPE_1__ sa; } ;
typedef int __be16 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(union sctp_addr *VAR_1, struct in6_addr *VAR_2,
         __be16 VAR_3)
{
 VAR_1->sa.sa_family = VAR_0;
 VAR_1->v6.sin6_port = VAR_3;
 VAR_1->v6.sin6_flowinfo = 0;
 VAR_1->v6.sin6_addr = *VAR_2;
 VAR_1->v6.sin6_scope_id = 0;
}
