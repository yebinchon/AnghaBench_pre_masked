
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sctp_flush_ctx {TYPE_8__* q; TYPE_7__* packet; TYPE_6__* transport; TYPE_5__* asoc; int gfp; int transport_list; } ;
struct TYPE_17__ {int retransmit; } ;
struct TYPE_16__ {scalar_t__ has_cookie_echo; } ;
struct TYPE_15__ {scalar_t__ state; int last_time_sent; int send_ready; TYPE_7__ packet; } ;
struct TYPE_13__ {TYPE_3__* sk; } ;
struct TYPE_10__ {int init_tag; } ;
struct TYPE_11__ {int ecn_capable; TYPE_1__ i; TYPE_6__* retran_path; } ;
struct TYPE_14__ {TYPE_4__ base; TYPE_2__ peer; } ;
struct TYPE_12__ {int sk_err; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_8__*,TYPE_7__*,int,int*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_7__*,int ,int ) ;
 int FUNC_4 (TYPE_6__*) ;

__attribute__((used)) static bool FUNC_5(struct sctp_flush_ctx *VAR_2,
    int VAR_3)
{
 int VAR_4, VAR_5 = 0;

 if (VAR_2->asoc->peer.retran_path->state == VAR_0)
  return 0;

 if (VAR_2->transport != VAR_2->asoc->peer.retran_path) {

  VAR_2->transport = VAR_2->asoc->peer.retran_path;
  VAR_2->packet = &VAR_2->transport->packet;

  if (FUNC_2(&VAR_2->transport->send_ready))
   FUNC_1(&VAR_2->transport->send_ready,
          &VAR_2->transport_list);

  FUNC_3(VAR_2->packet, VAR_2->asoc->peer.i.init_tag,
       VAR_2->asoc->peer.ecn_capable);
 }

 VAR_4 = FUNC_0(VAR_2->q, VAR_2->packet, VAR_3,
          &VAR_5, VAR_2->gfp);
 if (VAR_4 < 0)
  VAR_2->asoc->base.sk->sk_err = -VAR_4;

 if (VAR_5) {
  FUNC_4(VAR_2->transport);
  VAR_2->transport->last_time_sent = VAR_1;
 }




 if (VAR_2->packet->has_cookie_echo)
  return 0;




 if (!FUNC_2(&VAR_2->q->retransmit))
  return 0;

 return 1;
}
