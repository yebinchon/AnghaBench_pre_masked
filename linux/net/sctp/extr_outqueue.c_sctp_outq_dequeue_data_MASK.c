
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_outq {TYPE_1__* sched; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_2__ {struct sctp_chunk* (* dequeue ) (struct sctp_outq*) ;} ;


 struct sctp_chunk* FUNC_0 (struct sctp_outq*) ;

__attribute__((used)) static inline struct sctp_chunk *FUNC_1(struct sctp_outq *VAR_0)
{
 return VAR_0->sched->dequeue(VAR_0);
}
