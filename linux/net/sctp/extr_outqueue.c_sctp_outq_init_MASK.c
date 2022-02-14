
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_outq {int abandoned; int sacked; int retransmit; int control_chunk_list; int out_chunk_list; struct sctp_association* asoc; } ;
struct TYPE_3__ {int sk; } ;
struct sctp_association {TYPE_1__ base; } ;
struct TYPE_4__ {int default_ss; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sctp_outq*,int ,int) ;
 int FUNC_2 (struct sctp_association*,int ) ;
 TYPE_2__* FUNC_3 (int ) ;

void FUNC_4(struct sctp_association *VAR_0, struct sctp_outq *VAR_1)
{
 FUNC_1(VAR_1, 0, sizeof(struct sctp_outq));

 VAR_1->asoc = VAR_0;
 FUNC_0(&VAR_1->out_chunk_list);
 FUNC_0(&VAR_1->control_chunk_list);
 FUNC_0(&VAR_1->retransmit);
 FUNC_0(&VAR_1->sacked);
 FUNC_0(&VAR_1->abandoned);
 FUNC_2(VAR_0, FUNC_3(VAR_0->base.sk)->default_ss);
}
