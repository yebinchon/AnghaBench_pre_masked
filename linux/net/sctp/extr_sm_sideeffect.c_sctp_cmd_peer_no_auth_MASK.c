
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_ulpevent {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct TYPE_4__ {TYPE_1__* si; } ;
struct sctp_association {int ulpq; TYPE_2__ stream; } ;
struct TYPE_3__ {int (* enqueue_event ) (int *,struct sctp_ulpevent*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct sctp_ulpevent* FUNC_0 (struct sctp_association*,int ,int ,int ) ;
 int FUNC_1 (int *,struct sctp_ulpevent*) ;

__attribute__((used)) static void FUNC_2(struct sctp_cmd_seq *VAR_2,
      struct sctp_association *VAR_3)
{
 struct sctp_ulpevent *VAR_4;

 VAR_4 = FUNC_0(VAR_3, 0, VAR_1, VAR_0);
 if (VAR_4)
  VAR_3->stream.si->enqueue_event(&VAR_3->ulpq, VAR_4);
}
