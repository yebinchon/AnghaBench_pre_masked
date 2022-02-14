
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {TYPE_1__ sin_addr; int sin_family; } ;
union sctp_addr {TYPE_2__ v4; } ;
struct sctp_transport {scalar_t__ dst; union sctp_addr saddr; } ;
struct sctp_sock {int dummy; } ;
struct rtable {int dummy; } ;
struct TYPE_7__ {int saddr; } ;
struct TYPE_8__ {TYPE_3__ ip4; } ;
struct flowi {TYPE_4__ u; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct sctp_sock *VAR_1,
         struct sctp_transport *VAR_2,
         struct flowi *VAR_3)
{
 union sctp_addr *VAR_4 = &VAR_2->saddr;
 struct rtable *VAR_5 = (struct rtable *)VAR_2->dst;

 if (VAR_5) {
  VAR_4->v4.sin_family = VAR_0;
  VAR_4->v4.sin_addr.s_addr = VAR_3->u.ip4.saddr;
 }
}
