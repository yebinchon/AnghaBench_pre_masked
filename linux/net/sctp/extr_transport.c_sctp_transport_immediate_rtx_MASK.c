
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_transport {scalar_t__ rto; int T3_rtx_timer; TYPE_1__* asoc; } ;
struct TYPE_2__ {int outqueue; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,struct sctp_transport*,int ) ;
 int FUNC_3 (struct sctp_transport*) ;
 int FUNC_4 (struct sctp_transport*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct sctp_transport *VAR_2)
{

 if (FUNC_0(&VAR_2->T3_rtx_timer))
  FUNC_4(VAR_2);

 FUNC_2(&VAR_2->asoc->outqueue, VAR_2, VAR_0);
 if (!FUNC_5(&VAR_2->T3_rtx_timer)) {
  if (!FUNC_1(&VAR_2->T3_rtx_timer, VAR_1 + VAR_2->rto))
   FUNC_3(VAR_2);
 }
}
