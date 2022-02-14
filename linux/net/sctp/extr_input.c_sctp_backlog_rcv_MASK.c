
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_rcvbuf; } ;
struct sk_buff {int dummy; } ;
struct sctp_transport {int dummy; } ;
struct sctp_inq {int dummy; } ;
struct sctp_ep_common {scalar_t__ type; struct sock* sk; scalar_t__ dead; struct sctp_inq inqueue; } ;
struct sctp_chunk {struct sctp_ep_common* rcvr; struct sctp_transport* transport; } ;
struct TYPE_2__ {struct sctp_chunk* chunk; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct sctp_chunk*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sctp_ep_common*) ;
 int FUNC_10 (struct sctp_inq*,struct sctp_chunk*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sctp_transport*) ;
 scalar_t__ FUNC_13 (struct sock*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_14 (struct sock*) ;
 scalar_t__ FUNC_15 (int) ;

int FUNC_16(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct sctp_chunk *VAR_4 = FUNC_2(VAR_3)->chunk;
 struct sctp_inq *VAR_5 = &VAR_4->rcvr->inqueue;
 struct sctp_transport *VAR_6 = VAR_4->transport;
 struct sctp_ep_common *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 VAR_7 = VAR_4->rcvr;





 if (VAR_7->dead) {
  FUNC_7(VAR_4);
  goto done;
 }

 if (FUNC_15(VAR_7->sk != VAR_2)) {
  VAR_2 = VAR_7->sk;
  FUNC_5();
  FUNC_3(VAR_2);

  if (FUNC_14(VAR_2) || !FUNC_11(VAR_2)) {
   if (FUNC_13(VAR_2, VAR_3, FUNC_1(VAR_2->sk_rcvbuf)))
    FUNC_7(VAR_4);
   else
    VAR_8 = 1;
  } else
   FUNC_10(VAR_5, VAR_4);

  FUNC_4(VAR_2);
  FUNC_6();


  if (VAR_8)
   return 0;
 } else {
  if (!FUNC_11(VAR_2)) {
   if (!FUNC_13(VAR_2, VAR_3, FUNC_1(VAR_2->sk_rcvbuf)))
    return 0;
   FUNC_7(VAR_4);
  } else {
   FUNC_10(VAR_5, VAR_4);
  }
 }

done:

 if (VAR_0 == VAR_7->type)
  FUNC_12(VAR_6);
 else if (VAR_1 == VAR_7->type)
  FUNC_8(FUNC_9(VAR_7));
 else
  FUNC_0();

 return 0;
}
