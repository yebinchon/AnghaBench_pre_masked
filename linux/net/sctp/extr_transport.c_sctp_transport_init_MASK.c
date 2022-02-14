
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sa_family; } ;
union sctp_addr {TYPE_1__ sa; } ;
struct sctp_transport {int param_flags; int refcnt; int hb_nonce; int proto_unreach_timer; int reconf_timer; int hb_timer; int T3_rtx_timer; int transports; int send_ready; int transmitted; int pf_retrans; int pathmaxrxt; int last_time_ecne_reduced; scalar_t__ last_time_heard; int rto; scalar_t__ sack_generation; int saddr; TYPE_3__* af_specific; int ipaddr; } ;
struct TYPE_5__ {int pf_retrans; int max_retrans_path; int rto_initial; } ;
struct net {TYPE_2__ sctp; } ;
typedef int gfp_t ;
struct TYPE_6__ {int sockaddr_len; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int VAR_3 ;
 int FUNC_2 (int *,union sctp_addr const*,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static struct sctp_transport *FUNC_8(struct net *VAR_8,
        struct sctp_transport *VAR_9,
        const union sctp_addr *VAR_10,
        gfp_t VAR_11)
{

 VAR_9->af_specific = FUNC_6(VAR_10->sa.sa_family);
 FUNC_2(&VAR_9->ipaddr, VAR_10, VAR_9->af_specific->sockaddr_len);
 FUNC_3(&VAR_9->saddr, 0, sizeof(union sctp_addr));

 VAR_9->sack_generation = 0;







 VAR_9->rto = FUNC_4(VAR_8->sctp.rto_initial);

 VAR_9->last_time_heard = 0;
 VAR_9->last_time_ecne_reduced = VAR_3;

 VAR_9->param_flags = VAR_0 |
       VAR_1 |
       VAR_2;


 VAR_9->pathmaxrxt = VAR_8->sctp.max_retrans_path;
 VAR_9->pf_retrans = VAR_8->sctp.pf_retrans;

 FUNC_0(&VAR_9->transmitted);
 FUNC_0(&VAR_9->send_ready);
 FUNC_0(&VAR_9->transports);

 FUNC_7(&VAR_9->T3_rtx_timer, VAR_7, 0);
 FUNC_7(&VAR_9->hb_timer, VAR_4, 0);
 FUNC_7(&VAR_9->reconf_timer, VAR_6, 0);
 FUNC_7(&VAR_9->proto_unreach_timer,
      VAR_5, 0);


 FUNC_1(&VAR_9->hb_nonce, sizeof(VAR_9->hb_nonce));

 FUNC_5(&VAR_9->refcnt, 1);

 return VAR_9;
}
