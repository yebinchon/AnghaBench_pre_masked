
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct TYPE_6__ {int changeover_active; int cycling_changeover; int next_tsn_at_change; } ;
struct sctp_transport {scalar_t__ state; TYPE_3__ cacc; int ipaddr; } ;
struct TYPE_5__ {int out_qlen; int outstanding_bytes; } ;
struct TYPE_4__ {struct sctp_transport* active_path; int primary_addr; struct sctp_transport* primary_path; } ;
struct sctp_association {int next_tsn; TYPE_2__ outqueue; TYPE_1__ peer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,int) ;

void FUNC_1(struct sctp_association *VAR_2,
       struct sctp_transport *VAR_3)
{
 int VAR_4 = 0;




 if (VAR_2->peer.primary_path != ((void*)0) &&
     VAR_2->peer.primary_path != VAR_3)
  VAR_4 = 1 ;

 VAR_2->peer.primary_path = VAR_3;


 FUNC_0(&VAR_2->peer.primary_addr, &VAR_3->ipaddr,
        sizeof(union sctp_addr));




 if ((VAR_3->state == VAR_0) ||
     (VAR_3->state == VAR_1))
  VAR_2->peer.active_path = VAR_3;
 if (!VAR_2->outqueue.outstanding_bytes && !VAR_2->outqueue.out_qlen)
  return;

 if (VAR_3->cacc.changeover_active)
  VAR_3->cacc.cycling_changeover = VAR_4;




 VAR_3->cacc.changeover_active = VAR_4;




 VAR_3->cacc.next_tsn_at_change = VAR_2->next_tsn;
}
