
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ reo_wnd_persist; } ;
struct tcp_sock {scalar_t__ snd_una; scalar_t__ high_seq; scalar_t__ is_sack_reneg; scalar_t__ retrans_stamp; TYPE_1__ rack; } ;
struct sock {int dummy; } ;
struct TYPE_4__ {scalar_t__ icsk_ca_state; } ;


 int FUNC_0 (struct sock*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct tcp_sock*) ;
 scalar_t__ FUNC_6 (struct tcp_sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 struct tcp_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int) ;

__attribute__((used)) static bool FUNC_10(struct sock *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_8(VAR_4);

 if (FUNC_6(VAR_5)) {
  int VAR_6;




  FUNC_0(VAR_4, FUNC_2(VAR_4)->icsk_ca_state == VAR_2 ? "loss" : "retrans");
  FUNC_9(VAR_4, 0);
  if (FUNC_2(VAR_4)->icsk_ca_state == VAR_2)
   VAR_6 = VAR_1;
  else
   VAR_6 = VAR_0;

  FUNC_1(FUNC_3(VAR_4), VAR_6);
 } else if (VAR_5->rack.reo_wnd_persist) {
  VAR_5->rack.reo_wnd_persist--;
 }
 if (VAR_5->snd_una == VAR_5->high_seq && FUNC_5(VAR_5)) {



  if (!FUNC_4(VAR_4))
   VAR_5->retrans_stamp = 0;
  return 1;
 }
 FUNC_7(VAR_4, VAR_3);
 VAR_5->is_sack_reneg = 0;
 return 0;
}
