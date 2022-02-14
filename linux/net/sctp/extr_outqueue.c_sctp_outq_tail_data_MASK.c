
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_stream_out_ext {int outq; } ;
struct sctp_outq {TYPE_1__* asoc; int out_qlen; int out_chunk_list; } ;
struct sctp_chunk {int stream_list; TYPE_2__* skb; int list; } ;
typedef int __u16 ;
struct TYPE_6__ {struct sctp_stream_out_ext* ext; } ;
struct TYPE_5__ {scalar_t__ len; } ;
struct TYPE_4__ {int stream; } ;


 TYPE_3__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct sctp_chunk*) ;

__attribute__((used)) static inline void FUNC_3(struct sctp_outq *VAR_0,
           struct sctp_chunk *VAR_1)
{
 struct sctp_stream_out_ext *VAR_2;
 __u16 VAR_3;

 FUNC_1(&VAR_1->list, &VAR_0->out_chunk_list);
 VAR_0->out_qlen += VAR_1->skb->len;

 VAR_3 = FUNC_2(VAR_1);
 VAR_2 = FUNC_0(&VAR_0->asoc->stream, VAR_3)->ext;
 FUNC_1(&VAR_1->stream_list, &VAR_2->outq);
}
