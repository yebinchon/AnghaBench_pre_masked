
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {scalar_t__ rto; int T3_rtx_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct sctp_transport*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct sctp_transport *VAR_1)
{
 if (!FUNC_2(&VAR_1->T3_rtx_timer))
  if (!FUNC_0(&VAR_1->T3_rtx_timer,
          VAR_0 + VAR_1->rto))
   FUNC_1(VAR_1);
}
