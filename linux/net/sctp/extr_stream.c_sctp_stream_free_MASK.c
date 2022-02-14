
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_stream {int outcnt; int in; int out; } ;
struct sctp_sched_ops {int (* free ) (struct sctp_stream*) ;} ;
struct TYPE_2__ {int ext; } ;


 TYPE_1__* FUNC_0 (struct sctp_stream*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct sctp_sched_ops* FUNC_3 (struct sctp_stream*) ;
 int FUNC_4 (struct sctp_stream*) ;

void FUNC_5(struct sctp_stream *VAR_0)
{
 struct sctp_sched_ops *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_1->free(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_0->outcnt; VAR_2++)
  FUNC_2(FUNC_0(VAR_0, VAR_2)->ext);
 FUNC_1(&VAR_0->out);
 FUNC_1(&VAR_0->in);
}
