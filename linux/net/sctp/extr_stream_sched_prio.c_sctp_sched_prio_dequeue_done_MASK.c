
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_stream_priorities {int dummy; } ;
struct sctp_stream_out_ext {int outq; struct sctp_stream_priorities* prio_head; } ;
struct sctp_outq {TYPE_1__* asoc; } ;
struct sctp_chunk {int dummy; } ;
typedef int __u16 ;
struct TYPE_4__ {struct sctp_stream_out_ext* ext; } ;
struct TYPE_3__ {int stream; } ;


 TYPE_2__* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct sctp_chunk*) ;
 int FUNC_3 (struct sctp_stream_priorities*) ;
 int FUNC_4 (struct sctp_stream_out_ext*) ;

__attribute__((used)) static void FUNC_5(struct sctp_outq *VAR_0,
      struct sctp_chunk *VAR_1)
{
 struct sctp_stream_priorities *VAR_2;
 struct sctp_stream_out_ext *VAR_3;
 __u16 VAR_4;




 VAR_4 = FUNC_2(VAR_1);
 VAR_3 = FUNC_0(&VAR_0->asoc->stream, VAR_4)->ext;
 VAR_2 = VAR_3->prio_head;

 FUNC_3(VAR_2);

 if (FUNC_1(&VAR_3->outq))
  FUNC_4(VAR_3);
}
