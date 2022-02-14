
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sctp_transport {size_t flight_size; size_t cwnd; int pathmtu; struct sctp_association* asoc; } ;
struct sctp_packet {int overhead; struct sctp_transport* transport; } ;
struct sctp_outq {size_t outstanding_bytes; int out_qlen; } ;
struct sctp_chunk {scalar_t__ fast_retransmit; TYPE_5__* msg; TYPE_4__* asoc; TYPE_3__* skb; } ;
struct TYPE_8__ {int sk; } ;
struct TYPE_7__ {size_t rwnd; } ;
struct sctp_association {int force_delay; TYPE_2__ base; TYPE_1__ peer; struct sctp_outq outqueue; } ;
typedef enum sctp_xmit { ____Placeholder_sctp_xmit } sctp_xmit ;
struct TYPE_12__ {scalar_t__ nodelay; } ;
struct TYPE_11__ {int can_delay; } ;
struct TYPE_10__ {int stream; } ;
struct TYPE_9__ {int len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (struct sctp_chunk*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sctp_packet*) ;
 TYPE_6__* FUNC_3 (int ) ;
 int FUNC_4 (struct sctp_association*,int ) ;

__attribute__((used)) static enum sctp_xmit FUNC_5(struct sctp_packet *VAR_5,
        struct sctp_chunk *VAR_6)
{
 size_t VAR_7, VAR_8, VAR_9, VAR_10;
 struct sctp_transport *VAR_11 = VAR_5->transport;
 struct sctp_association *VAR_12 = VAR_11->asoc;
 struct sctp_outq *VAR_13 = &VAR_12->outqueue;
 VAR_8 = VAR_12->peer.rwnd;
 VAR_9 = VAR_13->outstanding_bytes;
 VAR_10 = VAR_11->flight_size;

 VAR_7 = FUNC_0(VAR_6);

 if (VAR_7 > VAR_8 && VAR_9 > 0)



  return VAR_4;
 if (VAR_6->fast_retransmit != VAR_1 &&
     VAR_10 >= VAR_11->cwnd)
  return VAR_4;







 if ((FUNC_3(VAR_12->base.sk)->nodelay || VAR_9 == 0) &&
     !VAR_12->force_delay)

  return VAR_3;

 if (!FUNC_2(VAR_5))

  return VAR_3;

 if (!FUNC_4(VAR_12, VAR_0))
  return VAR_3;




 if (VAR_6->skb->len + VAR_13->out_qlen > VAR_11->pathmtu -
     VAR_5->overhead - FUNC_1(&VAR_6->asoc->stream) - 4)

  return VAR_3;


 if (!VAR_6->msg->can_delay)
  return VAR_3;


 return VAR_2;
}
