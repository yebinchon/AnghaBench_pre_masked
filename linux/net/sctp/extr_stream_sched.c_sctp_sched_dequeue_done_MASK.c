
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sctp_stream_out {int dummy; } ;
struct sctp_outq {TYPE_3__* sched; TYPE_2__* asoc; } ;
struct sctp_chunk {TYPE_4__* msg; int frag_list; } ;
typedef int __u16 ;
struct TYPE_10__ {struct sctp_stream_out* out_curr; } ;
struct TYPE_9__ {int chunks; } ;
struct TYPE_8__ {int (* dequeue_done ) (struct sctp_outq*,struct sctp_chunk*) ;} ;
struct TYPE_6__ {int intl_capable; } ;
struct TYPE_7__ {TYPE_5__ stream; TYPE_1__ peer; } ;


 struct sctp_stream_out* FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct sctp_chunk*) ;
 int FUNC_3 (struct sctp_outq*,struct sctp_chunk*) ;

void FUNC_4(struct sctp_outq *VAR_0, struct sctp_chunk *VAR_1)
{
 if (!FUNC_1(&VAR_1->frag_list, &VAR_1->msg->chunks) &&
     !VAR_0->asoc->peer.intl_capable) {
  struct sctp_stream_out *VAR_2;
  __u16 VAR_3;





  VAR_3 = FUNC_2(VAR_1);
  VAR_2 = FUNC_0(&VAR_0->asoc->stream, VAR_3);
  VAR_0->asoc->stream.out_curr = VAR_2;
  return;
 }

 VAR_0->asoc->stream.out_curr = ((void*)0);
 VAR_0->sched->dequeue_done(VAR_0, VAR_1);
}
