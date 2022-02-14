
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int tcp_mstamp; scalar_t__ app_limited; } ;
struct sock {int dummy; } ;
struct bbr {int idle_restart; scalar_t__ mode; scalar_t__ ack_epoch_acked; int ack_epoch_mstamp; } ;
typedef enum tcp_ca_event { ____Placeholder_tcp_ca_event } tcp_ca_event ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ,int ) ;
 struct bbr* FUNC_3 (struct sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_4, enum tcp_ca_event VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_4(VAR_4);
 struct bbr *VAR_7 = FUNC_3(VAR_4);

 if (VAR_5 == VAR_3 && VAR_6->app_limited) {
  VAR_7->idle_restart = 1;
  VAR_7->ack_epoch_mstamp = VAR_6->tcp_mstamp;
  VAR_7->ack_epoch_acked = 0;



  if (VAR_7->mode == VAR_0)
   FUNC_2(VAR_4, FUNC_0(VAR_4), VAR_2);
  else if (VAR_7->mode == VAR_1)
   FUNC_1(VAR_4);
 }
}
