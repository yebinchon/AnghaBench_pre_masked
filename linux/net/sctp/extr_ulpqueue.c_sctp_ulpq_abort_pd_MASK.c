
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int (* sk_data_ready ) (struct sock*) ;int sk_receive_queue; } ;
struct sctp_ulpq {TYPE_2__* asoc; int pd_mode; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_sock {int data_ready_signalled; } ;
typedef int gfp_t ;
struct TYPE_3__ {struct sock* sk; } ;
struct TYPE_4__ {int subscribe; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct sctp_ulpevent*) ;
 struct sctp_sock* FUNC_2 (struct sock*) ;
 struct sctp_ulpevent* FUNC_3 (TYPE_2__*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct sctp_ulpq*) ;
 int FUNC_6 (struct sock*) ;

void FUNC_7(struct sctp_ulpq *VAR_2, gfp_t VAR_3)
{
 struct sctp_ulpevent *VAR_4 = ((void*)0);
 struct sctp_sock *VAR_5;
 struct sock *VAR_6;

 if (!VAR_2->pd_mode)
  return;

 VAR_6 = VAR_2->asoc->base.sk;
 VAR_5 = FUNC_2(VAR_6);
 if (FUNC_4(VAR_2->asoc->subscribe,
           VAR_1))
  VAR_4 = FUNC_3(VAR_2->asoc,
           VAR_0,
           0, 0, 0, VAR_3);
 if (VAR_4)
  FUNC_0(&VAR_6->sk_receive_queue, FUNC_1(VAR_4));


 if ((FUNC_5(VAR_2) || VAR_4) && !VAR_5->data_ready_signalled) {
  VAR_5->data_ready_signalled = 1;
  VAR_6->sk_data_ready(VAR_6);
 }
}
