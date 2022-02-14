
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_transport {int saddr; scalar_t__ dst; int fl; struct sctp_af* af_specific; struct sctp_association* asoc; } ;
struct sctp_sock {TYPE_2__* pf; } ;
struct TYPE_6__ {int sk; } ;
struct TYPE_4__ {struct sctp_transport* active_path; int primary_path; } ;
struct sctp_association {TYPE_3__ base; TYPE_1__ peer; } ;
struct sctp_af {int (* get_saddr ) (struct sctp_sock*,struct sctp_transport*,int *) ;int (* get_dst ) (struct sctp_transport*,union sctp_addr*,int *,int ) ;} ;
struct TYPE_5__ {int (* to_sk_saddr ) (int *,int ) ;} ;


 int FUNC_0 (int *,union sctp_addr*,int) ;
 int FUNC_1 (struct sctp_sock*) ;
 int FUNC_2 (struct sctp_transport*) ;
 int FUNC_3 (struct sctp_transport*,int ) ;
 int FUNC_4 (struct sctp_transport*,union sctp_addr*,int *,int ) ;
 int FUNC_5 (struct sctp_sock*,struct sctp_transport*,int *) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(struct sctp_transport *VAR_0,
     union sctp_addr *VAR_1, struct sctp_sock *VAR_2)
{
 struct sctp_association *VAR_3 = VAR_0->asoc;
 struct sctp_af *VAR_4 = VAR_0->af_specific;

 FUNC_2(VAR_0);
 VAR_4->get_dst(VAR_0, VAR_1, &VAR_0->fl, FUNC_1(VAR_2));

 if (VAR_1)
  FUNC_0(&VAR_0->saddr, VAR_1, sizeof(union sctp_addr));
 else
  VAR_4->get_saddr(VAR_2, VAR_0, &VAR_0->fl);

 FUNC_3(VAR_0, FUNC_1(VAR_2));




 if (VAR_0->dst && VAR_3 &&
     (!VAR_3->peer.primary_path || VAR_0 == VAR_3->peer.active_path))
  VAR_2->pf->to_sk_saddr(&VAR_0->saddr, VAR_3->base.sk);
}
