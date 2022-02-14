
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct tcp_sock {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {int ato; void* lrcvtime; } ;
struct inet_connection_sock {int icsk_rto; TYPE_1__ icsk_ack; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct sock*,int ) ;
 void* VAR_2 ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 int FUNC_7 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_8 (struct sock*) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_8(VAR_3);
 struct inet_connection_sock *VAR_6 = FUNC_0(VAR_3);
 u32 VAR_7;

 FUNC_1(VAR_3);

 FUNC_6(VAR_3, VAR_4);

 FUNC_7(VAR_5);

 VAR_7 = VAR_2;

 if (!VAR_6->icsk_ack.ato) {



  FUNC_5(VAR_3, VAR_1);
  VAR_6->icsk_ack.ato = VAR_0;
 } else {
  int VAR_8 = VAR_7 - VAR_6->icsk_ack.lrcvtime;

  if (VAR_8 <= VAR_0 / 2) {

   VAR_6->icsk_ack.ato = (VAR_6->icsk_ack.ato >> 1) + VAR_0 / 2;
  } else if (VAR_8 < VAR_6->icsk_ack.ato) {
   VAR_6->icsk_ack.ato = (VAR_6->icsk_ack.ato >> 1) + VAR_8;
   if (VAR_6->icsk_ack.ato > VAR_6->icsk_rto)
    VAR_6->icsk_ack.ato = VAR_6->icsk_rto;
  } else if (VAR_8 > VAR_6->icsk_rto) {



   FUNC_5(VAR_3, VAR_1);
   FUNC_2(VAR_3);
  }
 }
 VAR_6->icsk_ack.lrcvtime = VAR_7;

 FUNC_3(VAR_3, VAR_4);

 if (VAR_4->len >= 128)
  FUNC_4(VAR_3, VAR_4);
}
