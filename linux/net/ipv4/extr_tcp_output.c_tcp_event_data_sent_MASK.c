
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ lsndtime; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ const lrcvtime; scalar_t__ ato; } ;
struct inet_connection_sock {TYPE_1__ icsk_ack; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__ const) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (struct tcp_sock*) ;

__attribute__((used)) static void FUNC_5(struct tcp_sock *VAR_2,
    struct sock *VAR_3)
{
 struct inet_connection_sock *VAR_4 = FUNC_1(VAR_3);
 const u32 VAR_5 = VAR_1;

 if (FUNC_4(VAR_2) == 0)
  FUNC_3(VAR_3, VAR_0);






 if (FUNC_0(VAR_2->lsndtime, VAR_4->icsk_ack.lrcvtime) &&
     (u32)(VAR_5 - VAR_4->icsk_ack.lrcvtime) < VAR_4->icsk_ack.ato)
  FUNC_2(VAR_3);

 VAR_2->lsndtime = VAR_5;
}
