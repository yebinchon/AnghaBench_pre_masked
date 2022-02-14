
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int sin6_addr; void* sin6_port; scalar_t__ sin6_scope_id; scalar_t__ sin6_flowinfo; int sin6_family; } ;
struct TYPE_7__ {int sin_addr; void* sin_port; scalar_t__ sin_family; } ;
struct TYPE_6__ {scalar_t__ sa_family; } ;
union sctp_addr {TYPE_4__ v6; TYPE_2__ v4; TYPE_1__ sa; } ;
struct sctp_ulpevent {struct sctp_association* asoc; } ;
struct TYPE_10__ {int sk; } ;
struct TYPE_8__ {int port; union sctp_addr primary_addr; } ;
struct sctp_association {TYPE_5__ base; TYPE_3__ peer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,union sctp_addr*) ;

__attribute__((used)) static void FUNC_4(struct sctp_ulpevent *VAR_3,
         char *VAR_4, int *VAR_5)
{
 union sctp_addr *VAR_6;
 struct sctp_association *VAR_7;
 union sctp_addr *VAR_8;

 if (!VAR_4)
  return;

 VAR_6 = (union sctp_addr *)VAR_4;
 VAR_7 = VAR_3->asoc;
 VAR_8 = &VAR_7->peer.primary_addr;

 if (VAR_8->sa.sa_family == VAR_0) {
  VAR_6->v4.sin_family = VAR_0;
  VAR_6->v4.sin_port = FUNC_0(VAR_7->peer.port);
  VAR_6->v4.sin_addr = VAR_8->v4.sin_addr;
 } else {
  VAR_6->v6.sin6_family = VAR_1;
  VAR_6->v6.sin6_flowinfo = 0;
  if (FUNC_1(&VAR_8->v6.sin6_addr) & VAR_2)
   VAR_6->v6.sin6_scope_id = VAR_8->v6.sin6_scope_id;
  else
   VAR_6->v6.sin6_scope_id = 0;
  VAR_6->v6.sin6_port = FUNC_0(VAR_7->peer.port);
  VAR_6->v6.sin6_addr = VAR_8->v6.sin6_addr;
 }

 *VAR_5 = FUNC_3(FUNC_2(VAR_7->base.sk), VAR_6);
}
