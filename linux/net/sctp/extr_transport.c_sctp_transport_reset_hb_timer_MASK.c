
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expires; } ;
struct sctp_transport {int rto; TYPE_1__ hb_timer; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_transport*) ;
 unsigned long FUNC_3 (struct sctp_transport*) ;
 scalar_t__ FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(struct sctp_transport *VAR_1)
{
 unsigned long VAR_2;


 VAR_2 = VAR_0 + FUNC_3(VAR_1);
 if ((FUNC_4(VAR_1->hb_timer.expires, VAR_2) ||
      !FUNC_5(&VAR_1->hb_timer)) &&
     !FUNC_0(&VAR_1->hb_timer,
         VAR_2 + FUNC_1(VAR_1->rto)))
  FUNC_2(VAR_1);
}
