
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct sock {int sk_rcvbuf; scalar_t__ sk_family; } ;
struct TYPE_13__ {int sinit_max_init_timeo; int sinit_max_attempts; int sinit_num_ostreams; int sinit_max_instreams; } ;
struct TYPE_12__ {int srto_min; int srto_max; int srto_initial; } ;
struct TYPE_20__ {int sasoc_asocmaxrxt; int sasoc_cookie_life; } ;
struct sctp_sock {int autoclose; int default_rcv_context; int default_timetolive; int default_context; int default_flags; int default_ppid; int default_stream; int pathmtu; TYPE_2__ initmsg; int subscribe; int max_burst; int param_flags; int sackfreq; int sackdelay; int dscp; int flowlabel; int pathmaxrxt; int hbinterval; TYPE_1__ rtoinfo; int pf_retrans; TYPE_9__ assocparams; int user_frag; } ;
struct sctp_paramhdr {int length; int type; } ;
struct TYPE_18__ {int port; } ;
struct TYPE_19__ {TYPE_7__ bind_addr; } ;
struct sctp_endpoint {TYPE_10__* auth_chunk_list; TYPE_10__* auth_hmacs_list; int strreset_enable; int active_key_id; TYPE_8__ base; } ;
struct TYPE_17__ {struct sock* sk; int inqueue; int bind_addr; int refcnt; int type; } ;
struct TYPE_16__ {scalar_t__ auth_random; int auth_chunks; int auth_hmacs; int sinit_num_ostreams; scalar_t__ initial_tsn; int my_port; int my_vtag; int sinit_max_instreams; } ;
struct TYPE_14__ {int sack_needed; int sack_generation; int ipv4_address; int ipv6_address; int transport_addr_list; int rwnd; } ;
struct sctp_association {int rto_initial; int rto_max; int sackdelay; int* timeouts; int rwnd; int a_rwnd; struct sctp_endpoint* ep; TYPE_6__ base; int stream; TYPE_5__ c; int strreset_enable; int active_key_id; int endpoint_shared_keys; int default_rcv_context; int default_timetolive; int default_context; int default_flags; int default_ppid; int default_stream; int asocs; TYPE_3__ peer; int pathmtu; int ulpq; int outqueue; int asconf_ack_list; int addip_chunk_list; scalar_t__ strreset_outseq; scalar_t__ addip_serial; scalar_t__ ctsn_ack_point; scalar_t__ last_cwr_tsn; scalar_t__ highest_sacked; scalar_t__ adv_peer_ack_point; scalar_t__ next_tsn; int wait; int rmem_alloc; void* max_init_timeo; int max_init_attempts; int * timers; int subscribe; int max_burst; int param_flags; int sackfreq; int dscp; int flowlabel; int pathmaxrxt; void* hbinterval; void* rto_min; int pf_retrans; int max_retrans; int user_frag; int cookie_life; int state; } ;
typedef int gfp_t ;
typedef enum sctp_scope { ____Placeholder_sctp_scope } sctp_scope ;
struct TYPE_15__ {int length; } ;
struct TYPE_11__ {TYPE_4__ param_hdr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct sctp_paramhdr*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_10__*,int ) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int) ;
 int VAR_16 ;
 int FUNC_10 (struct sctp_association*) ;
 scalar_t__ FUNC_11 (struct sctp_endpoint const*,struct sctp_association*,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct sctp_endpoint*) ;
 int FUNC_14 (struct sctp_endpoint*) ;
 int FUNC_15 (struct sctp_endpoint const*) ;
 scalar_t__ FUNC_16 (struct sctp_endpoint const*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (struct sctp_association*,int *) ;
 struct sctp_sock* FUNC_20 (struct sock*) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int *,int ,int ,int ) ;
 int * VAR_17 ;
 int FUNC_23 (int *,struct sctp_association*) ;
 int FUNC_24 (struct sock*) ;
 int FUNC_25 (struct sock*) ;
 int FUNC_26 (int *,int ,int ) ;

__attribute__((used)) static struct sctp_association *FUNC_27(
     struct sctp_association *VAR_18,
     const struct sctp_endpoint *VAR_19,
     const struct sock *VAR_20,
     enum sctp_scope VAR_21, gfp_t VAR_22)
{
 struct sctp_sock *VAR_23;
 struct sctp_paramhdr *VAR_24;
 int VAR_25;


 VAR_23 = FUNC_20((struct sock *)VAR_20);


 VAR_18->ep = (struct sctp_endpoint *)VAR_19;
 VAR_18->base.sk = (struct sock *)VAR_20;

 FUNC_13(VAR_18->ep);
 FUNC_24(VAR_18->base.sk);


 VAR_18->base.type = VAR_5;


 FUNC_9(&VAR_18->base.refcnt, 1);


 FUNC_12(&VAR_18->base.bind_addr, VAR_19->base.bind_addr.port);

 VAR_18->state = VAR_15;
 VAR_18->cookie_life = FUNC_6(VAR_23->assocparams.sasoc_cookie_life);
 VAR_18->user_frag = VAR_23->user_frag;




 VAR_18->max_retrans = VAR_23->assocparams.sasoc_asocmaxrxt;
 VAR_18->pf_retrans = VAR_23->pf_retrans;

 VAR_18->rto_initial = FUNC_7(VAR_23->rtoinfo.srto_initial);
 VAR_18->rto_max = FUNC_7(VAR_23->rtoinfo.srto_max);
 VAR_18->rto_min = FUNC_7(VAR_23->rtoinfo.srto_min);




 VAR_18->hbinterval = FUNC_7(VAR_23->hbinterval);


