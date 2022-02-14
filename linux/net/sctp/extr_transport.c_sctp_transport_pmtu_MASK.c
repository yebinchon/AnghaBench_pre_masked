
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sctp_transport {int param_flags; scalar_t__ pathmtu; TYPE_2__* dst; struct sctp_association* asoc; int fl; int saddr; TYPE_1__* af_specific; } ;
struct sctp_association {scalar_t__ pathmtu; } ;
struct TYPE_4__ {scalar_t__ obsolete; } ;
struct TYPE_3__ {int (* get_dst ) (struct sctp_transport*,int *,int *,struct sock*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct sctp_transport*) ;
 int FUNC_2 (struct sctp_transport*,int *,int *,struct sock*) ;

void FUNC_3(struct sctp_transport *VAR_2, struct sock *VAR_3)
{

 if (!VAR_2->dst || VAR_2->dst->obsolete) {
  FUNC_1(VAR_2);
  VAR_2->af_specific->get_dst(VAR_2, &VAR_2->saddr,
      &VAR_2->fl, VAR_3);
 }

 if (VAR_2->param_flags & VAR_1) {
  struct sctp_association *VAR_4 = VAR_2->asoc;

  if (!VAR_2->pathmtu && VAR_4 && VAR_4->pathmtu)
   VAR_2->pathmtu = VAR_4->pathmtu;
  if (VAR_2->pathmtu)
   return;
 }

 if (VAR_2->dst)
  VAR_2->pathmtu = FUNC_0(VAR_2->dst);
 else
  VAR_2->pathmtu = VAR_0;
}
