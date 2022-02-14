
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_outq {scalar_t__ out_qlen; scalar_t__ outstanding_bytes; int retransmit; } ;


 scalar_t__ FUNC_0 (int *) ;

int FUNC_1(const struct sctp_outq *VAR_0)
{
 return VAR_0->out_qlen == 0 && VAR_0->outstanding_bytes == 0 &&
        FUNC_0(&VAR_0->retransmit);
}
