
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_rcvbuf; } ;
struct sk_buff {int dummy; } ;
struct sctp_transport {int dummy; } ;
struct sctp_ep_common {scalar_t__ type; } ;
struct sctp_chunk {struct sctp_ep_common* rcvr; struct sctp_transport* transport; } ;
struct TYPE_2__ {struct sctp_chunk* chunk; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sctp_ep_common*) ;
 int FUNC_5 (struct sctp_transport*) ;
 int FUNC_6 (struct sock*,struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct sctp_chunk *VAR_4 = FUNC_2(VAR_3)->chunk;
 struct sctp_transport *VAR_5 = VAR_4->transport;
 struct sctp_ep_common *VAR_6 = VAR_4->rcvr;
 int VAR_7;

 VAR_7 = FUNC_6(VAR_2, VAR_3, FUNC_1(VAR_2->sk_rcvbuf));
 if (!VAR_7) {




  if (VAR_0 == VAR_6->type)
   FUNC_5(VAR_5);
  else if (VAR_1 == VAR_6->type)
   FUNC_3(FUNC_4(VAR_6));
  else
   FUNC_0();
 }
 return VAR_7;

}
