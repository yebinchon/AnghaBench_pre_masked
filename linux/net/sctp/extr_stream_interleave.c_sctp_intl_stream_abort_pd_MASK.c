
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int (* sk_data_ready ) (struct sock*) ;int sk_receive_queue; } ;
struct sctp_ulpq {TYPE_2__* asoc; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_sock {int data_ready_signalled; } ;
typedef int gfp_t ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_3__ {struct sock* sk; } ;
struct TYPE_4__ {int subscribe; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct sctp_ulpevent*) ;
 struct sctp_sock* FUNC_2 (struct sock*) ;
 struct sctp_ulpevent* FUNC_3 (TYPE_2__*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(struct sctp_ulpq *VAR_2, __u16 VAR_3,
          __u32 VAR_4, __u16 VAR_5, gfp_t VAR_6)
{
 struct sock *VAR_7 = VAR_2->asoc->base.sk;
 struct sctp_ulpevent *VAR_8 = ((void*)0);

 if (!FUNC_4(VAR_2->asoc->subscribe,
     VAR_1))
  return;

 VAR_8 = FUNC_3(VAR_2->asoc, VAR_0,
          VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8) {
  struct sctp_sock *VAR_9 = FUNC_2(VAR_7);

  FUNC_0(&VAR_7->sk_receive_queue, FUNC_1(VAR_8));

  if (!VAR_9->data_ready_signalled) {
   VAR_9->data_ready_signalled = 1;
   VAR_7->sk_data_ready(VAR_7);
  }
 }
}