 VAR_18->pathmaxrxt = VAR_23->pathmaxrxt;

 VAR_18->flowlabel = VAR_23->flowlabel;
 VAR_18->dscp = VAR_23->dscp;


 VAR_18->sackdelay = FUNC_7(VAR_23->sackdelay);
 VAR_18->sackfreq = VAR_23->sackfreq;




 VAR_18->param_flags = VAR_23->param_flags;




 VAR_18->max_burst = VAR_23->max_burst;

 VAR_18->subscribe = VAR_23->subscribe;


 VAR_18->timeouts[VAR_9] = VAR_18->rto_initial;
 VAR_18->timeouts[VAR_10] = VAR_18->rto_initial;
 VAR_18->timeouts[VAR_11] = VAR_18->rto_initial;





 VAR_18->timeouts[VAR_12]
  = 5 * VAR_18->rto_max;

 VAR_18->timeouts[VAR_8] = VAR_18->sackdelay;
 VAR_18->timeouts[VAR_6] = VAR_23->autoclose * VAR_0;


 for (VAR_25 = VAR_7; VAR_25 < VAR_13; ++VAR_25)
  FUNC_26(&VAR_18->timers[VAR_25], VAR_17[VAR_25], 0);





 VAR_18->c.sinit_max_instreams = VAR_23->initmsg.sinit_max_instreams;
 VAR_18->c.sinit_num_ostreams = VAR_23->initmsg.sinit_num_ostreams;
 VAR_18->max_init_attempts = VAR_23->initmsg.sinit_max_attempts;

 VAR_18->max_init_timeo =
   FUNC_7(VAR_23->initmsg.sinit_max_init_timeo);






 if ((VAR_20->sk_rcvbuf/2) < VAR_4)
  VAR_18->rwnd = VAR_4;
 else
  VAR_18->rwnd = VAR_20->sk_rcvbuf/2;

 VAR_18->a_rwnd = VAR_18->rwnd;


 VAR_18->peer.rwnd = VAR_3;


 FUNC_1(&VAR_18->rmem_alloc, 0);

 FUNC_4(&VAR_18->wait);

 VAR_18->c.my_vtag = FUNC_15(VAR_19);
 VAR_18->c.my_port = VAR_19->base.bind_addr.port;

 VAR_18->c.initial_tsn = FUNC_16(VAR_19);

 VAR_18->next_tsn = VAR_18->c.initial_tsn;

 VAR_18->ctsn_ack_point = VAR_18->next_tsn - 1;
 VAR_18->adv_peer_ack_point = VAR_18->ctsn_ack_point;
 VAR_18->highest_sacked = VAR_18->ctsn_ack_point;
 VAR_18->last_cwr_tsn = VAR_18->ctsn_ack_point;
 VAR_18->addip_serial = VAR_18->c.initial_tsn;
 VAR_18->strreset_outseq = VAR_18->c.initial_tsn;

 FUNC_0(&VAR_18->addip_chunk_list);
 FUNC_0(&VAR_18->asconf_ack_list);


 FUNC_0(&VAR_18->peer.transport_addr_list);
 VAR_18->peer.sack_needed = 1;
 VAR_18->peer.sack_generation = 1;


 FUNC_17(&VAR_18->base.inqueue);
 FUNC_18(&VAR_18->base.inqueue, VAR_16);


 FUNC_19(VAR_18, &VAR_18->outqueue);

 if (!FUNC_23(&VAR_18->ulpq, VAR_18))
  goto fail_init;

 if (FUNC_22(&VAR_18->stream, VAR_18->c.sinit_num_ostreams,
        0, VAR_22))
  goto fail_init;


 VAR_18->pathmtu = VAR_23->pathmtu;
 FUNC_10(VAR_18);




 VAR_18->peer.ipv4_address = 1;
 if (VAR_18->base.sk->sk_family == VAR_1)
  VAR_18->peer.ipv6_address = 1;
 FUNC_0(&VAR_18->asocs);

 VAR_18->default_stream = VAR_23->default_stream;
 VAR_18->default_ppid = VAR_23->default_ppid;
 VAR_18->default_flags = VAR_23->default_flags;
 VAR_18->default_context = VAR_23->default_context;
 VAR_18->default_timetolive = VAR_23->default_timetolive;
 VAR_18->default_rcv_context = VAR_23->default_rcv_context;


 FUNC_0(&VAR_18->endpoint_shared_keys);
 if (FUNC_11(VAR_19, VAR_18, VAR_22))
  goto stream_free;

 VAR_18->active_key_id = VAR_19->active_key_id;
 VAR_18->strreset_enable = VAR_19->strreset_enable;


 if (VAR_19->auth_hmacs_list)
  FUNC_5(VAR_18->c.auth_hmacs, VAR_19->auth_hmacs_list,
   FUNC_8(VAR_19->auth_hmacs_list->param_hdr.length));
 if (VAR_19->auth_chunk_list)
  FUNC_5(VAR_18->c.auth_chunks, VAR_19->auth_chunk_list,
   FUNC_8(VAR_19->auth_chunk_list->param_hdr.length));


 VAR_24 = (struct sctp_paramhdr *)VAR_18->c.auth_random;
 VAR_24->type = VAR_14;
 VAR_24->length = FUNC_3(sizeof(*VAR_24) + VAR_2);
 FUNC_2(VAR_24+1, VAR_2);

 return VAR_18;

stream_free:
 FUNC_21(&VAR_18->stream);
fail_init:
 FUNC_25(VAR_18->base.sk);
 FUNC_14(VAR_18->ep);
 return ((void*)0);
}
