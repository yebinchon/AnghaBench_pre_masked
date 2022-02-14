
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * root; } ;
struct TYPE_8__ {TYPE_3__ tree; } ;
struct TYPE_5__ {int * root; } ;
struct TYPE_6__ {TYPE_1__ tree; } ;
struct sctp_stream {scalar_t__ incnt; int outcnt; TYPE_4__ in; TYPE_2__ out; } ;
struct sctp_sched_ops {int (* sched_all ) (struct sctp_stream*) ;int (* unsched_all ) (struct sctp_stream*) ;} ;


 struct sctp_sched_ops* FUNC_0 (struct sctp_stream*) ;
 int FUNC_1 (struct sctp_stream*) ;
 int FUNC_2 (struct sctp_stream*,struct sctp_stream*,int ) ;
 int FUNC_3 (struct sctp_stream*) ;
 int FUNC_4 (struct sctp_stream*) ;

void FUNC_5(struct sctp_stream *VAR_0, struct sctp_stream *VAR_1)
{
 struct sctp_sched_ops *VAR_2 = FUNC_0(VAR_0);

 VAR_2->unsched_all(VAR_0);
 FUNC_2(VAR_0, VAR_1, VAR_1->outcnt);
 FUNC_1(VAR_0);

 VAR_0->out = VAR_1->out;
 VAR_0->in = VAR_1->in;
 VAR_0->outcnt = VAR_1->outcnt;
 VAR_0->incnt = VAR_1->incnt;

 VAR_2->sched_all(VAR_0);

 VAR_1->out.tree.root = ((void*)0);
 VAR_1->in.tree.root = ((void*)0);
 VAR_1->outcnt = 0;
 VAR_1->incnt = 0;
}
